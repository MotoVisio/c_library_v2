/** @file
 *  @brief MAVLink comm protocol generated from motovisio.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_MOTOVISIO_H
#define MAVLINK_MOTOVISIO_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_MOTOVISIO.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_MOTOVISIO_XML_HASH -1096757587934808163

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{187, 245, 12, 12, 0, 0, 0}, {188, 151, 20, 20, 0, 0, 0}, {189, 33, 12, 12, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_MOTOVISIO

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_current_depth.h"
#include "./mavlink_msg_tether_info.h"
#include "./mavlink_msg_tether_command.h"

// base include



#if MAVLINK_MOTOVISIO_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_CURRENT_DEPTH, MAVLINK_MESSAGE_INFO_TETHER_INFO, MAVLINK_MESSAGE_INFO_TETHER_COMMAND}
# define MAVLINK_MESSAGE_NAMES {{ "CURRENT_DEPTH", 187 }, { "TETHER_COMMAND", 189 }, { "TETHER_INFO", 188 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_MOTOVISIO_H
