#pragma once

#include "display/PackedBDF.h"

static const unsigned char yetbumbler_data[] = {
0x02,0x20,0x28,0x05,0x00,0x1d,0xe1,0xb0,0x0a,0x62,
0xb4,0x6d,0xb0,0x11,0x00,0x49,0x9a,0x3f,0xe1,0x9a,
0x3f,0xcc,0xc0,0x0f,0x00,0x41,0xfb,0xfb,0x63,0xf1,
0xf8,0xdb,0xfb,0xf0,0x0c,0xc0,0xbb,0x36,0xe3,0x8e,
0x3b,0x66,0x0f,0x00,0x41,0xc3,0xc3,0x04,0x77,0x63,
0x7f,0x3e,0x04,0x62,0x9c,0x6c,0x07,0x00,0x21,0xbd,
0x67,0x30,0x07,0x00,0x23,0x3d,0x37,0x60,0x04,0x43,
0x1b,0x60,0x0c,0xc0,0xbc,0x19,0x1f,0x8c,0x18,0x04,
0x67,0x1c,0x6c,0x0a,0x41,0xb3,0xef,0x80,0x04,0x40,
0x1b,0x60,0x09,0x00,0x2c,0x19,0xe1,0x9c,0xc6,0x00,
0x0d,0x00,0x39,0xe7,0xf5,0x9b,0xf3,0xc0,0x07,0x00,
0x21,0xc7,0xa6,0x60,0x0b,0x00,0x31,0xcf,0xb6,0x39,
0xce,0x3e,0xf8,0x0b,0x00,0x31,0xcf,0xb6,0x38,0xcd,
0xbe,0x70,0x0b,0x00,0x30,0x63,0x9f,0x1f,0x81,0x86,
0x0b,0x00,0x34,0x7d,0x87,0x9f,0x0d,0xf7,0x80,0x0b,
0x00,0x31,0xcf,0x30,0xf3,0xed,0xbe,0x70,0x0b,0x00,
0x34,0x7c,0x31,0xc6,0x38,0xc3,0x00,0x0b,0x00,0x31,
0xcf,0xb7,0x1f,0x6d,0xf3,0x80,0x0b,0x00,0x31,0xcf,
0xb6,0xf9,0xe1,0x9e,0x70,0x04,0xa0,0x9c,0x61,0xb0,
0x04,0xe7,0x9c,0x70,0x46,0xc0,0x08,0xc0,0xa8,0xcf,
0x1c,0x71,0x80,0x0a,0xa0,0xb4,0x7c,0x07,0xdf,0x08,
0xc0,0xab,0x1d,0x0e,0xe6,0x00,0x0b,0x00,0x33,0xcf,
0x86,0x79,0xc0,0x18,0x60,0x10,0xe0,0x49,0x9a,0x7f,
0xcf,0xc3,0xc0,0xc0,0x11,0x00,0x4c,0x0c,0x41,0xe4,
0x3f,0x39,0xd8,0x60,0x0d,0x00,0x3b,0xe7,0xec,0xe3,
0xf6,0x6f,0xdf,0x00,0x0d,0x00,0x39,0xe7,0xec,0xe3,
0x06,0x6f,0xcf,0x00,0x0d,0x00,0x3b,0xe7,0xf5,0x9b,
0xf7,0xc0,0x0b,0x00,0x34,0x7d,0x88,0xe3,0x0f,0xbe,
0x0b,0x00,0x34,0x7d,0x88,0xf4,0x61,0x80,0x0d,0x00,
0x39,0xe7,0xcc,0x23,0x76,0x6f,0xcf,0x00,0x0d,0x00,
0x3c,0xe7,0x1f,0xc6,0x6c,0xc0,0x05,0x00,0x1e,0xec,
0x0b,0x00,0x35,0x8d,0xb7,0xce,0x0d,0x00,0x3b,0x36,
0xef,0xa3,0xc7,0xcd,0xd9,0x80,0x0b,0x00,0x36,0x61,
0xf7,0xc0,0x11,0x00,0x4b,0x9e,0x3f,0xdb,0x73,0x86,
0xc3,0x0f,0x00,0x43,0x1b,0x9b,0xdc,0x7f,0x6f,0x67,
0x63,0x0d,0x00,0x39,0xe7,0xf5,0x9b,0xf3,0xc0,0x0d,
0x00,0x3b,0xe7,0xec,0xdf,0xbe,0x8c,0x18,0x00,0x0f,
0x00,0x41,0xf3,0xfc,0x63,0x6f,0x6e,0x7f,0x3b,0x0d,
0x00,0x3b,0xe7,0xec,0xdf,0xc7,0xcd,0xd9,0x80,0x0d,
0x00,0x39,0xf7,0xec,0x1f,0x1f,0x06,0xfd,0xf0,0x0d,
0x00,0x3c,0x7f,0x66,0x0c,0x0d,0x00,0x3e,0x66,0xfc,
0xf0,0x11,0x00,0x4c,0x61,0xb9,0xcc,0xc7,0xe8,0x3c,
0x0c,0x00,0x15,0x00,0x5c,0xe0,0x6e,0xdc,0xdb,0x1f,
0xe1,0xf8,0x33,0x00,0x11,0x00,0x4b,0x0d,0xce,0x7e,
0x83,0xc3,0xf3,0x9d,0x86,0x0d,0x00,0x3c,0x66,0xfc,
0xf4,0x98,0x30,0x0d,0x00,0x3c,0x7e,0x1c,0x71,0xc7,
0x0f,0xdf,0x80,0x07,0x00,0x24,0x7a,0xce,0xe0,0x09,
0x00,0x2c,0x63,0xa1,0x8e,0x31,0x80,0x07,0x00,0x24,
0x7a,0x6e,0xe0,0x08,0x62,0xa9,0x9e,0xf0,0x0a,0x47,
0xb3,0xef,0x80,0x04,0x62,0x9c,0x6c,0x0a,0xa0,0x31,
0xef,0xb6,0xf9,0xe0,0x0b,0x00,0x34,0xe1,0xe7,0xdb,
0x7d,0xe0,0x08,0xa0,0x29,0xde,0xc7,0x9c,0x0b,0x00,
0x34,0x8c,0xf7,0xdb,0x7c,0xf0,0x0a,0xa0,0x31,0xd1,
0xf7,0x0c,0x07,0x00,0x21,0xbb,0x47,0x8c,0xc0,0x0a,
0xe7,0x31,0xef,0xb6,0xf9,0xe3,0x8c,0x0b,0x00,0x34,
0xe1,0xe7,0xe3,0x6d,0x80,0x04,0xa0,0x1d,0x6c,0x06,
0xff,0x1d,0xb7,0x60,0x0b,0x00,0x34,0xe1,0xb7,0xde,
0x7d,0xb0,0x05,0x00,0x1e,0xec,0x10,0xa0,0x4b,0xd9,
0xff,0x1b,0x6d,0xb0,0x0a,0xa0,0x33,0xcf,0xc6,0xdb,
0x0a,0xa0,0x31,0xcf,0xb6,0xf9,0xc0,0x0a,0xe7,0x33,
0xcf,0xb6,0xfb,0xcc,0x30,0x0a,0xe7,0x31,0xef,0xb6,
0xf9,0xe1,0x86,0x06,0xa0,0x21,0xbc,0x66,0x08,0xa0,
0x29,0xde,0x67,0xb8,0x07,0x00,0x24,0xe8,0xec,0xe6,
0x0a,0xa0,0x34,0xed,0xf3,0xc0,0x0a,0xa0,0x34,0x6d,
0xf3,0x84,0x10,0xa0,0x4b,0x0d,0xb7,0x1f,0xe6,0x60,
0x0a,0xa0,0x33,0x6f,0x9c,0xfb,0x60,0x0a,0xe7,0x34,
0xed,0xf3,0xdf,0x78,0x0a,0xa0,0x34,0x7c,0xe7,0xdf,
0x09,0x00,0x28,0xce,0x68,0xe3,0x1c,0x60,0x05,0x47,
0x1e,0xf1,0xb0,0x09,0x00,0x2b,0x1c,0x68,0x73,0x39,
0x80,0x0e,0x61,0x41,0xdb,0xfb,0x70 };
/* font data size: 79878 bytes */

