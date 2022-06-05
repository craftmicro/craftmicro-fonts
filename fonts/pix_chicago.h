#pragma once

#include "display/PackedBDF.h"

static const unsigned char pix_chicago_data[] = {
0x02,0x20,0x10,0x05,0x20,0x0f,0x30,0xd8,0x06,0x61,
0x92,0x2a,0x80,0x0f,0x00,0x66,0x04,0x8b,0x49,0x27,
0xf2,0x40,0x0b,0x67,0xd8,0x43,0x95,0x51,0xc3,0x87,
0x15,0x53,0x84,0x13,0x20,0x28,0xdc,0x49,0x12,0x83,
0x60,0x10,0x09,0x82,0x91,0x24,0x46,0x11,0x20,0x24,
0xf8,0xcc,0x60,0xc3,0x0b,0x3a,0x33,0x0f,0x00,0x02,
0x61,0x8a,0x28,0x07,0x67,0xd0,0xf7,0x46,0x30,0x07,
0x67,0xd1,0xb5,0xc3,0x60,0x0a,0xc0,0xd8,0x45,0x61,
0xca,0x88,0x0e,0xa0,0x62,0x04,0x3f,0x84,0x04,0x00,
0x04,0x87,0x8e,0x32,0x80,0x0a,0x20,0xd9,0xf0,0x04,
0x40,0x0d,0xb0,0x0b,0x40,0x18,0x19,0x14,0x12,0x50,
0x80,0x0d,0x20,0x1c,0xf3,0x38,0xdd,0xfb,0xb8,0xcc,
0xf0,0x05,0x20,0x0c,0xee,0xc0,0x0d,0x20,0x1c,0xf2,
0x38,0x0c,0x30,0xc3,0x0c,0x1f,0x80,0x0d,0x20,0x1d,
0xf8,0x61,0x87,0xa4,0x34,0x67,0x80,0x0f,0x20,0x20,
0x18,0x38,0x58,0x99,0x99,0xfe,0x03,0x03,0x00,0x0d,
0x20,0x1d,0xfc,0x60,0xfa,0x43,0x46,0x78,0x0d,0x20,
0x1c,0x71,0x86,0x0f,0xab,0x33,0xc0,0x0f,0x20,0x21,
0xfe,0x01,0xc0,0x69,0x18,0x18,0x0d,0x20,0x1c,0xf4,
0xe6,0x32,0x73,0x3c,0x0d,0x20,0x1c,0xf5,0x66,0x7c,
0x18,0x63,0x80,0x04,0xe0,0x0e,0x39,0x1b,0x05,0x27,
0x8e,0x39,0x23,0x28,0x0a,0xe0,0x5c,0x31,0x8c,0x60,
0xc1,0x83,0x0c,0x60,0x9d,0xf8,0x07,0xe0,0x0a,0xe8,
0x5d,0x02,0x04,0x0c,0x42,0x10,0x0d,0x20,0x1c,0xf2,
0x30,0x61,0xa0,0xc0,0x03,0x06,0x00,0x13,0x20,0x28,
0x7c,0x20,0x93,0x99,0xa4,0xa7,0xe4,0x00,0xf8,0x0d,
0x20,0x1c,0xf4,0xe6,0xfe,0x73,0x66,0x0d,0x20,0x1d,
0xf4,0xe6,0xf2,0x73,0x7c,0x0d,0x20,0x1c,0xf3,0x1b,
0xc1,0x89,0xe0,0x0d,0x20,0x1d,0xf6,0xe6,0xf8,0x0b,
0x20,0x19,0xf9,0xc3,0xd3,0x87,0xc0,0x0b,0x20,0x19,
0xf9,0xc3,0xd3,0x86,0x00,0x0d,0x20,0x1c,0xf3,0x18,
0xc2,0xb3,0x3c,0x0d,0x20,0x1e,0xb3,0x7f,0x39,0xb3,
0x05,0x20,0x0f,0x76,0xc0,0x0d,0x20,0x1e,0xc3,0x9c,
0xcf,0x00,0x0d,0x20,0x21,0x8b,0x26,0x93,0xc3,0x46,
0x4c,0x40,0x0b,0x20,0x1b,0x70,0xc3,0xe0,0x15,0x20,
0x2d,0x01,0xb0,0x77,0x1e,0xf7,0xd7,0xda,0x73,0x44,
0x68,0x0d,0x01,0x80,0x0f,0x20,0x21,0x05,0x85,0xc5,
0xe5,0x75,0x3d,0x1d,0x0d,0x04,0x0d,0x20,0x1c,0xf6,
0xe6,0x78,0x0d,0x20,0x1d,0xf4,0xe6,0xfa,0x70,0x60,
0x0d,0x47,0xdc,0xf6,0xe6,0x78,0x18,0x0d,0x20,0x1d,
0xf4,0xe6,0xfa,0x73,0x66,0x0b,0x20,0x18,0xe6,0x58,
0x70,0xe1,0xc3,0x4c,0xe0,0x11,0x20,0x25,0xff,0xa3,
0x01,0x80,0x0d,0x20,0x1f,0x73,0x66,0x78,0x0d,0x20,
0x1f,0x73,0x64,0xf0,0x15,0x20,0x2f,0x73,0x36,0x64,
0xff,0x00,0x0d,0x20,0x1e,0xb3,0x19,0x39,0xb3,0x0d,
0x20,0x1e,0xb3,0x3d,0x26,0x0c,0x0d,0x20,0x1d,0xf8,
0x70,0xc3,0x86,0x43,0x0c,0x1f,0x80,0x05,0x67,0xcf,
0x79,0xd8,0x0b,0x40,0x19,0x09,0x44,0x12,0x44,0x08,
0x05,0x67,0xcf,0x79,0xd8,0x0c,0x61,0x9c,0x61,0xe6,
0x60,0x10,0x27,0xe5,0xfe,0x04,0x42,0x0d,0x10,0x0c,
0xe0,0x1c,0xf2,0x30,0x67,0xe3,0x33,0xe0,0x0d,0x20,
0x1e,0x30,0x7d,0x79,0xbe,0x0a,0xe0,0x18,0xe6,0x67,
0x0c,0x9c,0x0d,0x20,0x1e,0x03,0x3f,0x79,0x9f,0x0c,
0xe0,0x1c,0xf4,0x66,0xfd,0x83,0x13,0xc0,0x0b,0x20,
0x18,0x73,0x1e,0xb6,0x18,0x0d,0x47,0x5c,0xfd,0xe6,
0x7c,0x1a,0x33,0xc0,0x0d,0x20,0x1e,0x30,0x7d,0x79,
0xb3,0x05,0x20,0x0d,0x8c,0xd8,0x0b,0x67,0x98,0x30,
0x34,0x69,0x9c,0x0d,0x20,0x22,0x30,0x66,0xd9,0xe3,
0x07,0x8d,0x99,0x80,0x05,0x20,0x0f,0x76,0xc0,0x14,
0xe0,0x2d,0xf7,0x5e,0x66,0xcc,0xc0,0x0c,0xe0,0x1d,
0xf5,0xe6,0xcc,0x0c,0xe0,0x1c,0xf5,0xe6,0x78,0x0d,
0x27,0x9d,0xf5,0xe6,0xf9,0x83,0x00,0x0d,0x27,0x9c,
0xfd,0xe6,0x7c,0x18,0x30,0x0a,0xe0,0x19,0xb7,0xeb,
0x0c,0x00,0x0a,0xe0,0x18,0xe6,0x5c,0x38,0x74,0xce,
0x09,0x20,0x16,0x19,0xf6,0xc3,0x0c,0xe0,0x1f,0x33,
0x3e,0x0c,0xe0,0x1e,0xf3,0x64,0xf0,0x14,0xe0,0x2e,
0xf3,0x36,0x64,0xff,0x00,0x0c,0xe0,0x1e,0x73,0x19,
0x19,0xb3,0x0d,0x47,0x5f,0x33,0x3e,0x0d,0x19,0xe0,
0x0c,0xe0,0x1d,0xf8,0x20,0x82,0x08,0x30,0x7e,0x07,
0x67,0xd0,0x69,0x25,0x21,0x03,0x67,0xcb,0x73,0x40,
0x07,0x67,0xd1,0x29,0x0d,0x24,0x0c,0x41,0x5c,0xca,
0x60 };
/* font data size: 711 bytes */

