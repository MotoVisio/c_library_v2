#pragma once
// MESSAGE TETHER_COMMAND PACKING

#define MAVLINK_MSG_ID_TETHER_COMMAND 189


typedef struct __mavlink_tether_command_t {
 uint64_t timestamp; /*<   tether_command timestamp reading */
 float change_reel_length; /*<   tether_command change_reel_length reading */
} mavlink_tether_command_t;

#define MAVLINK_MSG_ID_TETHER_COMMAND_LEN 12
#define MAVLINK_MSG_ID_TETHER_COMMAND_MIN_LEN 12
#define MAVLINK_MSG_ID_189_LEN 12
#define MAVLINK_MSG_ID_189_MIN_LEN 12

#define MAVLINK_MSG_ID_TETHER_COMMAND_CRC 33
#define MAVLINK_MSG_ID_189_CRC 33



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TETHER_COMMAND { \
    189, \
    "TETHER_COMMAND", \
    2, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_tether_command_t, timestamp) }, \
         { "change_reel_length", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_tether_command_t, change_reel_length) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TETHER_COMMAND { \
    "TETHER_COMMAND", \
    2, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_tether_command_t, timestamp) }, \
         { "change_reel_length", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_tether_command_t, change_reel_length) }, \
         } \
}
#endif

/**
 * @brief Pack a tether_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp   tether_command timestamp reading 
 * @param change_reel_length   tether_command change_reel_length reading 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tether_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, float change_reel_length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TETHER_COMMAND_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, change_reel_length);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TETHER_COMMAND_LEN);
#else
    mavlink_tether_command_t packet;
    packet.timestamp = timestamp;
    packet.change_reel_length = change_reel_length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TETHER_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TETHER_COMMAND;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TETHER_COMMAND_MIN_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_CRC);
}

/**
 * @brief Pack a tether_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp   tether_command timestamp reading 
 * @param change_reel_length   tether_command change_reel_length reading 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tether_command_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, float change_reel_length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TETHER_COMMAND_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, change_reel_length);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TETHER_COMMAND_LEN);
#else
    mavlink_tether_command_t packet;
    packet.timestamp = timestamp;
    packet.change_reel_length = change_reel_length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TETHER_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TETHER_COMMAND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TETHER_COMMAND_MIN_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TETHER_COMMAND_MIN_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_LEN);
#endif
}

/**
 * @brief Pack a tether_command message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp   tether_command timestamp reading 
 * @param change_reel_length   tether_command change_reel_length reading 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tether_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,float change_reel_length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TETHER_COMMAND_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, change_reel_length);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TETHER_COMMAND_LEN);
#else
    mavlink_tether_command_t packet;
    packet.timestamp = timestamp;
    packet.change_reel_length = change_reel_length;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TETHER_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TETHER_COMMAND;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TETHER_COMMAND_MIN_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_CRC);
}

/**
 * @brief Encode a tether_command struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param tether_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tether_command_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_tether_command_t* tether_command)
{
    return mavlink_msg_tether_command_pack(system_id, component_id, msg, tether_command->timestamp, tether_command->change_reel_length);
}

/**
 * @brief Encode a tether_command struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param tether_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tether_command_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_tether_command_t* tether_command)
{
    return mavlink_msg_tether_command_pack_chan(system_id, component_id, chan, msg, tether_command->timestamp, tether_command->change_reel_length);
}

/**
 * @brief Encode a tether_command struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param tether_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tether_command_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_tether_command_t* tether_command)
{
    return mavlink_msg_tether_command_pack_status(system_id, component_id, _status, msg,  tether_command->timestamp, tether_command->change_reel_length);
}

/**
 * @brief Send a tether_command message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp   tether_command timestamp reading 
 * @param change_reel_length   tether_command change_reel_length reading 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_tether_command_send(mavlink_channel_t chan, uint64_t timestamp, float change_reel_length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TETHER_COMMAND_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, change_reel_length);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TETHER_COMMAND, buf, MAVLINK_MSG_ID_TETHER_COMMAND_MIN_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_CRC);
#else
    mavlink_tether_command_t packet;
    packet.timestamp = timestamp;
    packet.change_reel_length = change_reel_length;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TETHER_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_TETHER_COMMAND_MIN_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_CRC);
#endif
}

/**
 * @brief Send a tether_command message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_tether_command_send_struct(mavlink_channel_t chan, const mavlink_tether_command_t* tether_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_tether_command_send(chan, tether_command->timestamp, tether_command->change_reel_length);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TETHER_COMMAND, (const char *)tether_command, MAVLINK_MSG_ID_TETHER_COMMAND_MIN_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_CRC);
#endif
}

#if MAVLINK_MSG_ID_TETHER_COMMAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_tether_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float change_reel_length)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, change_reel_length);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TETHER_COMMAND, buf, MAVLINK_MSG_ID_TETHER_COMMAND_MIN_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_CRC);
#else
    mavlink_tether_command_t *packet = (mavlink_tether_command_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->change_reel_length = change_reel_length;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TETHER_COMMAND, (const char *)packet, MAVLINK_MSG_ID_TETHER_COMMAND_MIN_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_LEN, MAVLINK_MSG_ID_TETHER_COMMAND_CRC);
#endif
}
#endif

#endif

// MESSAGE TETHER_COMMAND UNPACKING


/**
 * @brief Get field timestamp from tether_command message
 *
 * @return   tether_command timestamp reading 
 */
static inline uint64_t mavlink_msg_tether_command_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field change_reel_length from tether_command message
 *
 * @return   tether_command change_reel_length reading 
 */
static inline float mavlink_msg_tether_command_get_change_reel_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a tether_command message into a struct
 *
 * @param msg The message to decode
 * @param tether_command C-struct to decode the message contents into
 */
static inline void mavlink_msg_tether_command_decode(const mavlink_message_t* msg, mavlink_tether_command_t* tether_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    tether_command->timestamp = mavlink_msg_tether_command_get_timestamp(msg);
    tether_command->change_reel_length = mavlink_msg_tether_command_get_change_reel_length(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TETHER_COMMAND_LEN? msg->len : MAVLINK_MSG_ID_TETHER_COMMAND_LEN;
        memset(tether_command, 0, MAVLINK_MSG_ID_TETHER_COMMAND_LEN);
    memcpy(tether_command, _MAV_PAYLOAD(msg), len);
#endif
}
