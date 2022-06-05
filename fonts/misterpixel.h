#pragma once

#include "display/PackedBDF.h"

static const unsigned char misterpixel_data[] = {
0x01,0x10,0x04,0x00,0x02,0xb0,0x04,0xdd,0x86,0xc0,
0x03,0x40,0xe5,0x9a,0xa0,0x0a,0x90,0x0b,0x81,0x98,
0xff,0xc9,0x98,0xff,0x8c,0xc1,0x98,0x05,0xd3,0xc7,
0x82,0x1f,0x38,0x3a,0x46,0xf0,0x82,0x00,0x0b,0xb3,
0xed,0x00,0x13,0x02,0x48,0x44,0x88,0x31,0x00,0x20,
0x04,0x60,0x89,0x10,0x92,0x06,0x40,0x00,0x09,0xa0,
0x0a,0x1c,0x21,0x90,0x68,0x0c,0x07,0x93,0x34,0xc6,
0x31,0xc7,0x98,0x01,0x40,0xe3,0x9a,0x06,0xe3,0xe8,
0x06,0x18,0x64,0x31,0x58,0x43,0x03,0x03,0x03,0x06,
0xe3,0xe8,0x60,0x60,0x64,0x0d,0x41,0xc0,0xc3,0x0c,
0x30,0x05,0x60,0xa7,0x11,0x58,0x72,0xa2,0x00,0x07,
0x70,0x29,0x91,0x0f,0xf0,0x20,0x20,0x02,0x53,0xa4,
0x8e,0x14,0x05,0x10,0x87,0x7c,0x02,0x20,0x04,0x6c,
0x07,0xc3,0xe8,0x80,0x70,0x1a,0x06,0x41,0x88,0x60,
0xc0,0xc0,0x06,0x90,0x08,0x3d,0xb9,0x9e,0x04,0x90,
0x06,0x19,0xd7,0x66,0x30,0x06,0x90,0x08,0x3d,0x19,
0x83,0x0c,0x30,0xc3,0x07,0xe0,0x06,0xb3,0xc8,0x3d,
0x19,0xc0,0x63,0xa0,0x38,0xcc,0xf0,0x07,0xb3,0xc8,
0x06,0x0e,0x82,0xd0,0x9a,0x23,0x3f,0x83,0x03,0x00,
0x06,0xb3,0xc8,0x3e,0x62,0x30,0x78,0x1a,0x03,0x8c,
0xcf,0x00,0x06,0xb0,0x08,0x3d,0x38,0x3e,0xbc,0xcf,
0x00,0x06,0xb3,0xc8,0x7f,0x01,0xc0,0xd0,0x64,0x30,
0xc1,0x80,0x06,0xb0,0x08,0x3d,0x59,0x9e,0xac,0xcf,
0x00,0x06,0xb3,0xc8,0x3d,0x59,0xb7,0x36,0x0c,0x10,
0x43,0x00,0x02,0x90,0x04,0x8e,0xc6,0xc0,0x02,0xc3,
0xa4,0x8e,0xc8,0xe1,0x40,0x07,0xb3,0xe9,0x03,0x06,
0x0c,0x18,0x30,0x60,0x30,0x18,0x0c,0x06,0x03,0x07,
0x50,0x49,0x7f,0x90,0x0f,0xe0,0x07,0xb3,0xe9,0x60,
0x30,0x18,0x0c,0x06,0x03,0x06,0x0c,0x18,0x30,0x60,
0x06,0xb0,0x08,0x3c,0x8e,0x43,0x0d,0x0c,0x00,0x30,
0x60,0x0a,0xb3,0xec,0x0f,0x02,0x10,0x81,0x27,0x14,
0x12,0x8e,0x62,0x49,0x26,0xc2,0x00,0x3e,0x00,0x07,
0xb0,0x09,0x3e,0xac,0x6f,0xf5,0x8d,0x8c,0x07,0xb0,
0x09,0x7e,0xac,0x6f,0xd5,0x8d,0xf8,0x07,0xb0,0x09,
0x3e,0x8c,0x77,0x82,0x31,0x9f,0x00,0x08,0xb0,0x0a,
0x7e,0x30,0xb7,0x0d,0x84,0xfc,0x06,0xb0,0x08,0x7f,
0x58,0x3e,0xac,0x1f,0x80,0x06,0xb0,0x08,0x7f,0x58,
0x3e,0xac,0x18,0x00,0x08,0xb0,0x0a,0x3f,0x46,0x1c,
0x60,0x31,0xeb,0x0c,0xfa,0x08,0xb0,0x0a,0xbc,0x37,
0xfd,0x61,0xb0,0xc0,0x02,0xb0,0x04,0xde,0x76,0x06,
0xb0,0x08,0xd0,0xe7,0x33,0xc0,0x08,0xb0,0x09,0xac,
0x66,0x23,0xe2,0xb1,0x98,0xe0,0x06,0xb0,0x07,0xdc,
0x27,0x07,0xe0,0x0b,0xb0,0x0d,0x60,0x37,0x07,0x78,
0xf6,0xdb,0x67,0x36,0x23,0xac,0x06,0xc0,0x60,0x09,
0xb0,0x0b,0x8e,0x1b,0xc6,0xd1,0xb6,0x6c,0x9b,0x36,
0xc5,0xb1,0xec,0x3b,0x0e,0x08,0xb0,0x0a,0x3f,0x6e,
0x1c,0x61,0x9f,0x80,0x07,0xb0,0x09,0x7e,0xbc,0x6f,
0xd3,0x81,0x80,0x08,0xe3,0xaa,0x3f,0x6e,0x1c,0x61,
0x9f,0x81,0x00,0x40,0x10,0x08,0xb0,0x09,0x7e,0x56,
0x33,0xf2,0xb1,0x98,0xe0,0x07,0xb0,0x09,0x3e,0x8c,
0x71,0x80,0xfa,0x01,0xc6,0x33,0xe0,0x08,0xbc,0x08,
0x7f,0xe8,0xc4,0x0c,0x06,0x00,0x07,0xb0,0x09,0xdc,
0x71,0x8d,0x9c,0xe4,0x09,0xb0,0x0b,0x9c,0x1c,0xb1,
0xa4,0xd8,0x1c,0x07,0x00,0x0c,0xb0,0x0e,0x9c,0x03,
0xbc,0x63,0x77,0xb9,0xe7,0x86,0x18,0x08,0xb0,0x0a,
0x8c,0x38,0x66,0x1e,0x06,0x07,0x90,0xcc,0xc3,0x61,
0x80,0x08,0xb0,0x0a,0x9c,0x38,0x66,0x1e,0x50,0xc0,
0x60,0x06,0xb0,0x08,0x7f,0x01,0xc0,0xc3,0x21,0x88,
0xc1,0xf8,0x04,0xd3,0xe6,0x3e,0xe5,0x61,0xc0,0x07,
0xc3,0xe8,0x8c,0x10,0xc2,0x0c,0x40,0xc8,0x0c,0x06,
0x06,0x04,0xd3,0xe6,0x76,0x9d,0x1b,0x80,0x09,0xa0,
0x0b,0x80,0x84,0x0a,0x20,0x89,0x08,0x24,0x05,0x01,
0x10,0x13,0xb0,0x7f,0xff,0x80,0x02,0x21,0x42,0x44,
0x06,0x90,0x08,0x3d,0x19,0x83,0x3f,0x39,0x9d,0x06,
0xc0,0x08,0x9c,0x1f,0x6e,0x6b,0x80,0x06,0x90,0x08,
0x3d,0x19,0xce,0x11,0x99,0xe0,0x06,0xc0,0x08,0x90,
0xcd,0xb7,0xbc,0xdb,0x99,0x06,0x90,0x08,0x3d,0x39,
0xbe,0x61,0x19,0x9e,0x05,0xcc,0x05,0x1e,0x18,0xfe,
0xb0,0xc0,0x06,0xc3,0xa8,0x3d,0xb9,0x9f,0x06,0xcc,
0xe0,0x06,0xc0,0x08,0x9c,0x1b,0x3b,0xcc,0xd9,0x80,
0x02,0xc0,0x04,0x8c,0x6e,0xd8,0x04,0xfb,0xa4,0x83,
0x06,0x9c,0x9a,0xcc,0x07,0xc0,0x08,0x9c,0x11,0x99,
0xb1,0xe1,0xb2,0x73,0x33,0x80,0x03,0xc0,0x04,0xdd,
0x58,0xc0,0x0a,0x90,0x0c,0x4c,0xce,0xef,0x33,0x36,
0x66,0x06,0x90,0x08,0x4c,0xef,0x33,0x66,0x06,0x90,
0x08,0x3d,0xb9,0x9e,0x06,0xc3,0xa8,0x4c,0xee,0xf3,
0x76,0xda,0x30,0x60,0x06,0xc3,0xa8,0x3b,0x99,0xb7,
0x37,0x01,0x83,0x06,0x90,0x07,0x4c,0xed,0x9d,0xe0,
0xc0,0x06,0x90,0x08,0x3d,0x19,0xb0,0x3c,0x0e,0x33,
0x3c,0x06,0xbc,0x06,0x86,0x1f,0x5b,0x10,0xd8,0xe0,
0x06,0x90,0x08,0xdc,0xdb,0x99,0x07,0x90,0x09,0xac,
0x72,0xd8,0x70,0x20,0x0a,0x90,0x0c,0x9c,0x0e,0x73,
0x36,0xf6,0x73,0x84,0x20,0x07,0x90,0x09,0x8c,0x70,
0xd8,0x72,0x1b,0x31,0xb1,0x80,0x06,0xc3,0xa8,0xdc,
0xdb,0x9b,0x06,0xcc,0xe0,0x05,0x90,0x07,0x7c,0x38,
0x34,0x32,0x30,0xf8,0x06,0xd3,0xe8,0x06,0x12,0x4c,
0x30,0xc0,0xc4,0x98,0x10,0x18,0x01,0xf3,0xa3,0xde,
0xd0,0x06,0xd3,0xe8,0x60,0x22,0x4c,0x0c,0x0c,0x34,
0x98,0x21,0x80,0x0a,0x40,0x6c,0x18,0x04,0x85,0x09,
0x00,0xc0,0x05,0x10,0x87,0x7c };
/* font data size: 896 bytes */

