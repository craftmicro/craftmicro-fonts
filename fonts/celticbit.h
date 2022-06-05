#pragma once

#include "display/PackedBDF.h"

static const unsigned char celticbit_data[] = {
0x02,0x20,0x0c,0x09,0x00,0x15,0xe7,0x93,0x00,0xc6,
0x0e,0xa1,0xa1,0x99,0xdc,0xcc,0x44,0x88,0x1b,0x00,
0x38,0x73,0x80,0xc6,0x1f,0x98,0x0d,0xfc,0x31,0x87,
0xe6,0x03,0x7f,0x0c,0x60,0x11,0x27,0xa4,0x30,0x6e,
0x77,0xba,0x0f,0xc0,0xb7,0x58,0xf8,0x30,0x10,0xe0,
0x25,0x90,0xcc,0x0e,0x06,0x06,0x03,0x30,0x98,0x11,
0x00,0x24,0x71,0x0d,0x83,0x93,0x7b,0x11,0xce,0x79,
0x06,0xa1,0x92,0x59,0x20,0x09,0x00,0x14,0x66,0xac,
0x30,0xc0,0x09,0x00,0x15,0x86,0xa3,0x33,0x00,0x11,
0x00,0x24,0x10,0x5a,0x1e,0x3f,0xcf,0xc3,0xc2,0xd0,
0x40,0x11,0x00,0x24,0x11,0x03,0x0f,0xf3,0xf4,0x0c,
0x04,0x00,0x04,0xa7,0x0e,0x32,0xd0,0x0c,0x41,0x9d,
0xf1,0xf0,0x04,0x40,0x0d,0xb0,0x09,0x00,0x14,0x50,
0x70,0xd1,0x84,0x11,0x00,0x24,0x78,0x66,0x63,0xb2,
0xda,0x6e,0x33,0x30,0xf0,0x09,0x00,0x14,0x46,0x75,
0x33,0xc0,0x0f,0x00,0x20,0xf9,0x1c,0x0c,0x38,0xc1,
0x81,0xfd,0xf8,0x0d,0x00,0x1d,0xfa,0x30,0xc7,0x81,
0x81,0x66,0x78,0x13,0x27,0xa8,0x18,0x0e,0x07,0x83,
0x61,0x9d,0x7f,0xa0,0x30,0x0c,0x00,0x0f,0x00,0x20,
0x7c,0xf9,0x81,0xf8,0xcc,0x05,0xcc,0xf8,0x0f,0x00,
0x20,0x3c,0x78,0xc1,0xf9,0x9d,0x0d,0x98,0xf0,0x0f,
0x00,0x21,0xfc,0xfc,0x0c,0x18,0x30,0x60,0xc0,0x80,
0x11,0x00,0x24,0xfc,0xe7,0x61,0xbb,0xce,0xcc,0x37,
0x39,0xf8,0x11,0x00,0x24,0x78,0x66,0x61,0xb9,0xcf,
0xe0,0x30,0x31,0xf0,0x06,0xa0,0x91,0x9c,0x19,0xc0,
0x07,0x07,0x11,0x9c,0x23,0x13,0x20,0x0b,0x00,0x18,
0x31,0x8c,0x8c,0x18,0x30,0x60,0x0c,0xa0,0x9d,0xf1,
0xf0,0x0f,0x8f,0x80,0x0b,0x00,0x19,0x83,0x06,0x81,
0x8c,0x63,0x00,0x11,0x00,0x24,0xfc,0xe7,0x03,0x83,
0x83,0x00,0x00,0xc0,0x60,0x13,0x00,0x28,0x7c,0x31,
0x9b,0xb7,0x1d,0xc3,0x6f,0x88,0x01,0xfc,0x13,0x00,
0x28,0x7a,0x33,0xab,0x0c,0x67,0x0f,0x60,0x11,0x00,
0x25,0xbc,0xe3,0x61,0xb1,0x9b,0xce,0x36,0x1b,0xf0,
0x11,0x00,0x24,0x72,0x67,0x61,0xc6,0x03,0x04,0xce,
0x3c,0x11,0x00,0x25,0xf8,0x3e,0x31,0xce,0x19,0x98,
0x78,0x11,0x00,0x24,0x7c,0x63,0x60,0x3f,0xa3,0x00,
0xc2,0x3e,0x11,0x47,0x25,0xfe,0x61,0x30,0x1f,0xa9,
0x80,0x80,0x80,0x11,0x47,0x24,0x7a,0x63,0x9c,0x06,
0x19,0x9c,0x7a,0x01,0x01,0x00,0x11,0x47,0x25,0xcf,
0x0c,0x66,0xf3,0x9c,0xb1,0x80,0x80,0x80,0x09,0x00,
0x15,0xe7,0xb3,0x18,0x09,0x47,0x15,0xe7,0xc3,0x11,
0x00,0x11,0x00,0x25,0xc0,0x62,0x33,0x1b,0x21,0xe0,
0xd8,0x67,0x0f,0x27,0xa1,0xc2,0xd8,0x18,0x9f,0x80,
0x80,0x1d,0x00,0x3c,0x79,0xe1,0x9e,0x6a,0xc3,0x0c,
0xc6,0x30,0xcc,0xc0,0x11,0x00,0x25,0xbc,0xe7,0xbc,
0x36,0x30,0x13,0x00,0x28,0x7c,0x31,0xab,0x06,0x63,
0x0f,0x80,0x13,0x47,0x29,0xbc,0x39,0xa5,0x86,0x73,
0x1f,0x86,0x01,0x00,0x80,0x00,0x15,0x47,0x2c,0x7c,
0x18,0xca,0xc1,0x8c,0x60,0xf8,0x1f,0xa4,0x18,0x13,
0x00,0x29,0xbc,0x71,0x98,0x66,0x31,0xb8,0x76,0x18,
0xc6,0x1c,0x11,0x00,0x24,0xfc,0xe7,0x70,0x1e,0x01,
0xc0,0x77,0x38,0xf8,0x15,0x00,0x2d,0xff,0x26,0x19,
0x30,0x06,0x08,0x63,0x07,0xc0,0x15,0x00,0x2d,0xc7,
0x18,0x6a,0xc1,0x8c,0x70,0xf7,0x15,0x00,0x2d,0xc3,
0xcb,0x06,0x30,0xc6,0x30,0x6c,0x07,0x00,0x1f,0x00,
0x41,0xce,0x38,0xc6,0x1a,0xb0,0xc3,0x19,0xe7,0x0e,
0x1c,0x80,0x15,0x00,0x2d,0xc1,0x8c,0x60,0xd8,0x0e,
0x01,0x80,0x78,0x19,0x8e,0x1c,0x13,0x66,0xa9,0xc7,
0x30,0xeb,0x06,0x63,0x8f,0xe0,0x1b,0x8c,0x7e,0x00,
0x11,0x00,0x25,0xfe,0xc7,0x43,0x03,0x06,0x06,0x17,
0x1b,0xfc,0x09,0x00,0x15,0xee,0xac,0x73,0xc0,0x09,
0x00,0x14,0x91,0x90,0xd0,0x62,0x09,0x00,0x15,0xe7,
0xa3,0x3b,0xc0,0x0a,0x82,0x18,0x43,0x9b,0x44,0x0c,
0x40,0x1d,0xf1,0xf0,0x06,0xa1,0x92,0x71,0x08,0x10,
0xc0,0x24,0xfa,0xe7,0x8c,0x37,0x39,0xf4,0x13,0x00,
0x29,0x80,0x30,0x0f,0xc3,0x9a,0x18,0x67,0x30,0xf8,
0x0e,0xc0,0x20,0xf9,0xce,0x30,0x18,0x8f,0x00,0x10,
0xe0,0x25,0xf8,0x3e,0x33,0xc6,0x19,0x98,0x78,0x0e,
0xc0,0x20,0xf9,0x8d,0xb9,0xc1,0x84,0xf8,0x11,0x66,
0xa4,0x3c,0x31,0x83,0x01,0x93,0xfa,0x4c,0x04,0x04,
0x00,0x11,0x26,0xa4,0xfa,0xe7,0x8c,0x33,0x38,0xfc,
0xc6,0xc7,0x3f,0x00,0x17,0x00,0x31,0xc0,0x0c,0x00,
0xdf,0x0f,0x38,0xe1,0x8c,0x18,0xc3,0x0c,0x7c,0x09,
0x00,0x14,0x60,0x79,0xe4,0xc6,0x09,0x66,0x94,0x60,
0x79,0xec,0xc4,0x40,0x0f,0x00,0x21,0xc2,0x19,0x9b,
0x1e,0x1f,0x19,0x99,0x80,0x0d,0x00,0x1d,0xc1,0xca,
0x30,0x68,0x60,0x1e,0xc0,0x41,0xfb,0xf0,0xcf,0x3a,
0x18,0xc3,0x18,0xc6,0x3c,0xcf,0x80,0x14,0xc0,0x2d,
0xfe,0x1c,0xe8,0x61,0x8c,0x23,0x8f,0x10,0xc0,0x24,
0xfc,0xe7,0x8c,0x37,0x39,0xf8,0x13,0x26,0xa9,0xbe,
0x39,0xe1,0x86,0x73,0x9f,0xd0,0xc0,0x10,0x00,0x13,
0x26,0xa8,0xfb,0x73,0xa3,0x0c,0xe7,0x1f,0xd0,0x06,
0x00,0x80,0x10,0xc0,0x25,0x78,0xe6,0x67,0x3f,0x18,
0xcc,0x30,0x10,0xc0,0x24,0xfc,0xe3,0x38,0x03,0x9c,
0xe3,0xe0,0x0f,0x00,0x20,0x30,0x61,0xfe,0x4c,0x0c,
0x83,0x00,0x12,0xc0,0x29,0xe7,0x31,0xa3,0x0c,0xc7,
0x1e,0xe0,0x12,0xc0,0x29,0xe7,0x86,0x18,0x8c,0x16,
0x02,0x00,0x1c,0xc0,0x3d,0xf6,0x61,0x8c,0x66,0x18,
0x6c,0x70,0xd9,0xf3,0x9e,0x7e,0x10,0xc0,0x25,0xc6,
0x66,0x0e,0x06,0x07,0x0e,0xe0,0x0f,0x07,0x21,0xcc,
0xce,0x0d,0x06,0x44,0xc3,0x80,0x0e,0xc0,0x21,0xfd,
0x18,0x30,0x60,0xc5,0xfc,0x0b,0x00,0x18,0x73,0x8c,
0x72,0x18,0x70,0xe0,0x05,0x00,0x0c,0xe6,0x80,0x0b,
0x00,0x19,0xc3,0x86,0x1e,0x0c,0x73,0x80,0x0e,0x82,
0x20,0xc1,0xe5,0x3c,0x18 };
/* font data size: 945 bytes */

