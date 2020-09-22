#pragma once
// MESSAGE FOUR_FLOATS PACKING

#define MAVLINK_MSG_ID_FOUR_FLOATS 12906


typedef struct __mavlink_four_floats_t {
 uint64_t time_usec; /*< [us] Timestamp*/
 float first_float; /*<  first float*/
 float second_float; /*<  second float*/
 float third_float; /*<  third float*/
 float fourth_float; /*<  fourth float*/
} mavlink_four_floats_t;

#define MAVLINK_MSG_ID_FOUR_FLOATS_LEN 24
#define MAVLINK_MSG_ID_FOUR_FLOATS_MIN_LEN 24
#define MAVLINK_MSG_ID_12906_LEN 24
#define MAVLINK_MSG_ID_12906_MIN_LEN 24

#define MAVLINK_MSG_ID_FOUR_FLOATS_CRC 246
#define MAVLINK_MSG_ID_12906_CRC 246



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FOUR_FLOATS { \
    12906, \
    "FOUR_FLOATS", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_four_floats_t, time_usec) }, \
         { "first_float", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_four_floats_t, first_float) }, \
         { "second_float", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_four_floats_t, second_float) }, \
         { "third_float", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_four_floats_t, third_float) }, \
         { "fourth_float", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_four_floats_t, fourth_float) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FOUR_FLOATS { \
    "FOUR_FLOATS", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_four_floats_t, time_usec) }, \
         { "first_float", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_four_floats_t, first_float) }, \
         { "second_float", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_four_floats_t, second_float) }, \
         { "third_float", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_four_floats_t, third_float) }, \
         { "fourth_float", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_four_floats_t, fourth_float) }, \
         } \
}
#endif

