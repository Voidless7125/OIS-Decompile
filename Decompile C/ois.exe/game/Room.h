typedef struct Room Room, *PRoom;


struct Room { // PlaceHolder Structure
};


bool __thiscall Room::recheckCharacterRenders(Room *this);
void __thiscall Room::render(Room *this,float param_1,Node *param_2);
void __thiscall Room::cleanupRoom(Room *this);
RoomObject * __thiscall Room::newObject(Room *this);
void __thiscall Room::runLogic(Room *this,float param_1);
ScreenInterface * __thiscall Room::getConsoleInterface(Room *this,int param_1);
Screen_Renderer * __thiscall Room::getConsole(Room *this,int param_1);
RoomObject * __thiscall Room::getObjectForScreenID(Room *this,int param_1);
RoomObject * __thiscall Room::getObject(Room *this,int param_1);
RoomObject * __thiscall Room::getObjectClickedOn(Room *this,float param_2,float param_3);
basic_string<> * __thiscall Room::getObjectTooltipText(undefined4 param_1,basic_string<> *param_2,float param_3,float param_4);
