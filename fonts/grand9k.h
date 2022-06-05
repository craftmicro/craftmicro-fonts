#pragma once

#include "display/PackedBDF.h"

static const unsigned char grand9k_data[] = {
0x04,0x40,0x20,0x05,0xc0,0x2b,0x88,0x0c,0x85,0x45,
0x50,0x19,0xc0,0x72,0x4f,0xe5,0x27,0xe4,0x80,0x15,
0xc0,0x61,0x0f,0x50,0xe1,0x5e,0x10,0x1d,0xc0,0x82,
0x15,0x25,0x42,0xa1,0x52,0x54,0x20,0x15,0xc0,0x63,
0x90,0x44,0xf8,0x89,0xc0,0x04,0x85,0x25,0x0d,0xc0,
0x43,0xb8,0x60,0x0d,0xc0,0x46,0xb2,0xc0,0x15,0x42,
0x61,0x15,0x39,0x51,0x00,0x15,0x41,0x68,0x23,0xe2,
0x08,0x04,0x8f,0x25,0x10,0x43,0x57,0x80,0x04,0x40,
0x24,0x0d,0xc0,0x48,0x32,0x91,0x00,0x15,0xc0,0x63,
0x91,0x4d,0x56,0x51,0x38,0x09,0xc0,0x37,0x69,0x15,
0xc0,0x67,0xa0,0x27,0x44,0x1f,0x11,0xc0,0x57,0x40,
0xba,0x05,0xc0,0x15,0xc0,0x60,0xc5,0x25,0x17,0xc1,
0x04,0x15,0xc0,0x67,0xe2,0x0f,0x40,0x5e,0x15,0xc0,
0x63,0xa2,0x0f,0x44,0x4e,0x15,0xc0,0x67,0xc1,0x81,
0x41,0x04,0x15,0xc0,0x63,0xa2,0x27,0x44,0x4e,0x15,
0xc0,0x63,0xa2,0x27,0xc0,0x4e,0x05,0x40,0x26,0x48,
0x05,0x8f,0x26,0x4a,0x11,0xc0,0x50,0x88,0x88,0x20,
0x82,0x10,0xc2,0x57,0x81,0xe0,0x11,0xc0,0x54,0x10,
0x41,0x11,0x10,0x11,0xc0,0x57,0x40,0x88,0x80,0x20,
0x1e,0x0f,0x83,0xe4,0x14,0xd8,0xaa,0x9c,0x80,0x7c,
0x15,0xc0,0x63,0xa6,0x2f,0xa2,0x88,0x15,0xc0,0x67,
0xa2,0x2f,0x44,0x5e,0x11,0xc0,0x53,0xdc,0x1c,0x15,
0xc0,0x67,0xae,0x2f,0x00,0x11,0xc0,0x57,0xc4,0x3e,
0x21,0xe0,0x11,0xc0,0x57,0xc4,0x3e,0x21,0x00,0x15,
0xc0,0x63,0xe2,0x09,0xc4,0x4f,0x15,0xc0,0x69,0x8b,
0xf1,0x14,0x40,0x05,0xc0,0x2c,0xa0,0x15,0xc0,0x6c,
0x0b,0xc0,0x15,0xc0,0x64,0x52,0x51,0x85,0x12,0x44,
0x15,0xc0,0x6c,0x83,0xe0,0x15,0xc0,0x64,0x5b,0x56,
0x62,0x88,0x15,0xc0,0x64,0x59,0x55,0x38,0x8a,0x20,
0x15,0xc0,0x63,0xae,0x27,0x00,0x15,0xc0,0x67,0xa6,
0x2f,0x20,0x80,0x1a,0x0f,0x73,0x97,0x11,0xc0,0x60,
0x15,0xc0,0x67,0xa6,0x2f,0x22,0x88,0x15,0xc0,0x63,
0xe2,0x07,0x40,0x5e,0x15,0xc0,0x67,0xec,0x82,0x00,
0x15,0xc0,0x6c,0x89,0xc0,0x15,0xc0,0x6b,0x89,0x42,
0x00,0x15,0xc0,0x6a,0x8a,0xad,0xa2,0x15,0xc0,0x68,
0x89,0x42,0x14,0x8a,0x20,0x15,0xc0,0x69,0x89,0xd0,
0x41,0x00,0x15,0xc0,0x67,0xc1,0x08,0x42,0x10,0x7c,
0x0d,0xc0,0x47,0xb8,0xe0,0x0d,0xc0,0x48,0x92,0x84,
0x40,0x0d,0xc0,0x47,0xb2,0xe0,0x14,0xc4,0x61,0x0a,
0x44,0x10,0x4f,0x47,0x80,0x08,0x85,0x34,0x40,0x11,
0x40,0x53,0x04,0xe9,0x38,0x11,0xc0,0x58,0x87,0x4c,
0xb8,0x0d,0x40,0x43,0x98,0x60,0x11,0xc0,0x58,0x13,
0xcc,0x9c,0x11,0x40,0x53,0x25,0xe8,0x38,0x11,0xc0,
0x51,0x91,0xf2,0x84,0x11,0x8f,0x53,0xc4,0x9c,0x2e,
0x11,0xc0,0x58,0x87,0x4c,0xa4,0x05,0xc0,0x24,0xaa,
0x0e,0x0f,0x41,0x0b,0x2c,0x11,0xc0,0x58,0x84,0xa9,
0x8a,0x48,0x05,0xc0,0x2c,0xa0,0x15,0x40,0x66,0xa6,
0xa8,0x80,0x11,0x40,0x57,0x4c,0xa4,0x11,0x40,0x53,
0x4c,0x98,0x11,0x8f,0x57,0x4c,0xb9,0x00,0x11,0x8f,
0x53,0xcc,0x9c,0x20,0x11,0x40,0x55,0xb2,0x21,0x00,
0x11,0x40,0x53,0xa0,0xc1,0x70,0x11,0xc0,0x58,0x47,
0xca,0x0c,0x11,0x40,0x5a,0x93,0x80,0x15,0x40,0x69,
0x89,0x42,0x00,0x15,0x40,0x64,0x66,0xa5,0x00,0x15,
0x40,0x64,0x4a,0x10,0xa4,0x40,0x11,0x8f,0x59,0x93,
0x85,0xc0,0x15,0x40,0x67,0xc2,0x10,0x87,0xc0,0x11,
0xc0,0x51,0xc2,0x22,0x10,0x60,0x05,0xc0,0x2c,0xa0,
0x11,0xc0,0x56,0x41,0x06,0x09,0x80,0x18,0x85,0x73,
0x29,0x80 };
/* font data size: 572 bytes */

