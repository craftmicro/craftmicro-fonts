#pragma once

#include "display/PackedBDF.h"

static const unsigned char pukeforce_data[] = {
0x02,0x20,0x10,0x02,0xc0,0x15,0x44,0x06,0x42,0xa2,
0xa8,0x0a,0xc0,0x31,0x4f,0x94,0xf9,0x45,0x00,0x09,
0x07,0xa9,0x0e,0xc7,0x42,0xb8,0x80,0x0c,0xc0,0x3b,
0x16,0x41,0x04,0x13,0x46,0x0e,0xc0,0x41,0xd2,0x11,
0xfc,0x42,0x39,0x02,0x42,0x92,0x80,0x04,0xc0,0x19,
0xa8,0x80,0x04,0xc0,0x1a,0xa5,0x00,0x06,0x62,0x21,
0x39,0x00,0x06,0x69,0x29,0x39,0x00,0x04,0x5f,0x91,
0x60,0x06,0x29,0xab,0x80,0x02,0x20,0x12,0x0c,0xc0,
0x38,0x10,0x41,0x04,0x10,0x40,0x08,0xc0,0x29,0x92,
0xd5,0xa4,0xc0,0x02,0xc0,0x15,0xd0,0x08,0xc0,0x2b,
0x82,0x78,0x87,0x80,0x08,0xc0,0x2b,0x82,0xe8,0x17,
0x00,0x08,0xc0,0x2c,0x49,0xe0,0x42,0x08,0xc0,0x2b,
0xd0,0xe8,0x17,0x00,0x08,0xc0,0x29,0xd0,0xe8,0x93,
0x00,0x08,0xc0,0x2b,0xc3,0x04,0x44,0x00,0x08,0xc0,
0x29,0x92,0x68,0x93,0x00,0x08,0xc0,0x29,0xa2,0x4e,
0x17,0x00,0x02,0x60,0x12,0x20,0x04,0x9f,0x91,0x05,
0x80,0x06,0xa0,0x20,0x92,0x10,0x80,0x06,0x68,0xab,
0x83,0x80,0x06,0xa0,0x22,0x10,0x92,0x00,0x08,0xc0,
0x2b,0xa0,0x4c,0x02,0x00,0x0c,0xc0,0x39,0xe4,0x2b,
0x57,0xa0,0x3c,0x08,0xc0,0x29,0xa2,0x5e,0x94,0x80,
0x08,0xc0,0x2b,0x92,0xe8,0x97,0x00,0x08,0xc0,0x29,
0xea,0x0e,0x08,0xc0,0x2b,0xaa,0x5c,0x08,0xc0,0x2b,
0xd0,0xe8,0x87,0x80,0x08,0xc0,0x2b,0xd0,0xe8,0x84,
0x00,0x08,0xc0,0x29,0xd0,0xb8,0x93,0x00,0x08,0xc0,
0x2c,0x4b,0xe2,0x52,0x06,0xc0,0x23,0xd2,0x70,0x08,
0xc0,0x2b,0xe8,0x5c,0x08,0xc0,0x2c,0x4b,0xa2,0x52,
0x08,0xc0,0x2d,0xc3,0xc0,0x0a,0xc0,0x32,0x2d,0xab,
0x11,0x44,0x08,0xc0,0x2a,0x5a,0xb8,0x94,0x80,0x08,
0xc0,0x29,0xaa,0x4c,0x08,0xc0,0x2b,0xa2,0x5c,0x84,
0x00,0x08,0xe7,0xa9,0xaa,0x4c,0x10,0x08,0xc0,0x2b,
0xa2,0x5c,0xc5,0x80,0x08,0xc0,0x29,0xd0,0x68,0x17,
0x00,0x0a,0xc0,0x33,0xf4,0x41,0x00,0x08,0xc0,0x2d,
0xc9,0x80,0x0a,0xc0,0x35,0x44,0xa1,0x00,0x12,0xc0,
0x54,0xc4,0x61,0x54,0x22,0x00,0x0a,0xc0,0x32,0x25,
0x41,0x0a,0x44,0x0a,0xc0,0x32,0x25,0x49,0x04,0x0a,
0xc0,0x33,0xe1,0x41,0x08,0x7c,0x04,0xc0,0x1b,0xa9,
0x80,0x0c,0xc0,0x3a,0x02,0x02,0x02,0x02,0x02,0x04,
0xc0,0x1b,0xa5,0x80,0x06,0x42,0x21,0x28,0x08,0x20,
0x2b,0xc0,0x0a,0xa0,0x31,0x93,0x23,0xc0,0x08,0xe0,
0x2c,0x43,0xa6,0x5c,0x06,0xa0,0x21,0xcc,0x30,0x0a,
0xe0,0x34,0x08,0xe9,0x91,0xe0,0x08,0xa0,0x29,0x92,
0xf4,0x1c,0x08,0xe0,0x28,0xe1,0x1d,0x08,0x40,0x0a,
0xe7,0x31,0xf3,0x23,0x82,0x70,0x08,0xe0,0x2c,0x43,
0xa6,0x52,0x02,0xe0,0x12,0x55,0x05,0x27,0x19,0x18,
0xa0,0x06,0xe0,0x24,0x45,0x68,0xaa,0x02,0xe0,0x16,
0x50,0x10,0xa0,0x4b,0xfa,0x52,0x49,0x20,0x0a,0xa0,
0x33,0xd2,0x92,0x40,0x08,0xa0,0x29,0xa6,0x4c,0x0a,
0xff,0x2b,0xd2,0x93,0x88,0x20,0x0a,0xe7,0x31,0xf3,
0x23,0x82,0x08,0x06,0xa0,0x22,0xb4,0x44,0x08,0xa0,
0x29,0xd0,0xe0,0xb8,0x06,0xc0,0x24,0x27,0x84,0x20,
0x0a,0xa0,0x35,0x48,0xf0,0x0a,0xa0,0x34,0x46,0x14,
0x20,0x12,0xa0,0x54,0x44,0x61,0x54,0x22,0x00,0x0a,
0xa0,0x32,0x25,0x08,0x52,0x20,0x0a,0xe7,0x35,0x44,
0xf0,0x5e,0x0a,0xa0,0x33,0xe1,0x08,0x43,0xe0,0x06,
0xc0,0x21,0x94,0x62,0x30,0x03,0x07,0x96,0xd0,0x06,
0xc0,0x23,0x14,0x32,0x60,0x0a,0x41,0x31,0xab,0x00 };
/* font data size: 560 bytes */

