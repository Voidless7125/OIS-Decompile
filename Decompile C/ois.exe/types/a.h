typedef struct _ACTIVATION_CONTEXT _ACTIVATION_CONTEXT, *P_ACTIVATION_CONTEXT;


struct _ACTIVATION_CONTEXT {
};


typedef enum tagAR_STATE AR_STATE;


typedef struct AddressOrGUID AddressOrGUID, *PAddressOrGUID;


struct AddressOrGUID {
    struct RakNetGUID rakNetGuid;
    struct SystemAddress systemAddress;
};


typedef struct aggregatableAttribute aggregatableAttribute, *PaggregatableAttribute;


// WARNING! conflicting data type names: /ois.pdb/__vc_attributes/aggregatableAttribute/type_e - /ois.pdb/__vc_attributes/event_receiverAttribute/type_e
struct aggregatableAttribute {
    enum type_e type;
};


typedef struct AnimationFrames AnimationFrames, *PAnimationFrames;


struct AnimationFrames { // PlaceHolder Structure
};


typedef struct AnimationSet AnimationSet, *PAnimationSet;


struct AnimationSet { // PlaceHolder Structure
};


struct allocator<InputCommand> { // PlaceHolder Structure
};


struct allocator<BootElement> { // PlaceHolder Structure
};


struct allocator<ListData> { // PlaceHolder Structure
};


struct allocator<Shop> { // PlaceHolder Structure
};


struct allocator<CameraPos> { // PlaceHolder Structure
};


struct allocator<word> { // PlaceHolder Structure
};


struct allocator<DockProcessElement> { // PlaceHolder Structure
};


struct allocator<PrivateCommElement> { // PlaceHolder Structure
};


struct allocator<ScreenData> { // PlaceHolder Structure
};


struct allocator<cocos2d::Rect> { // PlaceHolder Structure
};


struct allocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*>_> { // PlaceHolder Structure
};


struct allocator<MouseCursor> { // PlaceHolder Structure
};


struct allocator<BankTransaction> { // PlaceHolder Structure
};


struct allocator<ModuleRenderData> { // PlaceHolder Structure
};


struct allocator<char> { // PlaceHolder Structure
};


struct allocator<Destination> { // PlaceHolder Structure
};


struct allocator<NavMarker> { // PlaceHolder Structure
};


struct allocator<CommsCommand> { // PlaceHolder Structure
};


struct allocator<SensorSelectionElement> { // PlaceHolder Structure
};


struct allocator<UpgradeCommand> { // PlaceHolder Structure
};


struct allocator<std::vector<word,std::allocator<word>_>_> { // PlaceHolder Structure
};


struct allocator<Command> { // PlaceHolder Structure
};


struct allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Structure
};


struct allocator<ScreenTab> { // PlaceHolder Structure
};


struct allocator<PlayerGuidedToPort> { // PlaceHolder Structure
};


struct allocator<PrivateCommOption> { // PlaceHolder Structure
};


struct allocator<JumpGateRoute> { // PlaceHolder Structure
};


struct allocator<ExtraSpawned> { // PlaceHolder Structure
};


struct allocator<Widget> { // PlaceHolder Structure
};


typedef struct Animate3D Animate3D, *PAnimate3D;


struct Animate3D { // PlaceHolder Structure
};


typedef struct AffineTransform AffineTransform, *PAffineTransform;


struct AffineTransform { // PlaceHolder Structure
};


typedef struct Application Application, *PApplication;


struct Application { // PlaceHolder Structure
};


typedef struct Animation3D Animation3D, *PAnimation3D;


struct Animation3D { // PlaceHolder Structure
};


typedef struct ActionManager ActionManager, *PActionManager;


struct ActionManager { // PlaceHolder Structure
};


typedef struct ActionInterval ActionInterval, *PActionInterval;


struct ActionInterval { // PlaceHolder Structure
};


typedef struct Acceleration Acceleration, *PAcceleration;


struct Acceleration { // PlaceHolder Structure
};


typedef struct AABB AABB, *PAABB;


struct AABB { // PlaceHolder Structure
};


typedef struct AmbientLight AmbientLight, *PAmbientLight;


struct AmbientLight { // PlaceHolder Structure
};


typedef struct Action Action, *PAction;


struct Action { // PlaceHolder Structure
};