static const unsigned char celticbit_index[] = {
0x00,0x00,0x30,0x28,0x12,0x08,0xc3,0x00,0xec,0x46,
0x12,0xc5,0x21,0x64,0x65,0x1c,0x07,0x51,0xe8,0x7e,
0x21,0x49,0x12,0x60,0xa3,0x2b,0x4b,0xb3,0x18,0xd1,
0x37,0x0e,0x83,0xd0,0xfa,0x40,0x50,0xa4,0x49,0x1b,
0x49,0xd3,0x44,0xf9,0x4a,0x55,0x55,0xf5,0xa9,0x75,
0x60,0x98,0xe6,0x51,0x9b,0x69,0x9a,0xf6,0xf1,0xc4,
0x73,0x9d,0xc7,0xa5,0xf6,0x80,0xa0,0xe8,0x62,0x24,
0x8c,0xa4,0x09,0x3a,0x5a,0x98,0x66,0x89,0xbe,0x75,
0x9e,0xa7,0xfa,0x22,0x94,0xa7,0x6a,0x7a,0xc2,0xbd,
0xb2,0xad,0x9b,0x82,0xe8,0xbc,0xef,0xbc,0x27,0x13,
0xc7,0x32,0x9c,0xdb,0x40,0xd2,0xb5,0x4d,0x7b,0x68,
0xdd,0xb8,0x0e,0x2b,0x93,0xe7,0x3a,0x1e,0xa8 };
/* font index size: 119 bytes */

const craft::packedbdf_t celticbit = {
	celticbit_index,
	0,
	celticbit_data,
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
	5,
	14,
	8
};