static const unsigned char pukeforce_index[] = {
0x00,0x00,0x30,0x1c,0x0b,0x04,0xc1,0xb0,0x8c,0x2b,
0x0b,0xc3,0x40,0xe4,0x3e,0x10,0xc4,0x71,0x2c,0x4e,
0x15,0x85,0xd1,0x84,0x68,0x1b,0xc7,0x51,0xf0,0x83,
0x22,0x89,0x12,0x60,0x9c,0x28,0x4a,0x72,0xb0,0xb2,
0x2e,0x4c,0x13,0x20,0xcf,0x35,0x0d,0x93,0x80,0xe7,
0x3b,0x8f,0x43,0xe4,0xfe,0x41,0x10,0x94,0x41,0x17,
0x47,0x12,0x34,0xa5,0x30,0x4d,0xd3,0xd5,0x09,0x48,
0x54,0x15,0x75,0x75,0x64,0x5a,0x57,0x15,0xd9,0x7a,
0x5f,0x98,0x46,0x29,0x8f,0x65,0x99,0xc6,0x8d,0xaa,
0x6c,0x1b,0x46,0xe5,0xbf,0x70,0xdc,0xa7,0x41,0xd5,
0x77,0x1e,0x37,0xa1,0xee,0x7d,0x1f,0x97,0xfe,0x07,
0x83,0xa1,0x48,0x6e,0x21,0x89,0x62,0xb0 };
/* font index size: 118 bytes */

const craft::packedbdf_t pukeforce = {
	pukeforce_index,
	0,
	pukeforce_data,
	1,
	0,
	32,
	95,
	97,
	126,
	10,
	4,
	4,
	2,
	4,
	4,
	16,
	6
};
