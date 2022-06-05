#pragma once

#include "display/PackedBDF.h"

static const unsigned char tama_data[] = {
0x04,0x40,0x90,0x06,0x40,0x2c,0x8a,0x0c,0x87,0x45,
0x50,0x1e,0x40,0x88,0x44,0xff,0x28,0x9f,0xc8,0x88,
0x80,0x1e,0x40,0x80,0x83,0xe4,0x94,0x83,0xe0,0x94,
0x93,0xe0,0x80,0x1d,0xc1,0x82,0x15,0x22,0x40,0x81,
0x22,0x54,0x20,0x1e,0x40,0x81,0xc2,0x22,0x01,0xe2,
0x04,0x78,0x82,0x7c,0x04,0xc6,0x28,0xa0,0x0e,0x40,
0x41,0x2b,0x84,0x20,0x0e,0x40,0x44,0x2b,0x24,0x80,
0x1d,0xc1,0x84,0x92,0xa1,0xc7,0xf1,0xc2,0xa4,0x90,
0x1d,0xc1,0x89,0x10,0xff,0x02,0x02,0x00,0x0c,0xce,
0x46,0x12,0x10,0x44,0x57,0x80,0x08,0x80,0x36,0xc0,
0x1d,0xc1,0x80,0x10,0x20,0x40,0x81,0x02,0x04,0x00,
0x1e,0x40,0x83,0xed,0x82,0x7c,0x16,0x40,0x63,0x34,
0x8f,0x80,0x1e,0x40,0x83,0xe8,0x82,0x02,0x7d,0x30,
0x1f,0xc0,0x1e,0x40,0x87,0xe9,0x02,0x7d,0x20,0x5f,
0x80,0x1e,0x40,0x8a,0x84,0xff,0x20,0x80,0x80,0x1e,
0x40,0x87,0xf9,0x80,0xfd,0x20,0x5f,0x80,0x1e,0x40,
0x83,0xe9,0x80,0xfd,0x30,0x4f,0x80,0x1e,0x40,0x87,
0xf9,0x03,0x00,0xa0,0x20,0x20,0x1e,0x40,0x83,0xe9,
0x82,0x7d,0x30,0x4f,0x80,0x1e,0x40,0x83,0xe9,0x82,
0x7f,0x20,0x4f,0x80,0x05,0x03,0x26,0x08,0x09,0x42,
0x33,0x01,0x40,0x11,0xc1,0x50,0x88,0x88,0x20,0x82,
0x0d,0x03,0x47,0x80,0xe0,0x11,0xc1,0x54,0x10,0x41,
0x11,0x10,0x1e,0x40,0x83,0xe8,0x82,0x02,0x0d,0x02,
0x00,0x02,0x00,0x1e,0x40,0x83,0xe4,0x14,0xd9,0xaa,
0x9e,0x80,0x7e,0x1e,0x40,0x83,0xea,0x82,0xff,0x10,
0x50,0x40,0x1e,0x40,0x87,0xe9,0x82,0xfd,0x30,0x5f,
0x80,0x1e,0x40,0x83,0xe4,0x1b,0x80,0x82,0x7c,0x1e,
0x40,0x87,0xc4,0x2b,0x82,0x84,0xf8,0x1e,0x40,0x87,
0xf9,0x80,0xfd,0x30,0x1f,0xc0,0x1e,0x40,0x87,0xf9,
0x80,0xfd,0x30,0x10,0x00,0x1e,0x40,0x83,0xe4,0x19,
0x80,0x9f,0x10,0x4f,0x80,0x1e,0x40,0x8a,0x82,0xff,
0x30,0x50,0x40,0x06,0x40,0x2d,0xa8,0x1e,0x40,0x87,
0xfc,0x08,0x88,0x70,0x1e,0x40,0x89,0x82,0x84,0xf8,
0x85,0x10,0x50,0x40,0x1e,0x40,0x8d,0x80,0x80,0xfe,
0x1e,0x40,0x83,0x6d,0x92,0x92,0x1e,0x40,0x89,0x82,
0xc2,0xba,0x87,0x10,0x50,0x40,0x1e,0x40,0x83,0xed,
0x82,0x7c,0x1e,0x40,0x87,0xe9,0x82,0xfd,0x30,0x10,
0x00,0x1e,0x40,0x83,0xea,0x82,0x92,0x8a,0x84,0x7a,
0x1e,0x40,0x87,0xe9,0x82,0xfd,0x31,0x10,0xc0,0x1e,
0x40,0x83,0xe4,0x18,0x80,0x7d,0x00,0x50,0x4f,0x80,
0x1e,0x40,0x87,0xfd,0x10,0x10,0x1e,0x40,0x8d,0x82,
0x82,0x7c,0x1e,0x40,0x8c,0x82,0x44,0x28,0x10,0x1e,
0x40,0x8d,0x92,0x92,0x6c,0x1e,0x40,0x89,0x82,0x6c,
0x10,0x6d,0x10,0x50,0x40,0x1e,0x40,0x8a,0x82,0x7d,
0x22,0x02,0x00,0x1e,0x40,0x87,0xf9,0x04,0x39,0x28,
0x1f,0xc0,0x0a,0x40,0x37,0xb3,0x1d,0xc1,0x84,0x02,
0x01,0x00,0x80,0x40,0x20,0x10,0x0a,0x40,0x37,0xab,
0x10,0x87,0x53,0x24,0x0c,0x40,0x47,0x0c,0xc6,0x44,
0x21,0x1d,0x40,0x83,0xf9,0x82,0x7e,0x1e,0x40,0x8a,
0x80,0xfd,0x30,0x5f,0x80,0x1d,0x40,0x83,0xf9,0x80,
0x7e,0x1e,0x40,0x8a,0x02,0x7f,0x30,0x4f,0xc0,0x1d,
0x40,0x83,0xe4,0x17,0xe4,0x03,0xf0,0x16,0x40,0x60,
0xe4,0x8f,0xc9,0x04,0x1e,0x0d,0x83,0xf9,0x82,0x7f,
0x00,0x4f,0x80,0x1e,0x40,0x8a,0x80,0xfd,0x30,0x50,
0x40,0x05,0xc0,0x24,0xaa,0x0e,0x8d,0x41,0x0d,0x2e,
0x1e,0x40,0x8a,0x81,0x10,0x5f,0x90,0x50,0x40,0x06,
0x40,0x2d,0xa8,0x1d,0x40,0x83,0x69,0x92,0x92,0x1d,
0x40,0x87,0xe9,0x82,0x82,0x1d,0x40,0x83,0xe9,0x82,
0x7c,0x1e,0x0d,0x87,0xe9,0x82,0xfd,0x10,0x10,0x00,
0x1e,0x0d,0x83,0xf9,0x82,0x7f,0x00,0x40,0x40,0x11,
0x40,0x55,0xb2,0x21,0x00,0x1d,0x40,0x83,0xf4,0x03,
0xe0,0x17,0xe0,0x15,0xc0,0x68,0x23,0xf2,0x40,0xc0,
0x1d,0x40,0x8a,0x82,0x7c,0x1d,0x40,0x88,0x82,0x44,
0x28,0x10,0x1d,0x40,0x8a,0x92,0x6c,0x1d,0x40,0x86,
0x31,0x40,0x81,0x46,0x30,0x1e,0x0d,0x8a,0x82,0x7f,
0x00,0x4f,0x80,0x1d,0x40,0x87,0xf0,0x21,0xc2,0x07,
0xf0,0x0e,0x40,0x41,0x94,0x92,0x84,0x06,0x40,0x2d,
0xa8,0x0e,0x40,0x44,0x94,0x32,0x90,0x14,0x87,0x62,
0xd4 };
/* font data size: 73682 bytes */

