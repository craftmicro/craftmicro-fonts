#pragma once

#include "display/PackedBDF.h"

static const unsigned char plopdump_outline_data[] = {
0x02,0x20,0x28,0x09,0x5f,0x99,0xdb,0x32,0xb6,0xa5,
0x6e,0x0c,0xba,0x29,0xf6,0xa8,0x55,0xbe,0x13,0x5f,
0xc0,0xfc,0x6d,0x32,0x68,0x0c,0x64,0xd0,0x16,0x4c,
0xb6,0x3f,0x00,0x13,0x5f,0xc1,0xfc,0xc1,0xa6,0x29,
0x2b,0x0e,0xe1,0xa9,0x28,0xcb,0x06,0x7f,0x00,0x11,
0x38,0x39,0xdd,0xba,0x99,0x49,0xb9,0xd9,0x29,0x95,
0xdb,0xb8,0x13,0x5f,0xc1,0xf0,0xc6,0x24,0x88,0x7b,
0x1a,0x85,0xa4,0xc8,0x1b,0x22,0x7f,0x80,0x08,0xba,
0x19,0xda,0x95,0xb8,0x0b,0x9e,0xa0,0xe6,0xb2,0x9d,
0x49,0x36,0x4d,0x1c,0x0b,0x9e,0xa3,0x8b,0x26,0xcd,
0x25,0x94,0xd6,0x70,0x0c,0xd9,0xa9,0xf6,0xa8,0xd8,
0xa9,0x7e,0x11,0x5f,0xb8,0x70,0x68,0x24,0x33,0xb0,
0x50,0x6e,0x61,0x20,0xb0,0x70,0x08,0xde,0x99,0xdb,
0x12,0xb7,0x00,0x0c,0x99,0x29,0xf6,0x28,0xdf,0x00,
0x08,0x9f,0x9b,0xe2,0x5e,0x0f,0x18,0x30,0x38,0x68,
0xc9,0x9b,0x32,0x62,0xc3,0x80,0x11,0x5f,0xb8,0xf0,
0xcc,0xc3,0x58,0xae,0x53,0xa8,0xd6,0x19,0x98,0x78,
0x0b,0x5f,0xa0,0xe6,0xb2,0x8b,0x32,0x92,0xce,0x0f,
0x5f,0xb1,0xf3,0x1a,0x4a,0xcb,0xc9,0x9b,0x3a,0x6a,
0x1b,0xf0,0x0f,0x5f,0xb1,0xf3,0x1a,0x4a,0xcb,0x99,
0x8b,0x4a,0x4b,0x19,0xf0,0x0f,0x5f,0xb1,0xfb,0x4c,
0x49,0x41,0x79,0x81,0x21,0x61,0xc0,0x0f,0x5f,0xb1,
0xfb,0x0a,0x5a,0x72,0x1c,0x79,0x59,0x63,0x3e,0x0f,
0x5f,0xb0,0xf1,0x9b,0x4a,0x6a,0x3c,0xc9,0x63,0x3e,
0x0f,0x5f,0xb3,0xfa,0x0b,0x49,0xc8,0x99,0x91,0x31,
0x21,0x61,0xc0,0x0f,0x5f,0xb0,0xf1,0x9b,0x4a,0x4b,
0x1a,0x0a,0x4a,0x5b,0x31,0xe0,0x0f,0x5f,0xb1,0xf3,
0x1c,0xc9,0x71,0x59,0x4b,0x66,0x3c,0x08,0xff,0x9b,
0xe2,0x5f,0x12,0xf0,0x09,0x3e,0x9b,0xe2,0x5e,0xd8,
0x95,0xb8,0x0d,0x18,0x28,0xf3,0x2c,0xd3,0x23,0x62,
0x64,0x78,0x0e,0xf8,0x31,0xfb,0x0a,0x1b,0xfb,0x0a,
0x1b,0xf0,0x0d,0x18,0x2b,0xc4,0xc8,0xd8,0x99,0x66,
0x99,0xe0,0x11,0x5f,0xb9,0xf9,0x86,0x99,0x5c,0xbc,
0xc4,0xc3,0xc8,0x24,0x1e,0x00,0x11,0x5f,0xb8,0xfc,
0xc2,0xc9,0x4c,0xa0,0x66,0x65,0x76,0xee,0x13,0x5f,
0xc1,0xf8,0xc3,0x26,0x48,0x92,0x47,0x33,0x95,0x0d,
0xfe,0x11,0x5f,0xb8,0xfc,0xc2,0xc9,0x4e,0xc4,0xba,
0x75,0x12,0xc3,0x3f,0x00,0x11,0x5f,0xb9,0xf1,0x8c,
0x93,0xb9,0x95,0x1b,0xf8,0x11,0x5f,0xb9,0xfd,0x82,
0x9b,0x4f,0x21,0x13,0xe9,0xd4,0xca,0x0d,0xfc,0x0f,
0x5f,0xb1,0xfb,0x0a,0x5a,0x72,0x12,0x74,0x48,0x58,
0x70,0x13,0x5f,0xc0,0xfc,0x61,0x33,0x49,0xfa,0x43,
0x13,0x94,0x65,0x83,0x3f,0x80,0x11,0x5f,0xb9,0xdd,
0xbb,0x13,0x28,0x19,0x99,0x5d,0xbb,0x80,0x09,0x5f,
0x99,0xdb,0x92,0xb7,0x00,0x0f,0x5f,0xb3,0xfa,0x0b,
0x49,0xcc,0x09,0x79,0x49,0x63,0x3e,0x11,0x5f,0xb9,
0xfd,0xb2,0x93,0x88,0x68,0x92,0x49,0xae,0x5d,0xe0,
0x0f,0x5f,0xb1,0xc3,0x45,0x48,0x4f,0x49,0x43,0x7e,
0x15,0x5f,0xc8,0xfc,0x36,0xcc,0x0e,0xe4,0x95,0xb6,
0xff,0x80,0x11,0x5f,0xb9,0xf1,0x8c,0x93,0xb9,0x95,
0xdb,0xb8,0x13,0x5f,0xc0,0xfc,0x61,0xb3,0x29,0xcc,
0x4a,0x53,0x94,0xcd,0x86,0x3f,0x00,0x11,0x5f,0xb9,
0xf9,0x86,0x99,0x49,0xa1,0x93,0x91,0x20,0xb0,0x70,
0x00,0x13,0x7f,0x40,0xfc,0x61,0xb3,0x31,0x39,0x4a,
0x52,0x14,0xcd,0x81,0x3e,0xc0,0xe0,0x11,0x5f,0xb9,
0xf9,0x86,0x99,0x49,0xa1,0xa2,0x49,0x26,0xb9,0x77,
0x80,0x0f,0x5f,0xb1,0xf3,0x1a,0x4a,0x6b,0x3b,0x9a,
0xca,0x4b,0x19,0xf0,0x15,0x5f,0xc9,0xfe,0x60,0x69,
0x25,0xe7,0xd0,0x90,0x16,0x03,0x80,0x11,0x5f,0xb9,
0xdd,0xbb,0x73,0x29,0x16,0x59,0xf8,0x11,0x5f,0xb9,
0xfd,0xb3,0x73,0x2c,0xb3,0x30,0xf0,0x15,0x5f,0xc9,
0xc7,0x69,0xa9,0xe5,0x34,0xd4,0x92,0xcc,0xcf,0xf0,
0x15,0x5f,0xc9,0xef,0x67,0x28,0x4d,0xcb,0x41,0x98,
0x69,0xd9,0x0a,0x73,0x7b,0xc0,0x11,0xbe,0x39,0xdd,
0xbb,0x73,0x28,0x96,0x0c,0x3c,0x90,0xcf,0xc0,0x0f,
0x5f,0xb3,0xfa,0x0b,0x49,0xc9,0x9b,0x32,0x72,0x5a,
0x0b,0xf8,0x0b,0x9e,0xa1,0xec,0xa7,0x72,0x4d,0x14,
0xde,0x0f,0x18,0x33,0x82,0xc2,0x63,0x31,0x98,0xc8,
0x68,0x38,0x0b,0x9e,0xa1,0xec,0xa2,0xcd,0xa5,0x94,
0xde,0x0c,0xba,0x29,0xe6,0x68,0x52,0xbf,0x10,0x9f,
0x39,0xfd,0x82,0x83,0x7f,0x00,0x0c,0xd9,0xa9,0xc6,
0xc8,0xd8,0x99,0x1e,0x0e,0xff,0xb1,0xf1,0x19,0xcb,
0x0a,0x4a,0x1b,0xf0,0x0f,0x5f,0xb1,0xc3,0x42,0x42,
0x7a,0x4a,0x0c,0x49,0x53,0x7e,0x0c,0xff,0xa9,0xf6,
0x29,0x53,0xa5,0x46,0xf8,0x0f,0x5f,0xb0,0x38,0x68,
0x49,0xcb,0x0c,0x49,0x41,0x6b,0x3e,0x0e,0xff,0xb1,
0xfb,0x0a,0x4a,0x1a,0x6b,0x19,0xf0,0x0b,0x5f,0xa1,
0xec,0xc4,0xd1,0x4e,0x24,0xb3,0x80,0x0f,0x5e,0x30,
0xf1,0x9b,0x4c,0x49,0x61,0x39,0x29,0x33,0x1e,0x0f,
0x5f,0xb1,0xc3,0x42,0x42,0x7a,0x4a,0x0c,0x49,0x5b,
0x7e,0x08,0xff,0x99,0xdb,0x32,0xb7,0x00,0x0b,0x56,
0x18,0xe6,0xda,0x59,0x4d,0xe0,0x0f,0x5f,0xb1,0xc3,
0x42,0x42,0x7a,0x4a,0x2a,0x5a,0x1a,0xcb,0xf8,0x09,
0x5f,0x99,0xdb,0x92,0xb7,0x00,0x14,0xff,0xc9,0xff,
0x69,0x28,0x06,0x24,0x95,0xb6,0xff,0x80,0x0e,0xff,
0xb1,0xfb,0x4a,0x0c,0x49,0x5b,0x7e,0x0e,0xff,0xb0,
0xf1,0x9b,0x4c,0x49,0x63,0x3e,0x0f,0x5e,0x31,0xf3,
0x1c,0x49,0x41,0x4b,0x4e,0x48,0x58,0x70,0x0f,0x5e,
0x31,0xfb,0x2c,0xc9,0x61,0x39,0x09,0x0b,0x0e,0x0a,
0xff,0xa1,0xec,0xa7,0x12,0x59,0xc0,0x0c,0xff,0xa9,
0xf6,0x28,0xd9,0xb1,0x46,0xf8,0x0b,0x5f,0xa1,0xcd,
0x24,0x9a,0x31,0x34,0x53,0x78,0x0e,0xff,0xb1,0xfb,
0x6c,0x49,0x41,0x4b,0x7e,0x0e,0xff,0xb1,0xfb,0x6c,
0x49,0x63,0x36,0x1c,0x14,0xff,0xc9,0xff,0x6d,0xb1,
0x24,0xa2,0x36,0xec,0x77,0x00,0x0e,0xff,0xb3,0xfa,
0x4b,0x39,0x13,0x9a,0x4b,0xf8,0x0f,0x5e,0x31,0xfb,
0x6d,0x49,0x61,0x73,0x46,0x7c,0x0e,0xff,0xb1,0xfb,
0x0a,0x1b,0xbb,0x0a,0x1b,0xf0,0x0d,0x9e,0xa8,0xf3,
0x24,0xc9,0x36,0x58,0xda,0x12,0x26,0x64,0x78,0x09,
0x9e,0x99,0xdb,0xb2,0x95,0xb8,0x0d,0x9e,0xab,0xc4,
0xcc,0x89,0x1b,0x1a,0x6e,0x12,0x64,0x99,0xe0,0x10,
0xb8,0xb9,0xf1,0x8e,0xa5,0x71,0x8f,0x80 };
/* font data size: 1018 bytes */

