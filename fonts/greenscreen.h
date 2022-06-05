#pragma once

#include "display/PackedBDF.h"

static const unsigned char greenscreen_data[] = {
0x02,0x20,0x20,0x09,0x24,0x20,0xd3,0xf0,0xc0,0x31,
0x80,0x0c,0x85,0x62,0x73,0x24,0x0f,0x20,0x22,0x1b,
0x3f,0xcb,0x67,0xf3,0x63,0x60,0x0d,0x63,0xe2,0x0c,
0x3f,0x18,0x1e,0x80,0xdf,0x0c,0x18,0x0c,0xe0,0x21,
0x8b,0x30,0xc3,0x0c,0x33,0x46,0x0f,0x20,0x20,0xe2,
0x36,0x1c,0x3e,0xb7,0xb3,0x37,0x1d,0x80,0x06,0x85,
0x62,0x5b,0x00,0x0b,0x24,0x20,0x31,0x8c,0x9c,0x18,
0x30,0x60,0x0b,0x24,0x21,0x83,0x06,0x91,0x8c,0x63,
0x00,0x10,0xa0,0xa0,0xcc,0x3c,0x7f,0x8f,0x0c,0xc0,
0x0c,0xa4,0xa2,0x0c,0x7e,0x30,0x60,0x08,0x67,0xe2,
0x1d,0x80,0x0e,0x21,0x21,0xfc,0x06,0x48,0x21,0xdc,
0x0f,0x00,0x20,0x04,0x0c,0x18,0x30,0x60,0xc1,0x81,
0x00,0x0f,0x20,0x20,0xf9,0x8d,0x9d,0xbd,0xad,0xed,
0xcd,0x8c,0xf8,0x0d,0x20,0x20,0x20,0xc7,0x96,0x63,
0xf0,0x0d,0x20,0x20,0xf4,0x66,0x0c,0x30,0xc3,0x0c,
0xdf,0x80,0x0d,0x20,0x20,0xf3,0x38,0x0c,0x74,0x06,
0xcc,0xf0,0x0f,0x20,0x20,0x18,0x38,0x78,0xd9,0x99,
0xfe,0x03,0x07,0x80,0x0d,0x20,0x21,0xfc,0xe0,0xfa,
0x03,0x66,0x78,0x0d,0x20,0x20,0x71,0x88,0xc1,0xf4,
0xe6,0x78,0x0f,0x20,0x21,0xfe,0x31,0x81,0x83,0x06,
0x41,0x81,0x80,0x0d,0x20,0x20,0xf4,0x66,0xec,0xf3,
0x78,0xcc,0xf0,0x0d,0x20,0x20,0xf4,0xe6,0x7e,0x06,
0x18,0x70,0x06,0xc8,0x62,0x3c,0x07,0x70,0x07,0x0b,
0xe2,0x3c,0x08,0xe6,0xc0,0x0d,0x20,0x20,0x18,0x61,
0x86,0x18,0x18,0x18,0x18,0x18,0x0c,0x64,0xe1,0xf8,
0x07,0xe0,0x0d,0x24,0x21,0x81,0x81,0x81,0x81,0x86,
0x18,0x61,0x80,0x0d,0x20,0x20,0xf3,0x30,0x61,0xa0,
0xc0,0x03,0x06,0x00,0x0f,0x20,0x20,0xfa,0x31,0xce,
0xf8,0xc0,0x7c,0x0d,0x20,0x20,0x61,0xe9,0xcd,0xfc,
0x66,0xcc,0x0f,0x20,0x21,0xfa,0x59,0x9f,0x4b,0x37,
0xe0,0x0f,0x20,0x20,0x78,0xcd,0x8e,0x70,0x31,0x99,
0x8f,0x00,0x0f,0x20,0x21,0xf0,0xda,0xd9,0x9b,0x3e,
0x00,0x0f,0x20,0x21,0xfc,0xc4,0xc0,0xc8,0xf8,0xc8,
0xc0,0xc5,0xfc,0x0f,0x20,0x21,0xfc,0xcc,0xc4,0xc8,
0xf8,0xca,0x18,0x3c,0x00,0x0f,0x20,0x20,0x78,0xcd,
0x8e,0x30,0x33,0xb1,0x99,0x8f,0x80,0x0d,0x20,0x22,
0xb3,0x7f,0x39,0xb3,0x09,0x24,0x21,0xfa,0xcf,0x0f,
0x20,0x20,0x3e,0x83,0x4e,0x63,0xc0,0x0f,0x20,0x21,
0xcc,0xce,0x1b,0x1e,0x43,0x63,0x37,0x30,0x0f,0x20,
0x21,0xe2,0x98,0x18,0xc3,0x37,0xf0,0x0f,0x20,0x21,
0x8d,0xde,0x3f,0xb5,0xce,0x36,0x30,0x0f,0x20,0x22,
0x31,0xb9,0xbd,0xbf,0xb7,0xb3,0xb1,0xb1,0x80,0x0f,
0x20,0x20,0x70,0xda,0xf1,0x9b,0x0e,0x00,0x0f,0x20,
0x21,0xfa,0x59,0x9f,0x4b,0x07,0x80,0x0f,0x43,0xe0,
0x70,0xda,0x71,0xb3,0xb7,0x9f,0x03,0x07,0x80,0x0f,
0x20,0x21,0xfa,0x59,0x9f,0x1b,0x43,0x37,0x30,0x0d,
0x20,0x20,0xf4,0x66,0xc0,0xe0,0x68,0xcc,0xf0,0x0d,
0x20,0x21,0xfa,0xdc,0x30,0xf0,0x0d,0x20,0x23,0x73,
0x66,0x78,0x0d,0x20,0x23,0x73,0x3c,0x30,0x0f,0x20,
0x22,0xb1,0xc6,0xb8,0x6c,0x6c,0x0d,0x20,0x22,0x73,
0x3c,0x30,0xf4,0x66,0xcc,0x0d,0x20,0x22,0xb3,0x3d,
0x26,0x1e,0x0f,0x20,0x21,0xfd,0x9d,0x30,0x30,0x60,
0xc0,0xc5,0x8d,0xfc,0x09,0x28,0x21,0xfb,0x8f,0x0f,
0x00,0x21,0x01,0x80,0xc0,0x60,0x30,0x18,0x0c,0x04,
0x09,0x28,0x21,0xfa,0x6f,0x0e,0x81,0xa0,0x20,0x70,
0xd9,0x8c,0x10,0x23,0xe1,0xfe,0x06,0x69,0xe2,0x31,
0x80,0x0e,0xc0,0x20,0xf0,0x18,0xfa,0x33,0x1d,0x80,
0x0f,0x20,0x21,0xc2,0x18,0x1f,0x53,0x36,0xe0,0x0c,
0xc0,0x20,0xf3,0x38,0xc1,0x99,0xe0,0x0f,0x20,0x20,
0x3a,0x03,0x1f,0x56,0x63,0xb0,0x0c,0xc0,0x20,0xf3,
0x37,0xec,0x19,0x9e,0x0d,0x20,0x20,0x71,0xb8,0x61,
0xf4,0xb0,0xf0,0x0f,0x03,0xa0,0xee,0x73,0x1f,0x03,
0x33,0x1e,0x00,0x0f,0x20,0x21,0xc2,0x18,0x1b,0x1d,
0xcb,0x37,0x30,0x0d,0x24,0x22,0x0c,0x00,0xf2,0x8c,
0x7e,0x0d,0x63,0xa2,0x03,0x00,0x3e,0x83,0x8c,0xcf,
0x00,0x0f,0x20,0x21,0xc2,0x18,0x19,0x9b,0x1e,0x1b,
0x19,0xb9,0x80,0x0d,0x24,0x21,0xe6,0x98,0xfc,0x0e,
0xc0,0x21,0xfa,0xb5,0xb1,0x80,0x0c,0xc0,0x21,0xf5,
0x66,0xcc,0x0c,0xc0,0x20,0xf5,0x66,0x78,0x0f,0x03,
0xa1,0xba,0x99,0x9f,0x18,0x3c,0x00,0x0f,0x03,0xa0,
0xee,0xb3,0x1f,0x03,0x07,0x80,0x0e,0xc0,0x21,0xd8,
0xdc,0xee,0x18,0x3c,0x00,0x0c,0xc0,0x20,0xf3,0x33,
0x01,0x99,0x9e,0x0d,0x00,0x20,0x41,0x87,0xf2,0xc1,
0xb1,0xc0,0x0e,0xc0,0x22,0xf3,0x1d,0x80,0x0c,0xc0,
0x22,0xb3,0x3c,0x30,0x0e,0xc0,0x22,0x31,0xc6,0xb3,
0x63,0x60,0x0e,0xc0,0x21,0x8c,0xda,0x0e,0x1b,0x31,
0x80,0x0f,0x03,0xa2,0x99,0x8f,0x03,0x06,0x3c,0x00,
0x0c,0xc0,0x21,0xfa,0x30,0xc6,0x18,0xbf,0x0d,0x20,
0x20,0x3c,0x18,0x61,0x81,0x88,0x30,0x38,0x05,0x2c,
0x22,0xb1,0x3b,0x0d,0x20,0x21,0xc4,0x18,0x18,0x18,
0x68,0x31,0xc0,0x10,0x61,0xa0,0xe6,0xda,0x67,0x00 };
/* font data size: 810 bytes */

