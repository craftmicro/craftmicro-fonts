#pragma once

#include "display/PackedBDF.h"

static const unsigned char square_data[] = {
0x02,0x20,0x50,0x05,0x47,0x16,0xe1,0xb0,0x0a,0x82,
0x2c,0xed,0xb0,0x15,0x47,0x54,0x19,0x91,0xff,0xc1,
0x99,0x1f,0xf8,0xcc,0x19,0x80,0x0d,0x47,0x30,0x48,
0x7c,0xc4,0x3e,0x0e,0x3f,0x08,0x19,0x47,0x64,0x38,
0xc4,0x6d,0x84,0x3b,0x74,0x06,0xd8,0x63,0x83,0x1c,
0x19,0x47,0x60,0x18,0x03,0xf0,0x19,0x80,0xc0,0x03,
0x0c,0x7e,0x63,0x3c,0x18,0x63,0xff,0xd9,0xe6,0x04,
0x82,0x14,0xec,0x09,0x47,0x24,0x1c,0x34,0x64,0x30,
0xc6,0x09,0x47,0x24,0x64,0x34,0x1c,0x33,0x18,0x0c,
0xc1,0x33,0x37,0xf0,0xf3,0xf6,0x60,0x0c,0xc7,0xb4,
0x19,0x1f,0x8c,0x18,0x04,0x86,0x14,0xec,0x04,0x47,
0x13,0x60,0x0d,0x47,0x34,0x07,0x03,0x41,0x90,0xc3,
0x06,0x00,0x11,0x47,0x44,0x1f,0xe1,0x9b,0xfd,0xfe,
0x0d,0x47,0x34,0x07,0x07,0xd0,0x6f,0xdf,0x80,0x11,
0x47,0x44,0x1f,0xc0,0x1c,0x1f,0xc1,0x83,0xfd,0xfe,
0x11,0x47,0x44,0x1f,0xc0,0x1c,0x1f,0xc0,0x1b,0xfd,
0xfe,0x11,0x47,0x44,0x18,0x41,0x9c,0x1f,0xc0,0x1b,
0xfd,0xfe,0x11,0x47,0x44,0x1f,0xc1,0x84,0x1f,0xc0,
0x1b,0xfd,0xfe,0x11,0x47,0x44,0x1f,0xc1,0x84,0x1f,
0xc1,0x9b,0xfd,0xfe,0x11,0x47,0x44,0x1f,0xc0,0x1d,
0x06,0x3f,0xdf,0xe0,0x11,0x47,0x44,0x1f,0xc1,0x9c,
0x1f,0xc1,0x9b,0xfd,0xfe,0x11,0x47,0x44,0x1f,0xc1,
0x9c,0x1f,0xc0,0x1b,0xfd,0xfe,0x04,0xa7,0x14,0x61,
0xb0,0x04,0xe6,0x14,0x62,0x76,0x0d,0x47,0x34,0x07,
0x06,0x46,0x10,0x60,0x30,0x60,0x0c,0xa7,0x34,0x7e,
0x01,0xfb,0xf0,0x0d,0x47,0x34,0x61,0x06,0x40,0x70,
0x63,0x06,0x00,0x0d,0x47,0x34,0x7f,0x19,0xc9,0xe0,
0x06,0x0c,0x17,0x85,0xe4,0x7f,0xf4,0x01,0xa9,0xfb,
0x13,0xfd,0x00,0x1f,0xfd,0xff,0xc0,0x11,0x47,0x44,
0x1f,0xc1,0x9c,0x1f,0xc1,0x9b,0xcd,0xe6,0x11,0x47,
0x44,0x1f,0xc1,0x9c,0x1f,0xc1,0x9b,0xfd,0xfe,0x11,
0x47,0x44,0x1f,0xe1,0x83,0xfd,0xfe,0x11,0x47,0x44,
0x1f,0xe1,0x9b,0xfd,0xfe,0x11,0x47,0x44,0x1f,0xc1,
0x84,0x1e,0x41,0x83,0xfd,0xfe,0x11,0x47,0x44,0x1f,
0xd1,0x84,0x1f,0xbc,0x1e,0x00,0x11,0x47,0x44,0x1f,
0xc1,0x85,0x19,0xbf,0xdf,0xe0,0x11,0x47,0x45,0x19,
0xc1,0xfc,0x19,0xbc,0xde,0x60,0x09,0x47,0x26,0x98,
0xde,0xf0,0x11,0x47,0x45,0x01,0xd1,0x9b,0xfd,0xfe,
0x11,0x47,0x45,0x19,0xc1,0xe4,0x19,0xbc,0xde,0x60,
0x11,0x47,0x46,0x18,0x41,0x9b,0xfd,0xfe,0x15,0x47,
0x54,0x18,0x70,0x7f,0xc1,0xb7,0x06,0x1b,0xc3,0x78,
0x60,0x15,0x47,0x54,0x18,0x70,0x79,0xc1,0x9f,0x06,
0x1b,0xc3,0x78,0x60,0x11,0x47,0x44,0x1f,0xe1,0x9b,
0xfd,0xfe,0x11,0x47,0x44,0x1f,0xc1,0x9c,0x1f,0xc1,
0x83,0xfd,0xfe,0x11,0x47,0x44,0x1f,0xd9,0x98,0xdd,
0xfe,0xff,0x11,0x47,0x44,0x1f,0xc1,0x9c,0x1e,0x41,
0x9b,0xcd,0xe6,0x11,0x47,0x44,0x1f,0xc1,0x84,0x1f,
0xc0,0x1b,0xfd,0xfe,0x11,0x47,0x44,0x1f,0xe0,0x63,
0xfd,0xfe,0x11,0x47,0x46,0x99,0x8c,0xdf,0xef,0xf0,
0x13,0x47,0x44,0x19,0xf0,0xcc,0xff,0x3f,0xc0,0x1b,
0x47,0x64,0x19,0x9f,0x0c,0xcc,0xff,0xf3,0xff,0xc0,
0x11,0x47,0x44,0x19,0xc1,0xfc,0x06,0x41,0xfb,0xcd,
0xe6,0x11,0x47,0x45,0x99,0x8f,0xe0,0x31,0xfe,0xff,
0x11,0x47,0x44,0x1f,0xc0,0x1c,0x06,0x41,0x83,0xfd,
0xfe,0x09,0x47,0x24,0x7e,0x63,0xde,0x0d,0x47,0x34,
0x61,0x0c,0x41,0x90,0x30,0x30,0x60,0x09,0x47,0x24,
0x7e,0x1b,0xde,0x0c,0x83,0x34,0x18,0xcd,0x98,0x12,
0x47,0x4b,0xfe,0xff,0x80,0x06,0x83,0x1c,0x63,0x30,
0x10,0xe7,0x40,0x0e,0x0f,0xe0,0xcd,0xfe,0xff,0x11,
0x47,0x45,0x18,0x41,0xfc,0x19,0xbf,0xdf,0xe0,0x10,
0xc7,0x44,0x1f,0xc1,0x83,0xfd,0xfe,0x11,0x47,0x45,
0x01,0xc1,0xfc,0x19,0xbf,0xdf,0xe0,0x10,0xc7,0x44,
0x1f,0x8d,0xc6,0x0f,0xf7,0xf8,0x0d,0x47,0x34,0x1f,
0x46,0x41,0xef,0x1e,0x00,0x11,0x45,0x44,0x1f,0xc1,
0x9c,0x7f,0xc0,0x18,0xfc,0x7e,0x11,0x47,0x45,0x18,
0x41,0xfc,0x19,0xbc,0xde,0x60,0x09,0x47,0x24,0x1c,
0x05,0x1b,0xde,0x11,0xc5,0x44,0x01,0xc0,0x05,0x01,
0xc7,0x9c,0x19,0x8f,0xc7,0xe0,0x11,0x47,0x45,0x18,
0x41,0x9c,0x1e,0x3c,0xde,0x60,0x0d,0x47,0x36,0x98,
0x31,0xfb,0xf0,0x18,0xc7,0x64,0x1f,0xfc,0x19,0x9b,
0xcc,0xde,0x66,0x10,0xc7,0x44,0x1f,0xc1,0x9b,0xcd,
0xe6,0x10,0xc7,0x44,0x1f,0xc1,0x9b,0xfd,0xfe,0x11,
0x45,0x44,0x1f,0xc1,0x9c,0x7f,0xc9,0x80,0xc0,0x11,
0x45,0x44,0x1f,0xc1,0x9c,0x7f,0xc8,0x18,0x0c,0x10,
0xc7,0x44,0x1f,0xc1,0x9b,0xc1,0xe0,0x10,0xc7,0x40,
0xc2,0x0f,0xc0,0x6f,0xf7,0xf8,0x0d,0x47,0x34,0x19,
0x07,0xd1,0x8f,0xdf,0x80,0x10,0xc7,0x45,0x19,0xbf,
0xdf,0xe0,0x12,0xc7,0x44,0x19,0xe0,0xcc,0xff,0x3f,
0xc0,0x1a,0xc7,0x64,0x19,0x9e,0x0c,0xcc,0xff,0xf3,
0xff,0xc0,0x10,0xc7,0x44,0x1f,0xc0,0x63,0xfd,0xfe,
0x11,0x45,0x45,0x19,0xc7,0xfc,0x01,0x8f,0xc7,0xe0,
0x15,0x45,0x54,0x07,0xf0,0x01,0xc7,0x99,0x06,0x18,
0xff,0x1f,0xe0,0x07,0x47,0x25,0x38,0xd2,0xcc,0x05,
0x47,0x16,0xf1,0xb0,0x09,0x47,0x24,0x74,0x34,0x1c,
0x33,0x9c };
/* font data size: 70963 bytes */

