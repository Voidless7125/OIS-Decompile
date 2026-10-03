typedef struct DatagramHeaderFormat DatagramHeaderFormat, *PDatagramHeaderFormat;


struct DatagramHeaderFormat {
    struct uint24_t datagramNumber;
    float AS;
    bool isACK;
    bool isNAK;
    bool isPacketPair;
    bool hasBAndAS;
    bool isContinuousSend;
    bool needsBAndAs;
    bool isValid;
};


void __thiscall DatagramHeaderFormat::Serialize(DatagramHeaderFormat *this,BitStream *param_1);
void __thiscall DatagramHeaderFormat::Deserialize(DatagramHeaderFormat *this,BitStream *param_1);