/**
 * @brief Pack a four_floats message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp
 * @param first_float  first float
 * @param second_float  second float
 * @param third_float  third float
 * @param fourth_float  fourth float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_four_floats_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float first_float, float second_float, float third_float, float fourth_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FOUR_FLOATS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, first_float);
    _mav_put_float(buf, 12, second_float);
    _mav_put_float(buf, 16, third_float);
    _mav_put_float(buf, 20, fourth_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FOUR_FLOATS_LEN);
#else
    mavlink_four_floats_t packet;
    packet.time_usec = time_usec;
    packet.first_float = first_float;
    packet.second_float = second_float;
    packet.third_float = third_float;
    packet.fourth_float = fourth_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FOUR_FLOATS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FOUR_FLOATS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FOUR_FLOATS_MIN_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_CRC);
}

/**
 * @brief Pack a four_floats message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp
 * @param first_float  first float
 * @param second_float  second float
 * @param third_float  third float
 * @param fourth_float  fourth float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_four_floats_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float first_float,float second_float,float third_float,float fourth_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FOUR_FLOATS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, first_float);
    _mav_put_float(buf, 12, second_float);
    _mav_put_float(buf, 16, third_float);
    _mav_put_float(buf, 20, fourth_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FOUR_FLOATS_LEN);
#else
    mavlink_four_floats_t packet;
    packet.time_usec = time_usec;
    packet.first_float = first_float;
    packet.second_float = second_float;
    packet.third_float = third_float;
    packet.fourth_float = fourth_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FOUR_FLOATS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FOUR_FLOATS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FOUR_FLOATS_MIN_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_CRC);
}

/**
 * @brief Encode a four_floats struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param four_floats C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_four_floats_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_four_floats_t* four_floats)
{
    return mavlink_msg_four_floats_pack(system_id, component_id, msg, four_floats->time_usec, four_floats->first_float, four_floats->second_float, four_floats->third_float, four_floats->fourth_float);
}

/**
 * @brief Encode a four_floats struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param four_floats C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_four_floats_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_four_floats_t* four_floats)
{
    return mavlink_msg_four_floats_pack_chan(system_id, component_id, chan, msg, four_floats->time_usec, four_floats->first_float, four_floats->second_float, four_floats->third_float, four_floats->fourth_float);
}

/**
 * @brief Send a four_floats message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp
 * @param first_float  first float
 * @param second_float  second float
 * @param third_float  third float
 * @param fourth_float  fourth float
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_four_floats_send(mavlink_channel_t chan, uint64_t time_usec, float first_float, float second_float, float third_float, float fourth_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FOUR_FLOATS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, first_float);
    _mav_put_float(buf, 12, second_float);
    _mav_put_float(buf, 16, third_float);
    _mav_put_float(buf, 20, fourth_float);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FOUR_FLOATS, buf, MAVLINK_MSG_ID_FOUR_FLOATS_MIN_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_CRC);
#else
    mavlink_four_floats_t packet;
    packet.time_usec = time_usec;
    packet.first_float = first_float;
    packet.second_float = second_float;
    packet.third_float = third_float;
    packet.fourth_float = fourth_float;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FOUR_FLOATS, (const char *)&packet, MAVLINK_MSG_ID_FOUR_FLOATS_MIN_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_CRC);
#endif
}

/**
 * @brief Send a four_floats message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_four_floats_send_struct(mavlink_channel_t chan, const mavlink_four_floats_t* four_floats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_four_floats_send(chan, four_floats->time_usec, four_floats->first_float, four_floats->second_float, four_floats->third_float, four_floats->fourth_float);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FOUR_FLOATS, (const char *)four_floats, MAVLINK_MSG_ID_FOUR_FLOATS_MIN_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_CRC);
#endif
}

#if MAVLINK_MSG_ID_FOUR_FLOATS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_four_floats_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float first_float, float second_float, float third_float, float fourth_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, first_float);
    _mav_put_float(buf, 12, second_float);
    _mav_put_float(buf, 16, third_float);
    _mav_put_float(buf, 20, fourth_float);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FOUR_FLOATS, buf, MAVLINK_MSG_ID_FOUR_FLOATS_MIN_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_CRC);
#else
    mavlink_four_floats_t *packet = (mavlink_four_floats_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->first_float = first_float;
    packet->second_float = second_float;
    packet->third_float = third_float;
    packet->fourth_float = fourth_float;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FOUR_FLOATS, (const char *)packet, MAVLINK_MSG_ID_FOUR_FLOATS_MIN_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_LEN, MAVLINK_MSG_ID_FOUR_FLOATS_CRC);
#endif
}
#endif

#endif

// MESSAGE FOUR_FLOATS UNPACKING


/**
 * @brief Get field time_usec from four_floats message
 *
 * @return [us] Timestamp
 */
static inline uint64_t mavlink_msg_four_floats_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field first_float from four_floats message
 *
 * @return  first float
 */
static inline float mavlink_msg_four_floats_get_first_float(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field second_float from four_floats message
 *
 * @return  second float
 */
static inline float mavlink_msg_four_floats_get_second_float(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field third_float from four_floats message
 *
 * @return  third float
 */
static inline float mavlink_msg_four_floats_get_third_float(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field fourth_float from four_floats message
 *
 * @return  fourth float
 */
static inline float mavlink_msg_four_floats_get_fourth_float(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a four_floats message into a struct
 *
 * @param msg The message to decode
 * @param four_floats C-struct to decode the message contents into
 */
static inline void mavlink_msg_four_floats_decode(const mavlink_message_t* msg, mavlink_four_floats_t* four_floats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    four_floats->time_usec = mavlink_msg_four_floats_get_time_usec(msg);
    four_floats->first_float = mavlink_msg_four_floats_get_first_float(msg);
    four_floats->second_float = mavlink_msg_four_floats_get_second_float(msg);
    four_floats->third_float = mavlink_msg_four_floats_get_third_float(msg);
    four_floats->fourth_float = mavlink_msg_four_floats_get_fourth_float(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FOUR_FLOATS_LEN? msg->len : MAVLINK_MSG_ID_FOUR_FLOATS_LEN;
        memset(four_floats, 0, MAVLINK_MSG_ID_FOUR_FLOATS_LEN);
    memcpy(four_floats, _MAV_PAYLOAD(msg), len);
#endif
}
