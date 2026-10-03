typedef struct UI_Image UI_Image, *PUI_Image;


struct UI_Image { // PlaceHolder Class Structure
};


UI_Image * __thiscall UI_Image::UI_Image(UI_Image *this,ScreenInterface *param_1,Widget *param_2,bool *param_3,undefined4 param_5,undefined4 param_6,void *param_7);
void * __thiscall UI_Image::`vector_deleting_destructor'(UI_Image *this,uint param_1);
void __thiscall UI_Image::~UI_Image(UI_Image *this);
void __thiscall UI_Image::cleanupRender(UI_Image *this);
void __thiscall UI_Image::render(UI_Image *this);
void __thiscall UI_Image::cacheFrames(UI_Image *this);
void __thiscall UI_Image::specialDataCheckFunction(UI_Image *this,float param_1);