static const unsigned char pix_chicago_index[] = {
0x00,0x00,0x30,0x20,0x0d,0x05,0x82,0x10,0xbc,0x3b,
0x0f,0xc4,0x51,0x2c,0x52,0x16,0x85,0xf1,0x8c,0x67,
0x1b,0xc7,0x91,0xf8,0x89,0x24,0xc9,0xf2,0xa0,0xb1,
0x2e,0x8c,0x23,0x2c,0xd0,0x35,0x8d,0xe3,0x90,0xec,
0x3d,0xd0,0x34,0x2d,0x13,0x46,0xd2,0x14,0xa5,0x31,
0x4e,0x54,0x05,0x15,0x4c,0x55,0x95,0xc5,0xb1,0x78,
0x5f,0x98,0x66,0x35,0x95,0x67,0xda,0x66,0xb1,0xb2,
0x6e,0x9c,0x17,0x21,0xd3,0x76,0x1e,0x07,0x95,0xeb,
0x7b,0xdf,0x37,0xf2,0x03,0x82,0xa1,0x18,0x6a,0x21,
0x8a,0xa3,0x18,0xda,0x3d,0x92,0x24,0xd9,0x56,0x5b,
0x98,0x66,0x99,0xc6,0x78,0xa0,0x28,0x6a,0x2e,0x91,
0xa6,0x6a,0x0a,0xa2,0xb1,0xad,0xeb,0xcb,0x08 };
/* font index size: 119 bytes */

const craft::packedbdf_t pix_chicago = {
	pix_chicago_index,
	0,
	pix_chicago_data,
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
	5,
	4,
	16,
	9
};