static const unsigned char yetbumbler_index[] = {
0x9a,0xa6,0xcd,0x54,0x26,0xaa,0xb3,0x55,0xa9,0xab,
0x24,0xd5,0xbe,0x6a,0xef,0x35,0x81,0x9a,0xc2,0xcd,
0x62,0xe6,0xb2,0x33,0x59,0x59,0xac,0xe4,0xd6,0x82,
0x6b,0x4b,0x35,0xa9,0x9a,0xd8,0xcd,0x6e,0x66,0xb7,
0xf3,0x5c,0x89,0xae,0x8c,0xd7,0x66,0x6b,0xc5,0x35,
0xeb,0x9a,0xfa,0x4d,0x7f,0x66,0xc0,0xd3,0x60,0xb9,
0xb0,0x8c,0xd8,0x62,0x6c,0x3d,0x36,0x25,0x9b,0x17,
0x4d,0x8d,0xe6,0xc8,0x33,0x64,0xb9,0xb2,0xac,0xd9,
0x76,0x6c,0xcb,0x36,0x6d,0x9b,0x3b,0xcd,0x9f,0xe6,
0xd0,0x73,0x68,0x99,0xb4,0x9c,0xda,0x66,0x6d,0x45,
0x36,0xac,0x9b,0x5a,0x4d,0xaf,0xa6,0xd9,0x13,0x6d,
0x29,0xb6,0xe4,0xdb,0x8a,0x6d,0xd1,0x36,0xf3,0x9b,
0x7f,0xcd,0xc2,0xa6,0xe2,0x53,0x71,0xc9,0xb9,0x14,
0xdc,0xaa,0x6e,0x61,0x37,0x35,0x9b,0x9d,0x4d,0xcf,
0xa6,0xe8,0xb3,0x74,0xd9,0xba,0x9c,0xdd,0x6e,0x6e,
0xc3,0x37,0x68,0x9b,0xb8,0x4d,0xde,0x26,0xef,0x93,
0x78,0x19,0xbc,0x4c,0xde,0x36,0x6f,0x2b,0x37,0x9b,
0x9b,0xd1,0x4d,0xea,0xa6,0xf6,0x53,0x7b,0x79,0xbd,
0xec,0xdf,0x0e,0x6f,0x93,0x37,0xcf,0x9b,0xeb,0xcd,
0xf7,0xa6,0xfc,0xb3,0x7e,0xb9,0xbf,0x9c,0xdf,0xe2,
0x70,0x00 };
/* font index size: 202 bytes */

const craft::packedbdf_t yetbumbler = {
	yetbumbler_index,
	0,
	yetbumbler_data,
	1,
	0,
	32,
	126,
	0,
	0,
	17,
	4,
	4,
	2,
	4,
	4,
	9,
	8
};