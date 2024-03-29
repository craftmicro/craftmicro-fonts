#pragma once

#include "display/PackedBDF.h"

static const unsigned char blocktopia_data[] = {
0x02,0x20,0x28,0x07,0x60,0x26,0xf7,0x07,0x70,0x12,
0x83,0xd4,0x39,0xdc,0xe7,0x38,0x0f,0x40,0x44,0x36,
0x8f,0xf0,0xda,0x3f,0x9b,0x1b,0x00,0x0f,0x40,0x40,
0x61,0xfb,0xfb,0x83,0xf1,0xf8,0x3b,0xfb,0xf0,0x60,
0x17,0x40,0x61,0x83,0xac,0x7a,0xcf,0x19,0xe0,0x3c,
0x07,0x80,0xf3,0x1e,0x5b,0xc5,0xb8,0x30,0x0f,0x40,
0x40,0x61,0xfb,0xfb,0x81,0xfb,0xfb,0x83,0xf9,0xf8,
0x60,0x08,0x83,0xac,0x3b,0x9c,0x09,0x40,0x29,0xdf,
0x9c,0xf3,0x80,0x09,0x40,0x2b,0x9f,0x8e,0xf7,0x00,
0x0c,0xc2,0x38,0xc8,0xfc,0xf3,0xf6,0x60,0x0f,0x00,
0xc4,0x9c,0x8f,0xf0,0x70,0x70,0x08,0x80,0x2c,0x3b,
0x9c,0x0e,0x42,0x43,0xfb,0xf8,0x06,0x40,0x23,0xb8,
0x17,0x40,0x60,0x03,0x80,0x78,0x0f,0x01,0xe0,0x3c,
0x07,0x80,0xf0,0x1e,0x03,0xc0,0x38,0x00,0x0f,0x40,
0x41,0xf3,0xfe,0x77,0x7f,0x3e,0x0f,0x40,0x44,0x7c,
0xc3,0x8f,0xef,0xe0,0x0f,0x40,0x43,0xf3,0xfc,0x07,
0x3f,0x7e,0x8e,0x0f,0xef,0xe0,0x0f,0x40,0x43,0xf3,
0xfc,0x07,0x87,0xf0,0x1d,0xfd,0xf8,0x0f,0x40,0x45,
0x77,0x8f,0xf2,0x1c,0x1c,0x0f,0x40,0x44,0x7f,0x8e,
0x0f,0xcf,0xf0,0x1d,0xfd,0xf8,0x0f,0x40,0x41,0xfb,
0xfc,0x70,0x7e,0x7f,0x8e,0xef,0xe7,0xc0,0x0f,0x40,
0x44,0x7f,0xd0,0xe0,0xe0,0x0f,0x40,0x41,0xf3,0xfc,
0x77,0x3e,0x7f,0x8e,0xef,0xe7,0xc0,0x0f,0x40,0x41,
0xf3,0xfc,0x77,0x7f,0x3f,0x80,0xef,0xef,0xc0,0x06,
0xe1,0x24,0x79,0x0e,0xe0,0x09,0x20,0x2c,0x3c,0x84,
0x3b,0x9c,0x0b,0x00,0xb0,0x63,0x9d,0x1c,0x38,0x70,
0xc0,0x0e,0xc1,0x44,0x7f,0x80,0x0f,0xef,0xe0,0x0b,
0x00,0xb3,0x0e,0x1d,0x07,0x39,0xc6,0x00,0x0f,0x40,
0x43,0xf3,0xfc,0x07,0x1f,0x1e,0x80,0x03,0x83,0x80,
0x0f,0x40,0x41,0xf3,0xfb,0x9c,0xf7,0x76,0x70,0x7e,
0x3e,0x0f,0x40,0x41,0xfb,0xfc,0x77,0x8f,0xf3,0xdd,
0xdc,0x0f,0x40,0x43,0xf3,0xfc,0x77,0x7e,0x7f,0x8e,
0xef,0xef,0xc0,0x0f,0x40,0x41,0xfb,0xfe,0x70,0x7f,
0x3f,0x0f,0x40,0x43,0xf3,0xfe,0x77,0x7f,0x7e,0x0f,
0x40,0x44,0x7f,0x8e,0x11,0xfe,0x38,0x3f,0xbf,0x80,
0x0f,0x40,0x44,0x7f,0x8e,0x11,0xfe,0x78,0x38,0x00,
0x0f,0x40,0x41,0xfb,0xfc,0x70,0xae,0xef,0xe7,0xc0,
0x0f,0x40,0x45,0x77,0x8f,0xf3,0xdd,0xdc,0x0f,0x40,
0x44,0x7f,0xc3,0x8f,0xef,0xe0,0x0f,0x40,0x46,0x87,
0x07,0x7f,0x7e,0x0f,0x40,0x45,0x77,0x7e,0x7f,0x9e,
0xee,0xe0,0x0f,0x40,0x46,0xf0,0x70,0x7f,0x7f,0x17,
0x40,0x63,0xff,0x3f,0xfe,0xf7,0x77,0x77,0x0f,0x40,
0x43,0xf3,0xfe,0xf7,0x77,0x0f,0x40,0x41,0xf3,0xfe,
0x77,0x7f,0x3e,0x0f,0x40,0x43,0xf3,0xfc,0x77,0x7f,
0x7e,0x9e,0x0e,0x00,0x0f,0x40,0x41,0xf3,0xfd,0xf7,
0x7f,0x3f,0x03,0x0f,0x40,0x43,0xf3,0xfc,0x77,0x7e,
0x7f,0x9e,0xee,0xe0,0x0f,0x40,0x41,0xfb,0xfc,0x70,
0x7e,0x3f,0x80,0xef,0xef,0xc0,0x0f,0x40,0x44,0x7f,
0xd3,0x83,0x80,0x0f,0x40,0x46,0xf7,0x77,0x7f,0x3e,
0x0f,0x40,0x46,0xf7,0x77,0x7f,0x3f,0x17,0x40,0x66,
0xf7,0x77,0x77,0x7f,0xf3,0xff,0x0f,0x40,0x45,0x77,
0x3e,0x7f,0x9e,0xee,0xe0,0x0f,0x40,0x45,0x77,0x7f,
0x3e,0x93,0x83,0x80,0x0f,0x40,0x44,0x7f,0x80,0xe7,
0xef,0xd1,0xc1,0xfd,0xfc,0x09,0x40,0x2c,0x7e,0x73,
0xde,0x17,0x40,0x63,0x80,0x3c,0x01,0xe0,0x0f,0x00,
0x78,0x03,0xc0,0x1e,0x00,0xf0,0x07,0x80,0x38,0x09,
0x40,0x2c,0x7e,0x3b,0xde,0x0c,0x83,0x38,0xc3,0xcf,
0xd9,0x80,0x14,0x47,0x5b,0xff,0x7f,0xe0,0x08,0x83,
0x2b,0x1c,0x71,0x80,0x0f,0x00,0x41,0xf1,0xf8,0x39,
0xfb,0xfb,0xbb,0xf9,0xf8,0x0f,0x40,0x44,0x70,0x7e,
0x7f,0xae,0xef,0xef,0xc0,0x0f,0x00,0x41,0xfb,0xfd,
0x70,0x7f,0x3f,0x0f,0x40,0x44,0x07,0x3f,0x7f,0xae,
0xef,0xe7,0xe0,0x0f,0x00,0x41,0xf3,0xfb,0xbc,0x7f,
0x70,0x7e,0x3e,0x0f,0x40,0x40,0x78,0xfc,0x1c,0x8f,
0xf2,0x70,0x70,0x0f,0x86,0x41,0xf3,0xfd,0x77,0x7f,
0x3f,0x80,0xe7,0xe7,0xc0,0x0f,0x40,0x44,0x70,0x7e,
0x7f,0xbe,0xee,0xe0,0x07,0x60,0x24,0x70,0xde,0xe0,
0x09,0xfe,0x24,0x38,0x35,0xe5,0xde,0xe0,0x0f,0x40,
0x44,0x70,0x8e,0xef,0xcf,0xf3,0xdd,0xdc,0x09,0x40,
0x2e,0xf3,0x9e,0x70,0x17,0x00,0x63,0xff,0x3f,0xfd,
0xf7,0x77,0x77,0x0f,0x00,0x43,0xf3,0xfd,0xf7,0x77,
0x0f,0x00,0x41,0xf3,0xfd,0x77,0x7f,0x3e,0x0f,0x86,
0x43,0xf3,0xfd,0x77,0x7f,0x7e,0x9e,0x0e,0x00,0x0f,
0x86,0x41,0xfb,0xfd,0x77,0x7f,0x3f,0x90,0xe0,0xe0,
0x0f,0x00,0x43,0xf3,0xfb,0xbd,0x70,0x70,0x0f,0x00,
0x41,0xfb,0xfb,0x83,0xf1,0xf8,0x3b,0xfb,0xf0,0x0f,
0x40,0x45,0x1c,0x8f,0xf0,0x70,0x7c,0x3c,0x0f,0x00,
0x46,0x77,0x7f,0x3e,0x0f,0x00,0x46,0x77,0x7f,0x3f,
0x17,0x00,0x66,0x77,0x77,0xff,0x3f,0xf0,0x0f,0x00,
0x44,0xf7,0x3e,0x7f,0x8e,0xee,0xe0,0x0f,0x86,0x46,
0x77,0x7f,0x3f,0x80,0xe7,0xe7,0xc0,0x0f,0x00,0x44,
0x7f,0x07,0x3f,0x7e,0x70,0x7f,0x7f,0x0b,0x40,0x30,
0xe7,0xc3,0xa3,0x90,0xe3,0xc7,0x0b,0x40,0x33,0xfa,
0xe3,0x9f,0x0b,0x40,0x34,0x72,0x1d,0x07,0x87,0x3c,
0xe0,0x10,0x81,0xc9,0xc1,0xf6,0xdf,0x07,0x00 };
/* font data size: 849 bytes */

