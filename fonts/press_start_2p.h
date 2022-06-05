#pragma once

#include "display/PackedBDF.h"

static const unsigned char press_start_2p_data[] = {
0x04,0x40,0x40,0x0d,0xd0,0xc4,0xf8,0xc0,0xc0,0x14,
0xca,0xc4,0x6d,0xb0,0x1d,0xc0,0xc1,0xb3,0xfc,0xb6,
0x7f,0x36,0x1d,0xc0,0xc0,0x41,0xf3,0x41,0xf0,0x5b,
0xf0,0x40,0x1d,0xc0,0xc1,0x8a,0x93,0x20,0x40,0x99,
0x2a,0x30,0x1d,0xc0,0xc1,0xc4,0x6c,0x38,0x6d,0x66,
0x3f,0x08,0xd2,0xc4,0x6c,0x11,0xd0,0xc0,0xcd,0x38,
0x61,0x80,0x11,0xc8,0xc3,0x0d,0x26,0x66,0x00,0x1d,
0x41,0x41,0xb0,0xe3,0xf8,0xe1,0xb0,0x19,0x49,0x44,
0x18,0xfc,0x60,0xc0,0x0c,0xc8,0x44,0x36,0x18,0x4a,
0x43,0xf0,0x08,0x90,0xc3,0x60,0x1d,0xc0,0xc0,0x08,
0x10,0x20,0x40,0x81,0x02,0x00,0x1d,0xc0,0xc0,0xe1,
0x34,0xe3,0x32,0x1c,0x19,0xc8,0xc0,0xc3,0x94,0x63,
0xf0,0x1d,0xc0,0xc1,0xf3,0x18,0x38,0xf1,0xe3,0x83,
0xf8,0x1d,0xc0,0xc1,0xf8,0x30,0x60,0xf0,0x1b,0x19,
0xf0,0x1d,0xc0,0xc0,0x70,0xf1,0xb3,0x33,0xf8,0x30,
0x30,0x1d,0xc0,0xc3,0xf3,0x03,0xf4,0x03,0x63,0x3e,
0x1d,0xc0,0xc0,0xf1,0x83,0x03,0xf4,0x63,0x3e,0x1d,
0xc0,0xc3,0xfb,0x18,0x30,0x64,0x18,0x18,0x1d,0xc0,
0xc1,0xe3,0x13,0x91,0xe2,0x7a,0x19,0xf0,0x1d,0xc0,
0xc1,0xf4,0x63,0x3f,0x03,0x06,0x3c,0x09,0x51,0x44,
0x61,0xb0,0x0d,0x88,0xc4,0x30,0x86,0xc0,0x15,0xc8,
0xc0,0x63,0x18,0xc1,0x83,0x06,0x1c,0xc1,0xc3,0xf8,
0x03,0xf8,0x15,0xc8,0xc3,0x06,0x0c,0x18,0xc6,0x30,
0x1d,0xc0,0xc1,0xf3,0xfb,0x18,0x30,0xe0,0x00,0xe0,
0x1d,0xc0,0xc1,0xf2,0x0a,0xea,0xaa,0xfa,0x01,0xf0,
0x1d,0xc0,0xc0,0xe1,0xb4,0x63,0x7f,0x63,0x63,0x1d,
0xc0,0xc3,0xf4,0x63,0x7e,0x8c,0x6f,0xc0,0x1d,0xc0,
0xc0,0xf1,0x9c,0xe0,0x33,0x1e,0x1d,0xc0,0xc3,0xe3,
0x34,0xe3,0x66,0x7c,0x1d,0xc0,0xc3,0xfc,0x60,0x7e,
0x8c,0x0f,0xe0,0x1d,0xc0,0xc3,0xfc,0x60,0x7e,0x8c,
0x0c,0x00,0x1d,0xc0,0xc0,0xf9,0x83,0x03,0x3b,0x19,
0x98,0xf8,0x1d,0xc0,0xc4,0xe3,0x7f,0x8c,0x6c,0x60,
0x19,0xc8,0xc3,0xfb,0x31,0xf8,0x1d,0xc0,0xc5,0x83,
0x63,0x3e,0x1d,0xc0,0xc3,0x1b,0x33,0x63,0xc3,0xe3,
0x73,0x38,0x19,0xc8,0xc6,0x60,0xfc,0x1d,0xc0,0xc3,
0x1b,0xbc,0x7f,0x6b,0x63,0x63,0x1d,0xc0,0xc3,0x1b,
0x9b,0xdb,0xfb,0x7b,0x3b,0x18,0x1d,0xc0,0xc1,0xf5,
0xe3,0x3e,0x1d,0xc0,0xc3,0xf4,0xe3,0x7e,0x60,0x60,
0x1d,0xc0,0xc1,0xf4,0xe3,0x6f,0x66,0x3d,0x1d,0xc0,
0xc3,0xf4,0x63,0x67,0x7c,0x6e,0x67,0x1d,0xc0,0xc1,
0xe3,0x33,0x01,0xf0,0x1b,0x19,0xf0,0x19,0xc8,0xc3,
0xfb,0x30,0x60,0x1d,0xc0,0xc6,0x63,0x3e,0x1d,0xc0,
0xc4,0xe3,0x77,0x3e,0x1c,0x08,0x1d,0xc0,0xc4,0x63,
0x6b,0x8f,0xee,0xec,0x60,0x1d,0xc0,0xc3,0x1b,0xb9,
0xf0,0xe1,0xf3,0xbb,0x18,0x19,0xc8,0xc4,0xe6,0x7a,
0x0c,0x18,0x1d,0xc0,0xc3,0xf8,0x38,0x70,0xe1,0xc3,
0x83,0xf8,0x11,0xd0,0xc3,0xef,0x1e,0x1d,0xc0,0xc2,
0x01,0x00,0x80,0x40,0x20,0x10,0x08,0x11,0xc8,0xc3,
0xec,0xde,0x14,0x8b,0x41,0xcd,0x80,0x1c,0x40,0x43,
0xf8,0x08,0x9b,0x42,0x20,0x1d,0x40,0xc1,0xf0,0x19,
0xfb,0x19,0xf8,0x1d,0xc0,0xc4,0x60,0x7e,0x9c,0x67,
0xc0,0x1d,0x40,0xc1,0xfc,0xe0,0x3f,0x1d,0xc0,0xc4,
0x03,0x3f,0x9c,0x67,0xe0,0x1d,0x40,0xc1,0xf3,0x1b,
0xfb,0x01,0xf0,0x19,0xc8,0xc0,0x71,0x8f,0xe4,0xc1,
0x80,0x1d,0x80,0x41,0xfc,0x63,0x3f,0x03,0x3e,0x1d,
0xc0,0xc4,0x60,0x7e,0x9c,0x6c,0x60,0x19,0xc8,0xc0,
0xc0,0x07,0x24,0xc7,0xe0,0x16,0x08,0x40,0x60,0x0f,
0x43,0x78,0x1d,0xc0,0xc4,0x60,0x67,0x7e,0x7c,0x6e,
0x67,0x19,0xc8,0xc1,0xcb,0x31,0xf8,0x1d,0x40,0xc3,
0xf4,0xdb,0x5b,0x1d,0x40,0xc3,0xf4,0xe3,0x63,0x1d,
0x40,0xc1,0xf4,0xe3,0x3e,0x1d,0x80,0x43,0xf4,0x63,
0x7e,0x60,0x60,0x1d,0x80,0x41,0xfc,0x63,0x3f,0x03,
0x03,0x19,0x48,0xc3,0x77,0x11,0x83,0x00,0x1d,0x40,
0xc1,0xf3,0x01,0xf0,0x1b,0xf0,0x19,0xc8,0xc4,0x18,
0xfe,0x4c,0x18,0x1d,0x40,0xc5,0x63,0x3f,0x19,0x48,
0xc4,0xe6,0x78,0x60,0x1d,0x40,0xc5,0x5b,0x3f,0x1d,
0x40,0xc3,0x1b,0xf8,0xe3,0xfb,0x18,0x1d,0x80,0x44,
0xe3,0x3f,0x03,0x3e,0x1d,0x40,0xc3,0xf8,0x70,0xe1,
0xc3,0xf8,0x11,0xd0,0xc0,0xe1,0x99,0x0c,0x30,0x09,
0xd8,0xc6,0x6c,0x11,0xc8,0xc3,0x21,0x87,0x0c,0xc0,
0x1c,0xc1,0xc1,0xc2,0xe8,0x70 };
/* font data size: 64692 bytes */

