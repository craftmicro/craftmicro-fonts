#pragma once

#include "display/PackedBDF.h"

static const unsigned char bit1_data[] = {
0x02,0x2f,0xd4,0x00,0x0d,0x02,0x04,0x3f,0xc8,0x5f,
0x80,0x02,0x20,0x01,0x80,0x02,0x20,0x01,0x80,0x02,
0x20,0x02,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,0x00,0x02,
0x20,0x01,0x80,0x02,0x20,0x02,0x00,0x02,0x20,0x02,
0x00,0x02,0x20,0x03,0x80,0x02,0x20,0x03,0x80,0x02,
0x20,0x01,0x80,0x02,0x20,0x03,0x80,0x02,0x20,0x01,
0x80,0x02,0x20,0x03,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x02,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x01,0x80,0x02,
0x20,0x01,0x80,0x02,0x20,0x03,0x80,0x02,0x20,0x03,
0x80,0x02,0x20,0x03,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x05,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x01,0x80,0x02,
0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x05,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x05,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x02,
0x00,0x02,0x20,0x03,0x80,0x02,0x20,0x02,0x00,0x02,
0x20,0x02,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x02,
0x00,0x02,0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x04,0x80,0x02,0x20,0x01,0x80,0x02,0x20,0x01,
0x80,0x02,0x20,0x03,0x80,0x02,0x20,0x01,0x80,0x02,
0x20,0x05,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x03,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x03,
0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,0x80,0x02,
0x20,0x05,0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x04,
0x80,0x02,0x20,0x04,0x80,0x02,0x20,0x02,0x80,0x02,
0x20,0x01,0x80,0x02,0x20,0x02,0x80,0x02,0x20,0x03,
0x00,0x0d,0x02,0x04,0x3f,0xc8,0x5f,0x80,0x0d,0x02,
0x04,0x3f,0xc8,0x5f,0x80,0x0d,0x02,0x04,0x3f,0xc8,
0x5f,0x80,0x02,0x41,0xf1,0x28,0x0b,0x41,0xe3,0x06,
0x21,0xd2,0x49,0x43,0x00,0x06,0x41,0xf2,0x2a,0x80,
0x0e,0x22,0x05,0xa4,0x80,0x0b,0x41,0xe3,0x41,0x1f,
0xc2,0x08,0x0b,0x41,0xe3,0x41,0x1f,0xa2,0x3e,0x20,
0x80,0x08,0x40,0x62,0x19,0x20,0x16,0xe0,0x06,0x92,
0x02,0xa0,0x14,0x00,0x40,0x09,0x10,0xaa,0x89,0x10,
0x0f,0x40,0x04,0x91,0x0e,0x00,0x1f,0xc4,0x03,0xe8,
0x02,0xfc,0x06,0xa0,0x02,0x09,0x21,0x08,0x1c,0xe0,
0x08,0x1f,0x3f,0x88,0x10,0x10,0x3c,0x44,0x08,0x07,
0xef,0xc0,0x0d,0x02,0x04,0x3f,0xc8,0x5f,0x80,0x0d,
0x02,0x04,0x3f,0xc8,0x5f,0x80,0x0d,0x02,0x04,0x3f,
0xc8,0x5f,0x80,0x0d,0x02,0x04,0x3f,0xc8,0x5f,0x80,
0x02,0x40,0x51,0x28,0x02,0x40,0x51,0x28,0x06,0x40,
0x52,0x2a,0x80,0x06,0x40,0x52,0x2a,0x80,0x06,0x60,
0x22,0x47,0x70,0x0c,0x20,0x23,0x3f,0x16,0x20,0x25,
0xbf,0xf8,0x08,0x40,0x63,0x15,0x40,0x10,0x60,0x45,
0xba,0x8a,0xa5,0x50,0x0f,0x00,0x04,0x91,0x0e,0x00,
0x1f,0xa0,0x1f,0x00,0xbf,0x00,0x06,0xa0,0x02,0x21,
0x09,0x20,0x1a,0xa0,0x07,0x9e,0x7c,0x82,0x0a,0x0f,
0xc8,0x20,0x1f,0x7e,0x0d,0x02,0x04,0x3f,0xc8,0x5f,
0x80,0x0d,0x02,0x04,0x3f,0xc8,0x5f,0x80,0x0f,0x20,
0x04,0x91,0x00,0x44,0x12,0x21,0x48,0x10,0x10,0x02,
0x25,0xd1,0x80,0x03,0x01,0xe1,0x25,0xd0,0x0e,0xe1,
0xf4,0x82,0x1f,0xa2,0x44,0x83,0xf1,0x00,0x0e,0xa0,
0x04,0x9c,0x22,0x38,0x20,0x3f,0x80,0x0c,0xc0,0x14,
0x21,0x3d,0x09,0x1e,0x42,0x0e,0xe0,0x04,0xc4,0x12,
0x27,0x70,0x87,0xf0,0x80,0x03,0x41,0xe1,0x56,0x13,
0x40,0x0b,0x41,0xe3,0x1c,0x89,0x0a,0x24,0x48,0xa1,
0x22,0x70,0x06,0x20,0x72,0x28,0x0e,0xe0,0x04,0x9f,
0x20,0xa6,0x28,0x26,0x20,0x9f,0x00,0x06,0x80,0x42,
0x38,0xbb,0x80,0x0c,0xa0,0x04,0x09,0x24,0x90,0x90,
0x90,0x0e,0x60,0x24,0xbf,0x00,0x80,0x80,0x06,0x20,
0x22,0x38,0x0e,0xe0,0x04,0x9f,0x20,0xa6,0x45,0x04,
0x13,0xe0,0x0a,0x20,0x63,0x3e,0x06,0x60,0x52,0x3a,
0xb8,0x0e,0xa0,0x04,0x84,0x3f,0x84,0x00,0x3f,0x80,
0x06,0x80,0x42,0x38,0x93,0x80,0x06,0x80,0x42,0x39,
0x0b,0x80,0x04,0x42,0x62,0x14,0x0e,0xe1,0xe4,0xd4,
0x17,0xe4,0x04,0x00,0x0d,0x41,0xe3,0x1f,0x8e,0x8d,
0x59,0x42,0x80,0x02,0x20,0x21,0xa0,0x04,0x63,0xd2,
0x22,0xc0,0x04,0x82,0x42,0x16,0x48,0x08,0x80,0x42,
0x9a,0x24,0xc0,0x0c,0xa0,0x04,0x24,0x24,0x24,0x92,
0x40,0x11,0x00,0x04,0x90,0x98,0x90,0x90,0x12,0x0b,
0x0b,0xc8,0x40,0x11,0x02,0x05,0x10,0x98,0x84,0x82,
0x80,0x5c,0x42,0x42,0x23,0x80,0x13,0x00,0x05,0x38,
0x44,0x20,0x90,0xe4,0x02,0x41,0x30,0x9e,0x21,0x00,
0x0e,0xc0,0x04,0x82,0x00,0x02,0x1e,0x20,0x1f,0x80,
0x0f,0x40,0x04,0x88,0x04,0x00,0x1f,0x4c,0x17,0xf4,
0x14,0x10,0x0f,0x40,0x04,0x02,0x04,0x00,0x1f,0x4c,
0x17,0xf4,0x14,0x10,0x0f,0x40,0x04,0x8e,0x11,0x00,
0x1f,0x4c,0x17,0xf4,0x14,0x10,0x0f,0x40,0x04,0x85,
0x0a,0x00,0x1f,0x4c,0x17,0xf4,0x14,0x10,0x0f,0x20,
0x04,0x91,0x00,0x1f,0x4c,0x17,0xf4,0x14,0x10,0x0f,
0x40,0x04,0x84,0x0a,0x04,0x1f,0x4c,0x17,0xf4,0x14,
0x10,0x1a,0xe0,0x07,0x9f,0x7f,0x10,0x40,0x7f,0xe2,
0x20,0x80,0x83,0xf8,0x0f,0x41,0xd4,0x9f,0xdc,0x03,
0xf0,0x80,0x40,0xc0,0x0f,0x40,0x04,0x88,0x04,0x00,
0x1f,0xc4,0x07,0xc8,0x80,0x7e,0x0f,0x40,0x04,0x82,
0x04,0x00,0x1f,0xc4,0x07,0xc8,0x80,0x7e,0x0f,0x40,
0x04,0x8e,0x11,0x00,0x1f,0xc4,0x07,0xc8,0x80,0x7e,
0x0f,0x20,0x04,0x91,0x00,0x1f,0xc4,0x07,0xc8,0x80,
0x7e,0x03,0x20,0x01,0xa6,0x50,0x05,0x40,0x02,0x14,
0x32,0x40,0x04,0x40,0x91,0x22,0x05,0x20,0x02,0x11,
0x92,0x10,0xe0,0x05,0x1f,0xa1,0x05,0xe3,0x08,0x27,
0xe0,0x0f,0x40,0x04,0x85,0x0a,0x00,0x1f,0x5c,0x14,
0x10,0x0f,0x40,0x04,0x88,0x04,0x00,0x1f,0x5c,0x13,
0xe0,0x0f,0x40,0x04,0x82,0x04,0x00,0x1f,0x5c,0x13,
0xe0,0x0f,0x40,0x04,0x8e,0x11,0x00,0x1f,0x5c,0x13,
0xe0,0x0f,0x40,0x04,0x85,0x0a,0x00,0x1f,0x5c,0x13,
0xe0,0x0f,0x20,0x04,0x91,0x00,0x1f,0x5c,0x13,0xe0,
0x0a,0xa0,0x13,0xa2,0x50,0x85,0x22,0x0f,0x21,0xf4,
0x81,0x1f,0x44,0x54,0x98,0xa2,0x7c,0x40,0x0f,0x40,
0x04,0x88,0x04,0x00,0x64,0x13,0xe0,0x0f,0x40,0x04,
0x82,0x04,0x00,0x64,0x13,0xe0,0x0f,0x40,0x04,0x8e,
0x11,0x00,0x64,0x13,0xe0,0x0f,0x20,0x04,0x91,0x00,
0x64,0x13,0xe0,0x0f,0x40,0x04,0x82,0x04,0x00,0x44,
0x12,0x21,0x48,0x10,0x10,0x0d,0x00,0x04,0x44,0x0f,
0xa2,0x17,0xc8,0x10,0x00,0x0e,0xe0,0x04,0x9f,0x44,
0x14,0xe4,0x15,0x14,0xe0,0x0f,0x00,0x04,0x88,0x04,
0x00,0x1f,0xcc,0x13,0xf0,0x0f,0x00,0x04,0x82,0x04,
0x00,0x1f,0xcc,0x13,0xf0,0x0f,0x00,0x04,0x8e,0x11,
0x00,0x1f,0xcc,0x13,0xf0,0x0f,0x00,0x04,0x85,0x0a,
0x00,0x1f,0xcc,0x13,0xf0,0x0e,0xe0,0x04,0x89,0x00,
0x1f,0xcc,0x13,0xf0,0x0f,0x00,0x04,0x84,0x0a,0x04,
0x1f,0xcc,0x13,0xf0,0x1a,0xa0,0x07,0x9f,0x7c,0x82,
0x0a,0x0f,0xc8,0x20,0x1f,0xfe,0x0f,0x01,0xd4,0x9f,
0xcc,0x03,0xf0,0x80,0x40,0xc0,0x0f,0x00,0x04,0x88,
0x04,0x00,0x1f,0x20,0xbf,0x20,0x1f,0x80,0x0f,0x00,
0x04,0x82,0x04,0x00,0x1f,0x20,0xbf,0x20,0x1f,0x80,
0x0f,0x00,0x04,0x8e,0x11,0x00,0x1f,0x20,0xbf,0x20,
0x1f,0x80,0x0e,0xe0,0x04,0x91,0x00,0x1f,0x20,0xbf,
0x20,0x1f,0x80,0x02,0xe0,0x01,0xa5,0x50,0x05,0x20,
0x01,0x94,0x2e,0x40,0x04,0x40,0x72,0x22,0x04,0xe0,
0x01,0x91,0x52,0x0f,0x00,0x04,0x83,0x40,0x23,0xe9,
0x82,0x7c,0x0f,0x00,0x04,0x85,0x0a,0x00,0x1f,0x4c,
0x14,0x10,0x0f,0x00,0x04,0x88,0x04,0x00,0x1f,0x4c,
0x13,0xe0,0x0f,0x00,0x04,0x82,0x04,0x00,0x1f,0x4c,
0x13,0xe0,0x0f,0x00,0x04,0x8e,0x11,0x00,0x1f,0x4c,
0x13,0xe0,0x0f,0x00,0x04,0x85,0x0a,0x00,0x1f,0x4c,
0x13,0xe0,0x0e,0xe0,0x04,0x91,0x00,0x1f,0x4c,0x13,
0xe0,0x0a,0xa0,0x03,0x88,0x03,0xe0,0x08,0x0e,0xe1,
0xf4,0x80,0x9f,0x22,0xa4,0xa8,0x9f,0x20,0x00,0x0f,
0x00,0x04,0x88,0x04,0x00,0x54,0x13,0xe0,0x0f,0x00,
0x04,0x82,0x04,0x00,0x54,0x13,0xe0,0x0f,0x00,0x04,
0x8e,0x11,0x00,0x54,0x13,0xe0,0x0e,0xe0,0x04,0x91,
0x00,0x54,0x13,0xe0,0x0f,0x41,0xe4,0x82,0x04,0x00,
0x54,0x13,0xf0,0x17,0xe0,0x0f,0x21,0xe4,0xc4,0x07,
0xe9,0x82,0xfc,0x80,0x80,0x0f,0x21,0xe4,0x91,0x00,
0x54,0x13,0xf0,0x17,0xe0 };
/* font data size: 6865 bytes */