static const unsigned char plopdump_outline_index[] = {
0x00,0x00,0x30,0x2c,0x12,0x08,0x43,0x10,0xf8,0x4e,
0x15,0x05,0xe1,0xa0,0x70,0x1f,0x88,0x52,0x30,0x91,
0x27,0x0a,0xa2,0xcc,0xc0,0x33,0x4d,0x93,0x94,0xf0,
0x3f,0x50,0xa4,0x55,0x1c,0x49,0x12,0xe4,0xe1,0x42,
0x54,0x15,0xc5,0xa5,0x77,0x60,0x58,0xf6,0x6d,0xaa,
0x6d,0x9b,0xd7,0x25,0xd6,0x78,0x1e,0xc7,0xda,0x05,
0x84,0xe2,0x38,0xc6,0x3e,0x92,0xe5,0x59,0x7e,0x6c,
0x9f,0x28,0x9a,0x5a,0x9f,0xaa,0xab,0x3a,0xea,0xc2,
0xb2,0xad,0x4b,0x82,0xe9,0xbd,0x6f,0xfc,0x27,0x15,
0xc8,0x72,0x8c,0xc3,0x3d,0xd1,0x35,0x0d,0x67,0x62,
0xdb,0xb7,0x9e,0x07,0x8a,0xe5,0x39,0xde,0x9b,0xb2,
0xef,0x3c,0x6f,0x43,0xdd,0xf9,0x3f,0x10 };
/* font index size: 118 bytes */

const craft::packedbdf_t plopdump_outline = {
	plopdump_outline_index,
	0,
	plopdump_outline_data,
	1,
	0,
	32,
	63,
	65,
	126,
	10,
	4,
	4,
	2,
	4,
	4,
	10,
	9
};
