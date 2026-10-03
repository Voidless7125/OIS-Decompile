struct Queue<RakNet::Packet*> {
    struct Packet **array;
    uint head;
    uint tail;
    uint allocation_size;
};


struct Queue<RakNet::RemoteClient**> {
    struct RemoteClient ***array;
    uint head;
    uint tail;
    uint allocation_size;
};


struct Queue<RakNet::SystemAddress*> {
    struct SystemAddress **array;
    uint head;
    uint tail;
    uint allocation_size;
};


struct Queue<RakNet::SystemAddress> {
    struct SystemAddress *array;
    uint head;
    uint tail;
    uint allocation_size;
};


struct Queue<RakNet::InternalPacket*> {
};


struct Queue<bool> {
};


struct Queue<RakNet::RakPeer::SocketQueryOutput*> {
    struct SocketQueryOutput **array;
    uint head;
    uint tail;
    uint allocation_size;
};


struct Queue<RakNet::BPSTracker::TimeAndValue2> {
};


struct Queue<RakNet::RNS2RecvStruct*> {
    struct RNS2RecvStruct **array;
    uint head;
    uint tail;
    uint allocation_size;
};


struct Queue<RakNet::RakPeer::BufferedCommandStruct*> {
    struct BufferedCommandStruct **array;
    uint head;
    uint tail;
    uint allocation_size;
};


struct Queue<HuffmanEncodingTreeNode*> {
    struct HuffmanEncodingTreeNode **array;
    uint head;
    uint tail;
    uint allocation_size;
};


struct Queue<RakNet::RakPeer::RequestedConnectionStruct*> {
    struct RequestedConnectionStruct **array;
    uint head;
    uint tail;
    uint allocation_size;
};


struct Queue<RakNet::ReliabilityLayer::DatagramHistoryNode> {
};


typedef enum Quadrant {
} Quadrant;


typedef struct Quaternion Quaternion, *PQuaternion;


struct Quaternion { // PlaceHolder Structure
};
