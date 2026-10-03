// Compatibility layer for code that came out of Ghidra.
//
// Provides the primitive types Ghidra uses, the calling-convention keywords,
// and a few placeholder templates.  Everything here exists only so that
// reconstructed code can be compile-checked; replace usages with real types
// as they are understood.
#pragma once
#include <cstddef>
#include <cstdint>
#include <cstdarg>
#include <new>
#include <string>

// ---- primitive types (Decompile C/ois.exe/types/base.h) -------------------
typedef unsigned char      undefined;
typedef unsigned char      undefined1;
typedef unsigned short     undefined2;
typedef struct { unsigned char b[3]; } undefined3;
typedef unsigned int       undefined4;
typedef unsigned long long undefined8;
typedef unsigned char      byte;
typedef unsigned short     word;
typedef unsigned int       dword;
typedef unsigned int       uint;
typedef unsigned char      uchar;
typedef unsigned short     ushort;
typedef long long          longlong;
typedef unsigned long long ulonglong;
typedef signed char        sbyte;
typedef unsigned char      __uint8;
typedef int                __ehstate_t;
typedef std::uint32_t      pointer32;     // a 32-bit pointer value in the original binary

// ---- a few Windows types the game code mentions ------------------------------
typedef const char *LPCSTR;
typedef char *LPSTR;
typedef void *HMODULE;
typedef void *HANDLE;
typedef void *HWND;
typedef void *HINSTANCE;
typedef int (*FARPROC)();
typedef unsigned long DWORD;
typedef long double float10;   // x87 80-bit; exact width is irrelevant for type-checking

// ---- calling conventions ---------------------------------------------------
// The original is a 32-bit MSVC build.  When compile-checking on a 64-bit
// Linux host these keywords do not exist, so they are erased.  When targeting
// i686-pc-windows-msvc (real build) define OIS_REAL_ABI and they are kept.
#ifndef OIS_REAL_ABI
#  define __thiscall
#  define __cdecl
#  define __stdcall
#  define __fastcall
#endif

namespace ghidra {

// Ghidra could not tell us the element type of std::vector<> instances.
// Opaque placeholder: replace with std::vector<T> once T is known.
struct vector { unsigned char _opaque[12]; };

// std::function-like object whose signature Ghidra could not recover.
struct func_class { unsigned char _opaque[8]; };

// Ghidra could not tell us which Singleton<T> instance a call belongs to.
template <class T> struct Singleton {
    static T *getInstance();
    static T *instance;
};
template <> struct Singleton<void> { static void *instance; };

// `Singleton<>::getInstance()` in Ghidra output lost its template argument; the
// type is whatever pointer the result is assigned to.
struct any_singleton_t {
    template <class T> operator T *() const { return Singleton<T>::getInstance(); }
};
inline any_singleton_t any_singleton() { return {}; }

// Ghidra shows inlined std::string members as free functions taking the string
// as first argument.  These shims keep such calls compiling; replace them with
// ordinary member calls when cleaning a function up.
namespace str {
template <class... A> std::string *assign(std::string *s, A... a) { s->assign(a...); return s; }
template <class... A> std::string *append(std::string *s, A... a) { s->append(a...); return s; }
template <class... A> std::string *ctor(std::string *s, A... a) { return new (s) std::string(a...); }
inline const char *c_str(const std::string *s) { return s->c_str(); }
inline std::size_t size(const std::string *s) { return s->size(); }
}  // namespace str

// Value of unknown type returned by a call through an unrecovered function pointer.
struct any_value {
    template <class T> operator T() const { return T(); }
};

}  // namespace ghidra

using ghidra::Singleton;
// Ghidra's type for "some function": any arguments, any result.
typedef ghidra::any_value code(...);

// ---- Ghidra p-code helper "functions" --------------------------------------
// CONCATnm(a, b): glue an n-byte value (high) to an m-byte value (low).
// SUBnm(v, i):    take the n-byte piece of v starting at byte i.
#define OIS_CONCAT(NAME, HI, LO, T, LOBITS) \
    template <class A, class B> inline T NAME(A hi, B lo) { \
        return (T(hi) << (LOBITS)) | (T(lo) & ((T(1) << (LOBITS)) - 1)); }
OIS_CONCAT(CONCAT11, 1, 1, std::uint16_t, 8)
OIS_CONCAT(CONCAT12, 1, 2, std::uint32_t, 16)
OIS_CONCAT(CONCAT13, 1, 3, std::uint32_t, 24)
OIS_CONCAT(CONCAT21, 2, 1, std::uint32_t, 8)
OIS_CONCAT(CONCAT22, 2, 2, std::uint32_t, 16)
OIS_CONCAT(CONCAT31, 3, 1, std::uint32_t, 8)
OIS_CONCAT(CONCAT35, 3, 5, std::uint64_t, 40)
OIS_CONCAT(CONCAT44, 4, 4, std::uint64_t, 32)
#undef OIS_CONCAT
template <class T> inline std::uint8_t  SUB41(T v, int i) { return std::uint8_t(std::uint64_t(v) >> (8 * i)); }
template <class T> inline std::uint16_t SUB42(T v, int i) { return std::uint16_t(std::uint64_t(v) >> (8 * i)); }
template <class T> inline std::uint32_t SUB43(T v, int i) { return std::uint32_t(std::uint64_t(v) >> (8 * i)) & 0xffffffu; }
template <class T> inline std::uint8_t  SUB81(T v, int i) { return std::uint8_t(std::uint64_t(v) >> (8 * i)); }
template <class T> inline std::uint32_t SUB83(T v, int i) { return std::uint32_t(std::uint64_t(v) >> (8 * i)) & 0xffffffu; }
template <class T> inline std::uint32_t SUB84(T v, int i) { return std::uint32_t(std::uint64_t(v) >> (8 * i)); }

// ---- C runtime entry points Ghidra found inside the executable --------------
[[noreturn]] void _invalid_parameter_noinfo_noreturn();