static const unsigned char misterpixel_index[] = {
0x00,0x00,0x40,0x28,0x0f,0x06,0xc2,0x60,0xe8,0x49,
0x13,0x45,0x91,0x94,0x6d,0x1d,0x47,0xa1,0xf8,0x82,
0x23,0x89,0x42,0x6c,0xa6,0x2c,0x4b,0xe3,0x28,0xd3,
0x37,0x8e,0x73,0xc8,0xf8,0x3f,0xd0,0xd4,0x51,0x22,
0x4b,0x53,0xf5,0x21,0x51,0x56,0xd6,0x45,0xb5,0x76,
0x60,0x58,0xa6,0x3d,0x96,0x68,0x1a,0x76,0xdd,0xc7,
0x74,0x1d,0x97,0x95,0xef,0x7e,0xe0,0x48,0x32,0x17,
0x88,0xe3,0x18,0xee,0x46,0x93,0x65,0x99,0x82,0x6c,
0x9c,0xa7,0x69,0xfe,0x87,0xa4,0x29,0x9a,0x8a,0xaa,
0xac,0xeb,0xcb,0x0a,0xca,0xb5,0xad,0xcb,0x96,0xec,
0xbc,0xaf,0xcc,0x17,0x0d,0xc5,0xf2,0x0c,0x9b,0x2e,
0xce,0x74,0x4d,0x37,0x56,0xd8,0xb6,0x7d,0xcf,0x7c };
/* font index size: 120 bytes */

const craft::packedbdf_t misterpixel = {
	misterpixel_index,
	0,
	misterpixel_data,
	1,
	0,
	32,
	126,
	8208,
	8208,
	10,
	5,
	4,
	2,
	5,
	5,
	16,
	11
};
