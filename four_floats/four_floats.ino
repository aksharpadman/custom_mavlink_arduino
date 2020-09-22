// Call the library
#include <mavlink.h>

// Launch the serial port in setup
void setup() {
  // MAVLink interface start
  Serial.begin(57600);
}

// Loop your program
void loop() {
  mavlink_message_t msg;
  mavlink_status_t status;
  while(Serial.available()>0) {
    uint8_t c = Serial.read();
    // Try to get a new messageß
    if(mavlink_parse_char(MAVLINK_COMM_0, c, &msg, &status)) {
      // Handle message
        if(msg.msgid == MAVLINK_MSG_ID_HEARTBEAT)  // #0: Heartbeat
            {
                mav_send_four_floats();  
            }
        else 
                Serial.println("no heartbeat detected");     
        }   
      }
 }

void mav_send_four_floats() {
  mavlink_message_t msg;
  uint8_t buf[MAVLINK_MAX_PACKET_LEN];
  int sysid = 1;                   ///< ID 20 for this airplane. 1 PX, 255 ground station
  int compid = 158;   ///< The component sending the message
  uint64_t time_stamp = millis();
  float num_1 = 12.2;
  float num_2 = 34.3;
  float num_3 = 43.2;
  float num_4 = 54.4;
  mavlink_msg_four_floats_pack(sysid, compid, &msg, time_stamp, num_1, num_2, num_3, num_4);
    uint16_t len = mavlink_msg_to_send_buffer(buf, &msg);
    Serial.write(buf, len);
}
