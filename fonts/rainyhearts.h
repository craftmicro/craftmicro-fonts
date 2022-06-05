#pragma once

#include "display/PackedBDF.h"

static const unsigned char rainyhearts_data[] = {
0x02,0x20,0x28,0x07,0x20,0x26,0x20,0x52,0x08,0x63,
0x2c,0x2a,0x80,0x0f,0x00,0xc4,0x24,0x7f,0x84,0x8f,
0xe4,0x84,0x80,0x0d,0x67,0xb8,0x43,0xc9,0x52,0x1e,
0x81,0x62,0x53,0xc1,0x00,0x15,0x20,0x59,0x80,0x49,
0x09,0x40,0xc8,0x02,0x00,0x4d,0x02,0x48,0x86,0x0f,
0x20,0x41,0xc4,0x44,0x28,0x10,0x2a,0x44,0x4a,0x31,
0x04,0x63,0x1c,0x28,0x07,0x67,0x20,0x96,0xc2,0x10,
0x07,0x67,0x22,0x16,0x92,0x40,0x0a,0xa2,0xb1,0x4f,
0x9c,0xf9,0x40,0x0a,0xa9,0x3c,0x11,0xf1,0x04,0x04,
0x47,0x99,0x40,0x08,0x21,0xab,0xc0,0x02,0x20,0x12,
0x0b,0x20,0x34,0x06,0x05,0x04,0x84,0x20,0x0b,0x28,
0x39,0xdb,0x13,0x80,0x07,0x28,0x29,0x36,0x27,0x0b,
0x28,0x39,0xc8,0xc0,0x42,0x10,0x84,0x1f,0x0b,0x28,
0x39,0xc8,0x82,0x34,0x85,0x13,0x80,0x09,0x28,0x30,
0x6a,0x5f,0x02,0x10,0x0b,0x28,0x39,0xf1,0x07,0xa4,
0x28,0x9c,0x0b,0x28,0x39,0xc8,0xa0,0xf5,0x44,0xe0,
0x0b,0x28,0x3b,0xd2,0x10,0xa4,0x82,0x00,0x0b,0x28,
0x39,0xd3,0x13,0xa6,0x27,0x00,0x0b,0x28,0x39,0xd3,
0x13,0xe0,0x28,0x9c,0x02,0xc0,0x13,0x44,0x05,0x1f,
0x11,0xa2,0x14,0x0a,0xa1,0x30,0x66,0x20,0x60,0x60,
0x0a,0x81,0xb3,0xf0,0x07,0xc0,0x0a,0xa1,0x33,0x03,
0x02,0x33,0x00,0x0b,0x20,0x31,0xd1,0x10,0xa0,0x80,
0x14,0x20,0x13,0x47,0xd0,0xf8,0x41,0x27,0x35,0x45,
0x4e,0x88,0x01,0xf8,0x0d,0x28,0x40,0xc2,0x51,0x0b,
0xf9,0x85,0x08,0x0d,0x28,0x41,0xe9,0x85,0xf4,0xc2,
0x78,0x0f,0x28,0x48,0xf1,0x0d,0xc0,0x21,0x1e,0x0f,
0x28,0x49,0xe2,0x15,0xc1,0x42,0x3c,0x0d,0x28,0x41,
0xf9,0x81,0xf4,0xc0,0x7c,0x0d,0x28,0x41,0xf9,0x81,
0xf4,0xc0,0x80,0x0f,0x28,0x49,0xf2,0x0c,0x40,0x4e,
0x98,0x27,0xc0,0x0f,0x28,0x4c,0xc1,0x5f,0xa8,0x28,
0x20,0x07,0x20,0x23,0xea,0x70,0x0b,0x28,0x38,0xf6,
0x28,0x91,0x80,0x0f,0x28,0x4c,0x41,0x42,0x44,0x58,
0x44,0x42,0x41,0x41,0x0b,0x28,0x3e,0xc1,0x03,0xc0,
0x11,0x28,0x51,0xda,0xa2,0x66,0x05,0x02,0x0f,0x28,
0x49,0x0c,0x51,0x99,0x31,0x15,0x08,0x11,0x28,0x50,
0xf0,0x85,0x70,0x24,0x21,0xe0,0x0d,0x28,0x41,0xe9,
0x85,0xf4,0xc0,0x80,0x13,0x28,0x58,0xf0,0x42,0x54,
0x09,0x0a,0x21,0x07,0xb0,0x11,0x28,0x51,0xf2,0x60,
0x97,0x93,0x04,0x83,0x0f,0x28,0x49,0xf2,0x0a,0x01,
0xf4,0x01,0x88,0x27,0xc0,0x0f,0x28,0x4b,0xfe,0x88,
0x08,0x0f,0x28,0x4e,0xc1,0x22,0x1c,0x0f,0x28,0x4d,
0xc1,0x84,0x42,0x81,0x00,0x11,0x28,0x55,0x40,0xd4,
0x49,0xd8,0x0d,0x28,0x44,0x42,0x48,0x61,0x29,0x85,
0x08,0x0f,0x28,0x4c,0xc1,0x22,0x14,0x91,0x01,0x00,
0x0d,0x28,0x43,0xe0,0x20,0x82,0x08,0x21,0x10,0x1f,
0x07,0x67,0x21,0xec,0x88,0x60,0x0b,0x20,0x34,0x42,
0x11,0x04,0x81,0x02,0x07,0x67,0x23,0x69,0x82,0xc0,
0x0a,0x63,0x30,0x85,0x22,0x0e,0x27,0x43,0xf8,0x04,
0x4b,0xa2,0x20,0x0c,0xc8,0x41,0xca,0x88,0xe8,0x0b,
0x28,0x3c,0xc1,0xea,0x89,0xc0,0x0a,0xc8,0x39,0xc8,
0xc4,0x11,0x38,0x0b,0x28,0x3c,0x84,0xfa,0x89,0xc0,
0x0a,0xc8,0x39,0xc8,0xbc,0x82,0x27,0x00,0x0d,0x66,
0xb8,0x61,0x22,0x0e,0x59,0x0a,0x08,0x00,0x0b,0x2e,
0xb9,0xd3,0x13,0xe0,0x28,0x9c,0x0b,0x28,0x3c,0xc1,
0xea,0x8a,0x20,0x07,0x20,0x22,0x90,0x5a,0x20,0x09,
0x9e,0xa1,0x44,0x0d,0x25,0x10,0x0b,0x28,0x3c,0xc1,
0x14,0x9c,0x49,0x14,0x40,0x07,0x28,0x2e,0xc5,0x20,
0x10,0xc8,0x51,0xda,0xa2,0x51,0x20,0x0a,0xc8,0x39,
0xd5,0x14,0x40,0x0a,0xc8,0x39,0xd5,0x13,0x80,0x0b,
0x2e,0xb9,0xd5,0x17,0xa2,0x08,0x00,0x0b,0x2e,0xb9,
0xd5,0x13,0xe0,0x20,0x80,0x08,0xc8,0x32,0xd9,0x30,
0x80,0x0a,0xc8,0x39,0xc8,0x1c,0x0a,0x27,0x00,0x09,
0x00,0x2c,0x23,0xe9,0x06,0x0a,0xc8,0x3d,0x45,0x33,
0x40,0x0a,0xc8,0x3c,0xc6,0x14,0x20,0x10,0xc8,0x55,
0xc4,0x9d,0x80,0x0a,0xc8,0x3c,0x44,0xe8,0x8a,0x20,
0x0b,0x2e,0xbd,0x44,0xf8,0x0a,0x27,0x00,0x0a,0xc8,
0x3b,0xc0,0x84,0x21,0x0f,0x80,0x07,0x67,0x20,0xd2,
0x4a,0x42,0x03,0xae,0x9e,0xee,0x80,0x07,0x67,0x22,
0x52,0x1a,0x48,0x0c,0x42,0x39,0x94,0xc0 };
/* font data size: 688 bytes */

