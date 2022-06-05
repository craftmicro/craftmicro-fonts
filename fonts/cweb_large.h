#pragma once

#include "display/PackedBDF.h"

static const unsigned char cweb_large_data[] = {
0x04,0x40,0x30,0x05,0x90,0x3a,0x88,0x0c,0x94,0x55,
0x50,0x1d,0x51,0x90,0xa3,0xf1,0x47,0xe2,0x80,0x0e,
0x1f,0x52,0x76,0x96,0xe4,0x19,0x90,0x87,0x2a,0x9a,
0x0b,0x2a,0x9c,0x15,0x90,0x77,0x14,0x25,0x75,0x1c,
0x04,0x94,0x35,0x0a,0x1f,0x43,0x91,0x0a,0x1f,0x45,
0x8a,0x0c,0xd3,0x55,0x25,0x0c,0xd1,0x52,0x72,0x04,
0x9f,0x35,0x08,0x52,0x56,0x04,0x50,0x34,0x0d,0xd0,
0x58,0x32,0x91,0x00,0x0d,0x90,0x53,0xaa,0xc0,0x09,
0x90,0x47,0x49,0x0d,0x90,0x57,0x51,0x24,0x70,0x0d,
0x90,0x57,0x13,0x15,0x70,0x11,0x90,0x61,0x19,0x4f,
0x10,0x80,0x0d,0x90,0x57,0x47,0x15,0x70,0x0d,0x90,
0x53,0x47,0x8a,0xe0,0x0d,0x90,0x57,0x92,0x44,0x0d,
0x90,0x57,0x52,0x8a,0xe0,0x0d,0x90,0x57,0x8a,0x62,
0xc0,0x05,0x50,0x36,0x48,0x05,0x9f,0x36,0x4a,0x0d,
0x50,0x51,0x24,0x21,0x08,0xd1,0x56,0x18,0x0d,0x50,
0x54,0x21,0x24,0x0d,0x90,0x57,0x51,0x20,0x20,0x1e,
0x1f,0x93,0xe4,0x15,0xd4,0x55,0x55,0xe4,0x03,0xe0,
0x0d,0x90,0x57,0x57,0x8a,0xa0,0x0d,0x90,0x56,0x56,
0x8a,0xc0,0x0d,0x90,0x57,0x58,0x8a,0xe0,0x0d,0x90,
0x57,0xaa,0xe0,0x09,0x90,0x56,0x9c,0x4c,0x09,0x90,
0x56,0x9c,0x48,0x0d,0x90,0x57,0x47,0x8a,0xe0,0x0d,
0x90,0x58,0xaf,0x15,0x40,0x05,0x90,0x3b,0xa0,0x0d,
0x90,0x5a,0x2a,0xe0,0x11,0x90,0x64,0xaa,0x31,0x49,
0x09,0x90,0x5b,0x98,0x15,0x90,0x74,0x5b,0x56,0x22,
0x88,0x11,0x90,0x64,0xb5,0x71,0x29,0x0d,0x90,0x57,
0xaa,0xe0,0x0d,0x90,0x57,0x57,0x88,0x80,0x0d,0xdf,
0x57,0xaa,0xe2,0x0d,0x90,0x57,0x56,0x8a,0xa0,0x0d,
0x90,0x57,0x48,0xa2,0xe0,0x0d,0x90,0x57,0xa4,0x40,
0x0d,0x90,0x5b,0xae,0x0d,0x90,0x5b,0xac,0x15,0x90,
0x7b,0xab,0xc0,0x0d,0x90,0x58,0xa5,0x15,0x40,0x0d,
0x90,0x58,0xb2,0x88,0x0d,0x90,0x57,0x18,0x48,0xe0,
0x0a,0x1f,0x47,0x93,0x0d,0xd0,0x58,0x92,0x84,0x40,
0x0a,0x1f,0x47,0x8b,0x0c,0x94,0x52,0x50,0x14,0x5f,
0x77,0xc0,0x08,0x95,0x44,0x40,0x0d,0x50,0x57,0x17,
0x57,0x0d,0x90,0x54,0x79,0xae,0x0d,0x50,0x57,0x54,
0x57,0x0d,0x90,0x51,0x79,0xae,0x0d,0x50,0x57,0x57,
0x47,0x0d,0x90,0x63,0x27,0x84,0x40,0x0d,0xde,0x57,
0x9a,0xe2,0xe0,0x0d,0x90,0x54,0x79,0xaa,0x05,0x90,
0x34,0x9a,0x09,0xdf,0x42,0x29,0x40,0x0d,0x90,0x54,
0x56,0x46,0x50,0x05,0x90,0x3b,0xa0,0x15,0x50,0x77,
0xe6,0xaa,0x80,0x0d,0x50,0x57,0x9a,0xa0,0x0d,0x50,
0x57,0x9a,0xe0,0x0d,0x9f,0x57,0x9a,0xe8,0x0d,0x9f,
0x57,0x9a,0xe2,0x09,0x50,0x57,0x32,0x0d,0x50,0x57,
0x40,0x17,0x0d,0x90,0x52,0x79,0x46,0x0d,0x50,0x5a,
0xae,0x0d,0x50,0x5a,0xac,0x15,0x50,0x7a,0xab,0xc0,
0x0d,0x50,0x58,0xa4,0xaa,0x0d,0xde,0x5a,0xae,0x2e,
0x0d,0x50,0x57,0x12,0x47,0x0e,0x1f,0x53,0x94,0xd0,
0x8c,0x06,0x1f,0x3d,0xa0,0x0e,0x1f,0x56,0x94,0x70,
0x98,0x10,0x93,0x62,0xbc };
/* font data size: 20979 bytes */

