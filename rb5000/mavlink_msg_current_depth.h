#pragma once
// MESSAGE CURRENT_DEPTH PACKING

#define MAVLINK_MSG_ID_CURRENT_DEPTH 187


typedef struct __mavlink_current_depth_t {
 uint64_t timestamp; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 float current_depth; /*<   current depth reading */
} mavlink_current_depth_t;

#define MAVLINK_MSG_ID_CURRENT_DEPTH_LEN 12
#define MAVLINK_MSG_ID_CURRENT_DEPTH_MIN_LEN 12
#define MAVLINK_MSG_ID_187_LEN 12
#define MAVLINK_MSG_ID_187_MIN_LEN 12

#define MAVLINK_MSG_ID_CURRENT_DEPTH_CRC 245
#define MAVLINK_MSG_ID_187_CRC 245



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CURRENT_DEPTH { \
    187, \
    "CURRENT_DEPTH", \
    2, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_current_depth_t, timestamp) }, \
         { "current_depth", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_current_depth_t, current_depth) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CURRENT_DEPTH { \
    "CURRENT_DEPTH", \
    2, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_current_depth_t, timestamp) }, \
         { "current_depth", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_current_depth_t, current_depth) }, \
         } \
}
#endif

/**
 * @brief Pack a current_depth message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param current_depth   current depth reading 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_current_depth_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, float current_depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CURRENT_DEPTH_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, current_depth);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN);
#else
    mavlink_current_depth_t packet;
    packet.timestamp = timestamp;
    packet.current_depth = current_depth;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CURRENT_DEPTH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CURRENT_DEPTH_MIN_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_CRC);
}

/**
 * @brief Pack a current_depth message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param current_depth   current depth reading 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_current_depth_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,float current_depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CURRENT_DEPTH_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, current_depth);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN);
#else
    mavlink_current_depth_t packet;
    packet.timestamp = timestamp;
    packet.current_depth = current_depth;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CURRENT_DEPTH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CURRENT_DEPTH_MIN_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_CRC);
}

/**
 * @brief Encode a current_depth struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param current_depth C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_current_depth_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_current_depth_t* current_depth)
{
    return mavlink_msg_current_depth_pack(system_id, component_id, msg, current_depth->timestamp, current_depth->current_depth);
}

/**
 * @brief Encode a current_depth struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param current_depth C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_current_depth_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_current_depth_t* current_depth)
{
    return mavlink_msg_current_depth_pack_chan(system_id, component_id, chan, msg, current_depth->timestamp, current_depth->current_depth);
}

/**
 * @brief Send a current_depth message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param current_depth   current depth reading 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_current_depth_send(mavlink_channel_t chan, uint64_t timestamp, float current_depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CURRENT_DEPTH_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, current_depth);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CURRENT_DEPTH, buf, MAVLINK_MSG_ID_CURRENT_DEPTH_MIN_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_CRC);
#else
    mavlink_current_depth_t packet;
    packet.timestamp = timestamp;
    packet.current_depth = current_depth;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CURRENT_DEPTH, (const char *)&packet, MAVLINK_MSG_ID_CURRENT_DEPTH_MIN_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_CRC);
#endif
}

/**
 * @brief Send a current_depth message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_current_depth_send_struct(mavlink_channel_t chan, const mavlink_current_depth_t* current_depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_current_depth_send(chan, current_depth->timestamp, current_depth->current_depth);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CURRENT_DEPTH, (const char *)current_depth, MAVLINK_MSG_ID_CURRENT_DEPTH_MIN_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_CRC);
#endif
}

#if MAVLINK_MSG_ID_CURRENT_DEPTH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_current_depth_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float current_depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, current_depth);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CURRENT_DEPTH, buf, MAVLINK_MSG_ID_CURRENT_DEPTH_MIN_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_CRC);
#else
    mavlink_current_depth_t *packet = (mavlink_current_depth_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->current_depth = current_depth;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CURRENT_DEPTH, (const char *)packet, MAVLINK_MSG_ID_CURRENT_DEPTH_MIN_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN, MAVLINK_MSG_ID_CURRENT_DEPTH_CRC);
#endif
}
#endif

#endif

// MESSAGE CURRENT_DEPTH UNPACKING


/**
 * @brief Get field timestamp from current_depth message
 *
 * @return [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_current_depth_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field current_depth from current_depth message
 *
 * @return   current depth reading 
 */
static inline float mavlink_msg_current_depth_get_current_depth(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a current_depth message into a struct
 *
 * @param msg The message to decode
 * @param current_depth C-struct to decode the message contents into
 */
static inline void mavlink_msg_current_depth_decode(const mavlink_message_t* msg, mavlink_current_depth_t* current_depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    current_depth->timestamp = mavlink_msg_current_depth_get_timestamp(msg);
    current_depth->current_depth = mavlink_msg_current_depth_get_current_depth(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CURRENT_DEPTH_LEN? msg->len : MAVLINK_MSG_ID_CURRENT_DEPTH_LEN;
        memset(current_depth, 0, MAVLINK_MSG_ID_CURRENT_DEPTH_LEN);
    memcpy(current_depth, _MAV_PAYLOAD(msg), len);
#endif
}