static const unsigned char rainyhearts_index[] = {
0x00,0x00,0x30,0x20,0x0d,0x05,0xc2,0x30,0xc4,0x3c,
0x10,0x04,0x61,0x30,0x53,0x16,0x45,0xd1,0x84,0x64,
0x1b,0x07,0x21,0xdc,0x80,0x22,0x49,0x02,0x60,0xa0,
0x2a,0x0b,0x02,0xe0,0xbc,0x30,0x4c,0x83,0x38,0xd5,
0x37,0x8e,0xa3,0xcc,0xfb,0x40,0xd0,0xb4,0x4d,0x1b,
0x49,0x52,0xd4,0xc9,0x39,0x51,0x14,0xa5,0x49,0x5b,
0x59,0x16,0xc5,0xdd,0x80,0x62,0xd9,0x16,0x5d,0x9f,
0x69,0x9a,0xf6,0xe1,0xc2,0x72,0x1d,0x07,0x59,0xdb,
0x77,0xde,0x37,0xa5,0xf0,0x7d,0xdf,0xe8,0x1a,0x10,
0x86,0x21,0xf8,0x96,0x2c,0x8d,0x63,0xa9,0x06,0x47,
0x93,0x65,0x59,0x76,0x63,0x9a,0xe7,0x19,0xde,0x7d,
0xa0,0xe8,0xaa,0x4a,0x9a,0xa8,0x2a,0x5a,0xac };
/* font index size: 119 bytes */

const craft::packedbdf_t rainyhearts = {
	rainyhearts_index,
	0,
	rainyhearts_data,
	1,
	0,
	32,
	126,
	0,
	0,
	10,
	4,
	4,
	2,
	4,
	4,
	16,
	9
};
