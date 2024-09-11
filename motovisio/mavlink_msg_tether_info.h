#pragma once
// MESSAGE TETHER_INFO PACKING

#define MAVLINK_MSG_ID_TETHER_INFO 188


typedef struct __mavlink_tether_info_t {
 uint64_t timestamp; /*<   tether_info timestamp reading */
 uint64_t timestamp_sample; /*<   tether_info timestamp_sample reading */
 float current_released; /*<   tether_info current_released reading */
} mavlink_tether_info_t;

#define MAVLINK_MSG_ID_TETHER_INFO_LEN 20
#define MAVLINK_MSG_ID_TETHER_INFO_MIN_LEN 20
#define MAVLINK_MSG_ID_188_LEN 20
#define MAVLINK_MSG_ID_188_MIN_LEN 20

#define MAVLINK_MSG_ID_TETHER_INFO_CRC 151
#define MAVLINK_MSG_ID_188_CRC 151



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TETHER_INFO { \
    188, \
    "TETHER_INFO", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_tether_info_t, timestamp) }, \
         { "timestamp_sample", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_tether_info_t, timestamp_sample) }, \
         { "current_released", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_tether_info_t, current_released) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TETHER_INFO { \
    "TETHER_INFO", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_tether_info_t, timestamp) }, \
         { "timestamp_sample", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_tether_info_t, timestamp_sample) }, \
         { "current_released", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_tether_info_t, current_released) }, \
         } \
}
#endif