static const unsigned char press_start_2p_index[] = {
0xf9,0xf2,0xf9,0xf5,0xf9,0xfb,0xfa,0x00,0xfa,0x08,
0xfa,0x12,0xfa,0x1c,0xfa,0x25,0xfa,0x29,0xfa,0x30,
0xfa,0x37,0xfa,0x3f,0xfa,0x46,0xfa,0x4a,0xfa,0x4e,
0xfa,0x52,0xfa,0x5c,0xfa,0x64,0xfa,0x6b,0xfa,0x75,
0xfa,0x7f,0xfa,0x89,0xfa,0x92,0xfa,0x9b,0xfa,0xa4,
0xfa,0xae,0xfa,0xb7,0xfa,0xbc,0xfa,0xc2,0xfa,0xca,
0xfa,0xd0,0xfa,0xd8,0xfa,0xe2,0xfa,0xec,0xfa,0xf5,
0xfa,0xfe,0xfb,0x06,0xfb,0x0e,0xfb,0x17,0xfb,0x20,
0xfb,0x2a,0xfb,0x32,0xfb,0x38,0xfb,0x3e,0xfb,0x48,
0xfb,0x4d,0xfb,0x56,0xfb,0x60,0xfb,0x66,0xfb,0x6e,
0xfb,0x76,0xfb,0x7f,0xfb,0x89,0xfb,0x8f,0xfb,0x94,
0xfb,0x9c,0xfb,0xa5,0xfb,0xaf,0xfb,0xb6,0xfb,0xc0,
0xfb,0xc5,0xfb,0xcf,0xfb,0xd4,0xfb,0xd9,0xfb,0xdd,
0xfb,0xe1,0xfb,0xe9,0xfb,0xf1,0xfb,0xf7,0xfb,0xff,
0xfc,0x07,0xfc,0x0f,0xfc,0x17,0xfc,0x1f,0xfc,0x27,
0xfc,0x2e,0xfc,0x37,0xfc,0x3d,0xfc,0x43,0xfc,0x49,
0xfc,0x4f,0xfc,0x57,0xfc,0x5f,0xfc,0x66,0xfc,0x6e,
0xfc,0x75,0xfc,0x7a,0xfc,0x80,0xfc,0x85,0xfc,0x8d,
0xfc,0x94,0xfc,0x9c,0xfc,0xa3,0xfc,0xa7,0xfc,0xae };
/* font index size: 190 bytes */

const craft::packedbdf_t press_start_2p = {
	press_start_2p_index,
	0,
	press_start_2p_data,
	1,
	0,
	32,
	126,
	0,
	0,
	16,
	3,
	4,
	3,
	4,
	4,
	8,
	8
};