static const unsigned char square_index[] = {
0x88,0xf4,0xc4,0x7b,0x22,0x3e,0x31,0x1f,0x68,0x90,
0x1c,0x48,0x36,0x24,0x37,0x12,0x2e,0x89,0x19,0x44,
0x8e,0xa2,0x48,0x51,0x24,0xa8,0x92,0x8c,0x49,0x56,
0x24,0xb3,0x12,0x63,0x89,0x35,0xc4,0x9d,0x22,0x4f,
0xf1,0x28,0xa8,0x94,0xac,0x4a,0x82,0x25,0x57,0x12,
0xb5,0x89,0x60,0x44,0xb2,0xe2,0x5a,0x11,0x2d,0x58,
0x96,0xfc,0x4b,0x9a,0x25,0xe1,0x12,0xf9,0x89,0x84,
0x44,0xc4,0xe2,0x63,0xd1,0x32,0x68,0x99,0x74,0x4c,
0xe6,0x26,0x87,0x13,0x4d,0x89,0xab,0xc4,0xd7,0x62,
0x6c,0xb1,0x36,0xf8,0x9b,0xbc,0x4e,0x12,0x27,0x23,
0x13,0x99,0x89,0xd2,0x44,0xeb,0x62,0x77,0x11,0x3c,
0x38,0x9e,0x5c,0x4f,0x4e,0x27,0xb9,0x13,0xe7,0x89,
0xf9,0x44,0xfe,0xe2,0x80,0xd1,0x40,0xc8,0xa0,0xb4,
0x50,0x72,0x28,0x45,0x14,0x28,0x8a,0x16,0xc5,0x0d,
0xa2,0x88,0x11,0x44,0x88,0xa2,0x94,0x51,0x6e,0x28,
0xc9,0x14,0x6f,0x8a,0x3c,0xc5,0x20,0x22,0x91,0xb1,
0x49,0x78,0xa4,0xf4,0x52,0xa2,0x29,0x61,0x14,0xb8,
0x8a,0x61,0x45,0x33,0x22,0x9a,0x91,0x4d,0xd8,0xa7,
0x34,0x53,0xb6,0x29,0xed,0x15,0x01,0x8a,0x84,0xc5,
0x44,0xe2,0xa4,0x11,0x52,0x68,0xa9,0x58 };
/* font index size: 198 bytes */

const craft::packedbdf_t square = {
	square_index,
	0,
	square_data,
	1,
	0,
	32,
	44,
	46,
	125,
	17,
	4,
	4,
	2,
	4,
	4,
	10,
	8
};