#define RX_MB_INDEX  0UL
#define TX_MB_INDEX  1UL
#define RX_MSG_ID    0x7DF
#define TX_MSG_ID    0x7E8
#define MSG_BUF_SIZE 4

typedef struct {
    uint32_t canID;
    uint8_t dlc;
    uint8_t data[8];
} CAN_Message_t;

void FLEXCAN0_init(void);
void FLEXCAN0_transmit_msg(const CAN_Message_t *msg);
int FLEXCAN0_receive_msg(CAN_Message_t *msg);
