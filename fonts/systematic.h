#pragma once

#include "display/PackedBDF.h"

static const unsigned char systematic_data[] = {
0x02,0x20,0x38,0x09,0x28,0x29,0xa7,0xe1,0x80,0x63,
0x00,0x06,0x6b,0x24,0x55,0x11,0x28,0x48,0x90,0xcc,
0xff,0x96,0x67,0xf9,0x98,0x48,0x0d,0x6f,0xb9,0x43,
0xf3,0xa1,0xe9,0x2d,0xf0,0xa0,0x0d,0x28,0x3b,0xa5,
0x4f,0x82,0x0c,0x10,0x7c,0xa9,0x70,0x0f,0x28,0x41,
0xe4,0xe6,0x3c,0x67,0x8c,0xc7,0x20,0x02,0x6b,0x14,
0x50,0x07,0x28,0x20,0x99,0x4e,0x23,0x10,0x07,0x28,
0x22,0x31,0x4b,0x26,0x40,0x0c,0xa9,0x39,0x21,0x8f,
0xc6,0x12,0x0c,0xa9,0x3c,0x18,0xfc,0x60,0xc0,0x04,
0x8f,0x1c,0x65,0x00,0x06,0x2a,0x23,0x80,0x04,0x48,
0x1b,0x60,0x09,0x28,0x2c,0x08,0xc4,0x62,0x31,0x08,
0x0d,0x28,0x39,0xed,0xcc,0xf0,0x07,0x28,0x21,0xc7,
0xb6,0x60,0x0d,0x28,0x39,0xe8,0xcc,0x38,0xe3,0x8e,
0x18,0x3f,0x0d,0x28,0x39,0xe8,0xcc,0x18,0xe0,0x71,
0x99,0xe0,0x0f,0x28,0x41,0x24,0xe6,0x3f,0x90,0xc0,
0x80,0x0d,0x28,0x3b,0xf9,0xc0,0xf4,0x86,0xf8,0x0d,
0x28,0x39,0xe8,0xcd,0x83,0xe9,0xcc,0xf0,0x0d,0x28,
0x3b,0xf0,0x61,0xc3,0x0e,0x18,0x70,0xc1,0x80,0x0d,
0x28,0x39,0xe9,0xcc,0xf4,0xe6,0x78,0x0d,0x28,0x39,
0xe9,0xcc,0xf8,0x30,0xc3,0x0c,0x00,0x04,0xe8,0x1c,
0x72,0x36,0x05,0x2f,0x1c,0x72,0x46,0x50,0x0d,0x28,
0x38,0x30,0xc3,0x0c,0x30,0x30,0x30,0x30,0x30,0x0c,
0x69,0xbb,0xf0,0x0f,0xc0,0x0d,0x28,0x3b,0x03,0x03,
0x03,0x03,0x0c,0x30,0xc3,0x00,0x0d,0x28,0x39,0xe8,
0xcc,0x18,0x61,0x80,0x06,0x0c,0x11,0x28,0x49,0xf9,
0x86,0xcf,0x9d,0xb6,0x73,0x00,0xfe,0x0d,0x28,0x39,
0xe9,0xcd,0xfc,0xe6,0x48,0x0d,0x28,0x39,0xe9,0xcd,
0xf4,0xe6,0x78,0x0d,0x28,0x39,0xe8,0xce,0x70,0x8c,
0xcf,0x00,0x0d,0x28,0x39,0xc8,0xda,0xf3,0x3c,0x0d,
0x28,0x39,0xf9,0xc1,0xe4,0xe0,0x7c,0x0d,0x28,0x39,
0xf9,0xc1,0xe4,0xe0,0x40,0x0d,0x28,0x39,0xe8,0xcd,
0x83,0x69,0xcc,0xf0,0x0d,0x28,0x39,0x29,0xcd,0xfc,
0xe6,0x48,0x0d,0x28,0x3b,0xfd,0x31,0xf8,0x0d,0x28,
0x38,0x2b,0x0e,0x33,0x3c,0x0d,0x28,0x39,0x28,0xcd,
0xb3,0xc6,0xd1,0x99,0x20,0x0d,0x28,0x39,0x0d,0xc0,
0xf8,0x0f,0x28,0x41,0x13,0x1b,0xbb,0xfb,0x5c,0xe3,
0x22,0x0d,0x28,0x39,0x26,0x6e,0xdf,0xb7,0x9c,0xc9,
0x00,0x0d,0x28,0x39,0xed,0xcc,0xf0,0x0d,0x28,0x39,
0xe9,0xcd,0xf4,0xe0,0x40,0x0d,0x28,0x39,0xeb,0xcd,
0xbb,0x63,0xe0,0x0d,0x28,0x39,0xe9,0xcd,0xf4,0xe6,
0x48,0x0d,0x28,0x39,0xf9,0xc0,0xf4,0x86,0xf8,0x0d,
0x28,0x3b,0xfd,0x30,0x60,0x0d,0x28,0x39,0x2d,0xcc,
0xf0,0x0d,0x28,0x39,0x2c,0xcc,0xf0,0xc0,0x0f,0x28,
0x41,0x14,0xe3,0x6b,0x7f,0x77,0x63,0x22,0x0d,0x28,
0x39,0x28,0xcc,0xf0,0xc3,0xd1,0x99,0x20,0x0d,0x28,
0x39,0x29,0xcc,0xf4,0x98,0x30,0x0d,0x28,0x3b,0xf8,
0x0c,0x30,0xc3,0x11,0x83,0xf0,0x09,0x28,0x29,0xf7,
0x0e,0x09,0x28,0x2c,0x43,0x08,0x61,0x0c,0x21,0x09,
0x28,0x2b,0xb4,0xdc,0x0a,0x8a,0xb0,0x87,0x36,0x88,
0x0c,0x2f,0xbb,0xf0,0x02,0x6b,0x14,0x50,0x0c,0xa8,
0x39,0xe9,0xcc,0xe8,0x0d,0x28,0x39,0x09,0xc1,0xf4,
0xe6,0x78,0x0c,0xa8,0x39,0xf9,0xc0,0xf8,0x0d,0x28,
0x38,0x29,0x0c,0xfc,0xe6,0x78,0x0c,0xa8,0x39,0xe6,
0x6f,0xd8,0x1f,0x0b,0x28,0x30,0xf2,0xc7,0xa5,0x82,
0x00,0x0c,0xef,0x39,0xe9,0xcc,0xf8,0x37,0xc0,0x0d,
0x28,0x39,0x09,0xc1,0xf4,0xe6,0x48,0x05,0x08,0x1c,
0x62,0xb6,0x07,0x4f,0x24,0x30,0xc6,0xc0,0x0d,0x28,
0x39,0x06,0x6d,0x9a,0x3e,0x9c,0xc9,0x00,0x05,0x28,
0x19,0xdc,0x80,0x0e,0xa8,0x41,0xf4,0x6b,0x63,0x22,
0x0c,0xa8,0x39,0xe9,0xcc,0x90,0x0c,0xa8,0x39,0xe9,
0xcc,0xf0,0x0c,0xef,0x39,0xe9,0xcd,0xf3,0x02,0x00,
0x0c,0xef,0x39,0xe9,0xcc,0xf8,0x30,0x40,0x0c,0xa8,
0x39,0xf9,0xc0,0x80,0x0c,0xa8,0x39,0xf6,0x07,0x81,
0xbe,0x0c,0xc8,0x38,0x87,0xd2,0xc0,0xf0,0x0c,0xa8,
0x39,0x29,0xcc,0xf0,0x0c,0xa8,0x39,0x28,0xcc,0xf0,
0xc0,0x0e,0xa8,0x41,0x13,0x1c,0x6b,0x3e,0x0c,0xa8,
0x3b,0x33,0xc3,0x0f,0x33,0x0c,0xef,0x39,0x29,0xcc,
0xf8,0x37,0xc0,0x0c,0xa8,0x3b,0xf0,0xc3,0x0c,0x3f,
0x0b,0x28,0x30,0x63,0x08,0x63,0x86,0x08,0x30,0x60,
0x05,0x6f,0x1e,0xf3,0xb0,0x0b,0x28,0x33,0x06,0x08,
0x30,0xe3,0x08,0x63,0x00,0x0c,0x69,0xb9,0x95,0xa9,
0x80 };
/* font data size: 711 bytes */