static const unsigned char blocktopia_index[] = {
0x00,0x00,0x30,0x24,0x10,0x06,0xc2,0x80,0xe8,0x47,
0x13,0x05,0x31,0x68,0x62,0x1a,0x86,0xf1,0xd0,0x78,
0x22,0x89,0x22,0x68,0xa6,0x2c,0x4b,0x93,0x10,0xd0,
0x35,0xce,0x33,0xbc,0xf5,0x3f,0x10,0x54,0x35,0x16,
0x48,0x92,0xd4,0xdd,0x43,0x52,0xd5,0x35,0x79,0x68,
0x5c,0x97,0xa6,0x09,0x89,0x64,0x99,0x96,0x89,0xa9,
0x6c,0x5b,0xc7,0x15,0xd0,0x77,0x1e,0x37,0xa9,0xf1,
0x7e,0xa0,0x38,0x32,0x17,0x87,0x62,0xf8,0xd6,0x3c,
0x90,0xa4,0x89,0x4e,0x5d,0x99,0x66,0xf9,0xe6,0x83,
0xa3,0xe9,0x8a,0x7a,0xa6,0xac,0x2b,0x6a,0xfe,0xc6,
0xb3,0xad,0x9b,0x92,0xec,0xbd,0xf0,0x0c,0x1b,0x0c,
0xc5,0x31,0xdc,0x9f,0x31,0xce,0xb4,0x0d,0x24 };
/* font index size: 119 bytes */

const craft::packedbdf_t blocktopia = {
	blocktopia_index,
	0,
	blocktopia_data,
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
	10
};