static const unsigned char grand9k_index[] = {
0x00,0x00,0x30,0x1c,0x0b,0x04,0xc1,0xb0,0x94,0x2d,
0x0c,0x03,0x50,0xe8,0x41,0x11,0xc4,0xa1,0x38,0x51,
0x15,0xc5,0xf1,0x8c,0x6a,0x1c,0x47,0x92,0x00,0x87,
0x23,0x89,0x52,0x70,0xa0,0x29,0x0a,0xb2,0xc0,0xb7,
0x2f,0x8c,0x83,0x3c,0xd6,0x36,0xce,0x13,0xa0,0xef,
0x3d,0x8f,0xd4,0x05,0x06,0x43,0x91,0x34,0x69,0x22,
0x4a,0x12,0xf4,0xd9,0x3d,0x51,0x14,0xa5,0x3d,0x55,
0x56,0xd6,0x35,0xa9,0x72,0x5d,0xd7,0xd6,0x09,0x87,
0x62,0xd8,0xf6,0x55,0x9b,0x68,0x1a,0x66,0xb1,0xb2,
0x6e,0x1b,0xe7,0x09,0xc7,0x73,0x9d,0x27,0x61,0xdd,
0x78,0x9e,0x87,0xb9,0xf4,0x7e,0xa0,0x08,0x16,0x0b,
0x84,0x61,0x88,0x7a,0x25,0x8b,0x23,0x08,0xdc };
/* font index size: 119 bytes */

const craft::packedbdf_t grand9k = {
	grand9k_index,
	0,
	grand9k_data,
	1,
	0,
	32,
	126,
	0,
	0,
	10,
	3,
	4,
	2,
	4,
	4,
	8,
	7
};