static const unsigned char systematic_index[] = {
0x00,0x00,0x30,0x2c,0x0f,0x06,0x82,0x40,0xbc,0x39,
0x0f,0x44,0x41,0x2c,0x52,0x16,0x45,0xe1,0x88,0x66,
0x1b,0x87,0x41,0xe8,0x84,0x23,0x89,0x72,0x7c,0xa8,
0x2c,0xcb,0xb3,0x14,0xca,0x34,0x0d,0xb3,0x84,0xec,
0x3d,0x90,0x14,0x25,0x11,0x46,0x92,0x14,0xa5,0x31,
0x4e,0x94,0x25,0x21,0x4f,0x56,0x55,0xf5,0xa5,0x73,
0x5e,0x58,0x16,0x25,0x91,0x66,0x59,0xf6,0x95,0xac,
0x6d,0x9c,0x07,0x21,0xd2,0x75,0xdd,0xf7,0x91,0xea,
0x7b,0x9f,0x27,0xe2,0x00,0x81,0xa0,0xe8,0x56,0x1d,
0x89,0x62,0xd8,0xca,0x38,0x90,0xa4,0x79,0x3a,0x54,
0x96,0xa6,0x29,0xaa,0x70,0x9d,0xe7,0xea,0x12,0x8b,
0xa4,0xa9,0x9a,0x86,0xa8,0xac,0xab,0x7b,0x04 };
/* font index size: 119 bytes */

const craft::packedbdf_t systematic = {
	systematic_index,
	0,
	systematic_data,
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
	13,
	9
};