static const unsigned char bit1_index[] = {
0xa8,0x25,0x42,0x2a,0x1f,0x51,0x3a,0x8b,0xd4,0x6e,
0xa3,0xf5,0x23,0xa9,0x3d,0x4a,0xea,0x5f,0x53,0x3a,
0x9b,0xd4,0xee,0xa7,0xf5,0x43,0xaa,0x3d,0x52,0xea,
0x9f,0x55,0x3a,0xab,0xd5,0x6e,0xab,0xf5,0x63,0xab,
0x3d,0x5a,0xea,0xdf,0x57,0x3a,0xbb,0xd5,0xee,0xaf,
0xf5,0x83,0xac,0x3d,0x62,0xeb,0x1f,0x59,0x3a,0xcb,
0xd6,0x6e,0xb3,0xf5,0xa3,0xad,0x3d,0x6a,0xeb,0x5f,
0x5b,0x3a,0xdb,0xd6,0xee,0xb7,0xf5,0xc3,0xae,0x3d,
0x72,0xeb,0x9f,0x5d,0x3a,0xeb,0xd7,0x6e,0xbb,0xf5,
0xe3,0xaf,0x3d,0x7a,0xeb,0xdf,0x5f,0x3a,0xfb,0xd7,
0xee,0xbf,0xf6,0x03,0xb0,0x3d,0x82,0xec,0x1f,0x61,
0x3b,0x0b,0xd8,0x6e,0xc3,0xf6,0x23,0xb1,0x3d,0x8a,
0xec,0x5f,0x63,0x3b,0x1b,0xd8,0xee,0xc7,0xf6,0x43,
0xb2,0x3d,0x92,0xec,0x9f,0x65,0x3b,0x2b,0xd9,0x6e,
0xcb,0xf6,0x63,0xb3,0x3d,0x9a,0xec,0xdf,0x67,0x3b,
0x3b,0xd9,0xee,0xcf,0xf6,0x83,0xb4,0x3d,0xa2,0xed,
0x25,0x69,0x9b,0x50,0x5a,0x92,0xd5,0xb6,0xb2,0xb5,
0xbd,0xaf,0xad,0x8f,0x6c,0xcb,0x6d,0x5b,0x9a,0xdd,
0x96,0xfa,0xb8,0x0d,0xc2,0x2e,0x1f,0x71,0x6b,0x8d,
0x5c,0x7a,0xe4,0x77,0x28,0xb9,0x6d,0xcc,0x6e,0x6d,
0x73,0xbb,0xa1,0x5d,0x3a,0xea,0x97,0x60,0xbb,0x3d,
0xdb,0xae,0xf3,0x77,0xdb,0xc1,0x5e,0x32,0xf2,0xb7,
0x9d,0xbd,0x3d,0xeb,0x6f,0x71,0x7b,0xcb,0xe3,0xdf,
0x36,0xfa,0xb7,0xdc,0xbf,0x05,0xfa,0xaf,0xdd,0x7f,
0x3b,0xfe,0x60,0x0b,0x01,0x18,0x0c,0xc0,0xa6,0x07,
0x70,0x43,0x82,0x6c,0x15,0xe0,0xc7,0x07,0x38,0x45,
0xc2,0x96,0x18,0x30,0xd5,0x87,0x6c,0x41,0x62,0x3b,
0x13,0x58,0xa5,0xc5,0x8e,0x2f,0xb1,0x91,0x8d,0x4c,
0x70,0x63,0xb3,0x1e,0xf8,0xfc,0xc8,0x16,0x41,0xb2,
0x17,0x91,0x5c,0x8f,0xe4,0xa7,0x26,0x79,0x3d,0xca,
0x3e,0x54,0x32,0xaf,0x96,0x2c,0xb5,0xe5,0xd3,0x2f,
0xb9,0x85,0xcc,0x8e,0x66,0xf3,0x4b,0x9a,0xfc,0xdc,
0xe7,0x0f,0x39,0xb9,0xd6,0xcf,0x06,0x7b,0x33,0xed,
0xa0,0x2d,0x07,0x68,0x6b,0x44,0xba,0x2a,0xd1,0x86,
0x8d,0x34,0x73,0xa4,0x2d,0x26,0x69,0x5b,0x4c,0x1a,
0x6a,0xd3,0xa6,0x9f,0x75,0x09,0xa8,0xfd,0x4c,0x6a,
0x87,0x55,0x5a,0xb2,0xd5,0xee,0xb1,0xc0 };
/* font index size: 368 bytes */

const craft::packedbdf_t bit1 = {
	bit1_index,
	0,
	bit1_data,
	1,
	0,
	30,
	255,
	0,
	0,
	13,
	4,
	4,
	4,
	5,
	5,
	11,
	1
};