static const unsigned char greenscreen_index[] = {
0x00,0x00,0x30,0x2c,0x10,0x06,0x82,0x50,0xb8,0x3a,
0x0f,0xc4,0x81,0x44,0x5a,0x18,0x46,0x61,0xa8,0x6e,
0x1e,0x48,0x52,0x34,0x98,0x28,0x8a,0xe2,0xdc,0xc0,
0x32,0xcd,0x53,0x78,0xe4,0x3a,0xcf,0x63,0xf1,0x07,
0x44,0x91,0xb4,0x91,0x2d,0x4e,0x14,0x15,0x35,0x59,
0x59,0x56,0xc5,0xc5,0x79,0x61,0x18,0xd6,0x5d,0xa3,
0x6b,0x1b,0x57,0x05,0xcb,0x75,0x5d,0xc7,0x89,0xe8,
0x7c,0x1f,0x98,0x02,0x0c,0x84,0x61,0xc8,0x86,0x28,
0x8b,0x23,0x18,0xea,0x43,0x92,0xe5,0x49,0x72,0x65,
0x9b,0xe7,0x9a,0x06,0x8b,0xa5,0xe9,0xda,0x92,0xaa,
0xac,0x2b,0x9b,0x0a,0xcb,0xb4,0xed,0xcb,0x8a,0xe8,
0xbc,0x2f,0x9c,0x0b,0x0a,0xc5,0x31,0x9c,0x8c };
/* font index size: 119 bytes */

const craft::packedbdf_t greenscreen = {
	greenscreen_index,
	0,
	greenscreen_data,
	1,
	0,
	32,
	126,
	0,
	0,
	10,
	4,
	4,
	3,
	4,
	4,
	12,
	9
};