static const unsigned char cweb_large_index[] = {
0xa0,0x1d,0x40,0x46,0x80,0xad,0x01,0x9a,0x04,0x34,
0x09,0xe8,0x17,0xd0,0x36,0xa0,0x73,0x40,0xf6,0x82,
0x0d,0x04,0x5a,0x09,0x34,0x13,0x28,0x27,0xd0,0x52,
0xa0,0xb1,0x41,0x76,0x83,0x0d,0x06,0x7a,0x0d,0xb4,
0x1d,0x28,0x3d,0x50,0x80,0xa1,0x0b,0x42,0x2e,0x84,
0x8d,0x09,0x5a,0x13,0x34,0x27,0xa8,0x51,0x50,0xa7,
0xa1,0x5b,0x42,0xe2,0x85,0xf5,0x0c,0x4a,0x19,0x54,
0x33,0xe8,0x6a,0x50,0xd9,0xa1,0xbf,0x43,0x96,0x87,
0x4d,0x0e,0xea,0x1e,0x94,0x3e,0x28,0x7f,0xd1,0x05,
0xa2,0x15,0x44,0x42,0x88,0xad,0x11,0xba,0x24,0x34,
0x49,0xa8,0x95,0x51,0x2e,0xa2,0x67,0x44,0xe6,0x89,
0xf5,0x14,0x4a,0x29,0x14,0x53,0xa8,0xa9,0x51,0x56,
0xa2,0xb5,0x45,0x7a,0x8b,0x1d,0x16,0x8a,0x2d,0xb4,
0x5c,0xa8,0xbb,0xd1,0x7d,0xa3,0x07,0x46,0x22,0x8c,
0x65,0x19,0x1a,0x32,0xf4,0x66,0xe8,0xd0,0xd1,0xa6,
0xa3,0x57,0x46,0xc2,0x8d,0xad,0x1b,0x9a,0x37,0xd4,
0x70,0xe8,0xe3,0xd1,0xcb,0xa3,0xa1,0x47,0x56,0x8e,
0xd5,0x1d,0xfa,0x3c,0xb4,0x7a,0x68,0xf7,0x80 };
/* font index size: 179 bytes */

const craft::packedbdf_t cweb_large = {
	cweb_large_index,
	0,
	cweb_large_data,
	1,
	0,
	32,
	126,
	0,
	0,
	15,
	3,
	4,
	2,
	4,
	4,
	13,
	6
};