/**
 * @brief Pack a tether_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp   tether_info timestamp reading 
 * @param timestamp_sample   tether_info timestamp_sample reading 
 * @param current_released   tether_info current_released reading 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tether_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint64_t timestamp_sample, float current_released)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TETHER_INFO_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint64_t(buf, 8, timestamp_sample);
    _mav_put_float(buf, 16, current_released);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TETHER_INFO_LEN);
#else
    mavlink_tether_info_t packet;
    packet.timestamp = timestamp;
    packet.timestamp_sample = timestamp_sample;
    packet.current_released = current_released;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TETHER_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TETHER_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TETHER_INFO_MIN_LEN, MAVLINK_MSG_ID_TETHER_INFO_LEN, MAVLINK_MSG_ID_TETHER_INFO_CRC);
}

/**
 * @brief Pack a tether_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp   tether_info timestamp reading 
 * @param timestamp_sample   tether_info timestamp_sample reading 
 * @param current_released   tether_info current_released reading 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tether_info_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint64_t timestamp_sample, float current_released)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TETHER_INFO_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint64_t(buf, 8, timestamp_sample);
    _mav_put_float(buf, 16, current_released);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TETHER_INFO_LEN);
#else
    mavlink_tether_info_t packet;
    packet.timestamp = timestamp;
    packet.timestamp_sample = timestamp_sample;
    packet.current_released = current_released;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TETHER_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TETHER_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TETHER_INFO_MIN_LEN, MAVLINK_MSG_ID_TETHER_INFO_LEN, MAVLINK_MSG_ID_TETHER_INFO_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TETHER_INFO_MIN_LEN, MAVLINK_MSG_ID_TETHER_INFO_LEN);
#endif
}

/**
 * @brief Pack a tether_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp   tether_info timestamp reading 
 * @param timestamp_sample   tether_info timestamp_sample reading 
 * @param current_released   tether_info current_released reading 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tether_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint64_t timestamp_sample,float current_released)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TETHER_INFO_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint64_t(buf, 8, timestamp_sample);
    _mav_put_float(buf, 16, current_released);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TETHER_INFO_LEN);
#else
    mavlink_tether_info_t packet;
    packet.timestamp = timestamp;
    packet.timestamp_sample = timestamp_sample;
    packet.current_released = current_released;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TETHER_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TETHER_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TETHER_INFO_MIN_LEN, MAVLINK_MSG_ID_TETHER_INFO_LEN, MAVLINK_MSG_ID_TETHER_INFO_CRC);
}

/**
 * @brief Encode a tether_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param tether_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tether_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_tether_info_t* tether_info)
{
    return mavlink_msg_tether_info_pack(system_id, component_id, msg, tether_info->timestamp, tether_info->timestamp_sample, tether_info->current_released);
}

/**
 * @brief Encode a tether_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param tether_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tether_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_tether_info_t* tether_info)
{
    return mavlink_msg_tether_info_pack_chan(system_id, component_id, chan, msg, tether_info->timestamp, tether_info->timestamp_sample, tether_info->current_released);
}

/**
 * @brief Encode a tether_info struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param tether_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tether_info_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_tether_info_t* tether_info)
{
    return mavlink_msg_tether_info_pack_status(system_id, component_id, _status, msg,  tether_info->timestamp, tether_info->timestamp_sample, tether_info->current_released);
}

/**
 * @brief Send a tether_info message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp   tether_info timestamp reading 
 * @param timestamp_sample   tether_info timestamp_sample reading 
 * @param current_released   tether_info current_released reading 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_tether_info_send(mavlink_channel_t chan, uint64_t timestamp, uint64_t timestamp_sample, float current_released)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TETHER_INFO_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint64_t(buf, 8, timestamp_sample);
    _mav_put_float(buf, 16, current_released);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TETHER_INFO, buf, MAVLINK_MSG_ID_TETHER_INFO_MIN_LEN, MAVLINK_MSG_ID_TETHER_INFO_LEN, MAVLINK_MSG_ID_TETHER_INFO_CRC);
#else
    mavlink_tether_info_t packet;
    packet.timestamp = timestamp;
    packet.timestamp_sample = timestamp_sample;
    packet.current_released = current_released;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TETHER_INFO, (const char *)&packet, MAVLINK_MSG_ID_TETHER_INFO_MIN_LEN, MAVLINK_MSG_ID_TETHER_INFO_LEN, MAVLINK_MSG_ID_TETHER_INFO_CRC);
#endif
}

/**
 * @brief Send a tether_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_tether_info_send_struct(mavlink_channel_t chan, const mavlink_tether_info_t* tether_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_tether_info_send(chan, tether_info->timestamp, tether_info->timestamp_sample, tether_info->current_released);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TETHER_INFO, (const char *)tether_info, MAVLINK_MSG_ID_TETHER_INFO_MIN_LEN, MAVLINK_MSG_ID_TETHER_INFO_LEN, MAVLINK_MSG_ID_TETHER_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_TETHER_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_tether_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint64_t timestamp_sample, float current_released)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint64_t(buf, 8, timestamp_sample);
    _mav_put_float(buf, 16, current_released);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TETHER_INFO, buf, MAVLINK_MSG_ID_TETHER_INFO_MIN_LEN, MAVLINK_MSG_ID_TETHER_INFO_LEN, MAVLINK_MSG_ID_TETHER_INFO_CRC);
#else
    mavlink_tether_info_t *packet = (mavlink_tether_info_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->timestamp_sample = timestamp_sample;
    packet->current_released = current_released;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TETHER_INFO, (const char *)packet, MAVLINK_MSG_ID_TETHER_INFO_MIN_LEN, MAVLINK_MSG_ID_TETHER_INFO_LEN, MAVLINK_MSG_ID_TETHER_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE TETHER_INFO UNPACKING


/**
 * @brief Get field timestamp from tether_info message
 *
 * @return   tether_info timestamp reading 
 */
static inline uint64_t mavlink_msg_tether_info_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field timestamp_sample from tether_info message
 *
 * @return   tether_info timestamp_sample reading 
 */
static inline uint64_t mavlink_msg_tether_info_get_timestamp_sample(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field current_released from tether_info message
 *
 * @return   tether_info current_released reading 
 */
static inline float mavlink_msg_tether_info_get_current_released(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a tether_info message into a struct
 *
 * @param msg The message to decode
 * @param tether_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_tether_info_decode(const mavlink_message_t* msg, mavlink_tether_info_t* tether_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    tether_info->timestamp = mavlink_msg_tether_info_get_timestamp(msg);
    tether_info->timestamp_sample = mavlink_msg_tether_info_get_timestamp_sample(msg);
    tether_info->current_released = mavlink_msg_tether_info_get_current_released(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TETHER_INFO_LEN? msg->len : MAVLINK_MSG_ID_TETHER_INFO_LEN;
        memset(tether_info, 0, MAVLINK_MSG_ID_TETHER_INFO_LEN);
    memcpy(tether_info, _MAV_PAYLOAD(msg), len);
#endif
}