static const unsigned char tama_index[] = {
0x8e,0x94,0xc7,0x4b,0x23,0xa6,0x11,0xd3,0x48,0xe9,
0xf4,0x75,0x2a,0x3a,0xa9,0x1d,0x5f,0x8e,0xb1,0xc7,
0x5a,0x63,0xad,0xf1,0xd7,0x98,0xec,0x0c,0x76,0x16,
0x3b,0x13,0x1d,0x8d,0x8e,0xcb,0xc7,0x67,0x63,0xb4,
0x71,0xda,0xd8,0xed,0xb4,0x76,0xfa,0x3b,0x8f,0x1d,
0xd0,0x8e,0xec,0xc7,0x78,0xa3,0xbd,0x71,0xde,0xf8,
0xef,0xa4,0x77,0xee,0x3c,0x01,0x1e,0x07,0x8f,0x09,
0x47,0x87,0x23,0xc4,0xb1,0xe2,0xe8,0xf1,0xb4,0x78,
0xfa,0x3c,0x8f,0x1e,0x50,0x8f,0x2d,0x47,0x98,0xa3,
0xcc,0xd1,0xe6,0xd8,0xf3,0xbc,0x79,0xf6,0x3d,0x07,
0x1e,0x8d,0x8f,0x49,0xc7,0xa7,0x23,0xd4,0xb1,0xea,
0xe8,0xf5,0xcc,0x7a,0xfe,0x3d,0x8b,0x1e,0xcc,0x8f,
0x69,0x47,0xb7,0x23,0xdc,0x91,0xee,0xd8,0xf7,0x8c,
0x7b,0xee,0x3d,0xff,0x1f,0x03,0x8f,0x83,0x47,0xc2,
0xa3,0xe2,0x11,0xf1,0x88,0xf8,0xf4,0x7c,0x9a,0x3e,
0x5d,0x1f,0x35,0x8f,0x9f,0x47,0xd1,0xa3,0xe9,0x51,
0xf4,0xf8,0xfa,0xc4,0x7d,0x72,0x3e,0xc5,0x1f,0x68,
0x8f,0xb7,0x47,0xdd,0xe3,0xf0,0x11,0xf8,0x68,0xfc,
0x74,0x7e,0x56,0x3f,0x35,0x1f,0xa1,0x8f,0xd3,0x47,
0xeb,0xa3,0xf6,0xd1,0xfb,0xe8,0xfe,0x24,0x7f,0x22,
0x3f,0x9c };
/* font index size: 202 bytes */

const craft::packedbdf_t tama = {
	tama_index,
	0,
	tama_data,
	1,
	0,
	32,
	126,
	0,
	0,
	17,
	3,
	4,
	2,
	4,
	4,
	17,
	9
};