#pragma once

#include "display/PackedBDF.h"

static const unsigned char athens_classic_data[] = {
0x01,0x08,0x01,0x40,0x02,0x73,0x01,0xf7,0xac,0x36,
0x06,0x22,0x52,0xa7,0x36,0x60,0x0a,0x51,0x33,0xa0,
0x66,0x87,0xfe,0x0c,0xc8,0xff,0x8c,0xc1,0x98,0x08,
0x99,0xf2,0xa0,0x60,0xfc,0xff,0x8d,0xb8,0xd8,0x7f,
0x1f,0xe0,0x6e,0x76,0xdf,0xe7,0xe0,0xc0,0x60,0x0e,
0x79,0x04,0x0f,0x7f,0xbf,0xff,0x66,0x0c,0xcc,0x31,
0x98,0xc3,0xf3,0x03,0xcc,0x00,0x30,0x00,0xcf,0x03,
0x3f,0x81,0x8c,0xc6,0x19,0x8c,0x3f,0x18,0x3c,0x09,
0x79,0x03,0x0f,0xc7,0xfa,0x30,0xd1,0x80,0x30,0x1d,
0xf6,0x7e,0xb0,0xcf,0xf1,0xf8,0x02,0x22,0x59,0xa7,
0x60,0x05,0xa1,0xea,0x03,0x1a,0x19,0xb8,0xbc,0x43,
0x06,0x0c,0x05,0xa2,0xea,0x18,0x32,0x0d,0xa3,0xb1,
0xc1,0x8c,0x60,0x07,0x39,0x42,0x42,0x0a,0x87,0x1f,
0xc7,0x0a,0x82,0x00,0x08,0x40,0x12,0x64,0x62,0x3f,
0xe0,0x60,0x30,0x02,0x22,0xf1,0x63,0x28,0x07,0x11,
0x2a,0x5f,0xdf,0xc0,0x02,0x12,0x01,0x5b,0x08,0x71,
0x02,0xa0,0x0e,0x01,0xa0,0x32,0x06,0x20,0xc2,0x18,
0x18,0x0c,0x00,0x08,0x71,0x02,0x8f,0xcf,0xfd,0xc3,
0x9c,0x37,0xf9,0xf8,0x04,0x73,0x02,0x84,0x68,0xed,
0x63,0x3d,0xe0,0x08,0x71,0x02,0x8f,0xcf,0xf8,0xc3,
0x01,0x81,0xc1,0xc1,0xc1,0xc1,0xc1,0xc0,0xc3,0x7f,
0xbf,0xc0,0x08,0x71,0x02,0xa3,0xfd,0x86,0xc6,0x06,
0x06,0x07,0xc3,0xf9,0x03,0x61,0xbf,0xcf,0xc0,0x08,
0x71,0x02,0x80,0xc0,0xe0,0xf0,0xd8,0xcc,0xc6,0x8f,
0xfa,0x06,0x07,0x83,0xc0,0x08,0x71,0x02,0xa3,0xfe,
0x70,0x1f,0xcf,0xf9,0x03,0x8c,0x37,0xf9,0xf8,0x08,
0x71,0x02,0x8f,0xcf,0xf6,0x1c,0x60,0x3f,0x9f,0xf7,
0x86,0xff,0x3f,0x00,0x08,0x71,0x02,0xa3,0xfd,0x86,
0x03,0x80,0x68,0x0c,0xb1,0x80,0xc0,0x08,0x71,0x02,
0x8f,0xcf,0xf9,0xc3,0x3f,0x3f,0xef,0x0d,0xfe,0x7e,
0x08,0x71,0x02,0x8f,0xcf,0xfb,0xc3,0x7f,0x9f,0xe0,
0x0d,0x86,0xff,0x3f,0x00,0x02,0x52,0x01,0x63,0xc1,
0xb0,0x02,0x62,0xf1,0x63,0xc2,0x32,0x80,0x06,0x49,
0x0a,0x01,0x86,0x18,0x61,0x81,0x81,0x81,0x81,0x80,
0x08,0x32,0x1b,0x23,0xfe,0x00,0x1f,0xef,0xf0,0x06,
0x49,0x0a,0x18,0x18,0x18,0x18,0x18,0x61,0x86,0x18,
0x00,0x08,0x72,0x02,0xcf,0xcf,0xf8,0xc3,0x01,0x81,
0xc1,0xc1,0xc9,0x18,0x00,0x06,0x03,0x00,0x0e,0x71,
0xf4,0x03,0xfc,0x1f,0xfe,0x30,0x0c,0xc0,0x0d,0x8f,
0x9b,0x3f,0x38,0xcc,0xcd,0x9f,0xf3,0x1e,0xc6,0x00,
0x06,0x00,0x0f,0x80,0x07,0x00,0x0a,0x71,0x03,0x07,
0xe1,0xfe,0xa6,0x1a,0x1f,0xea,0x61,0x9e,0x7b,0xcf,
0x09,0x71,0x02,0xdf,0xe7,0xfe,0x58,0x70,0xfe,0xb6,
0x1b,0xfe,0xff,0x00,0x08,0x71,0x02,0x8f,0xef,0xf8,
0xc3,0xcc,0x08,0xc3,0x7f,0x9f,0xc0,0x09,0x71,0x02,
0xdf,0xe7,0xff,0x58,0x72,0xc3,0x7f,0xdf,0xe0,0x09,
0x71,0x02,0xe3,0xff,0x0c,0x38,0x60,0x43,0xe2,0x18,
0x10,0xc3,0x7f,0xdf,0xf0,0x09,0x71,0x02,0xe3,0xff,
0x0c,0x38,0x60,0x43,0xe2,0x98,0x0f,0x03,0xc0,0x08,
0x71,0x02,0x8f,0xef,0xf8,0xc3,0x8c,0x08,0xcf,0xac,
0x37,0xf9,0xfc,0x0a,0x71,0x03,0x23,0xcf,0xa6,0x1a,
0x1f,0xea,0x61,0x9e,0x7b,0xcf,0x04,0x71,0x01,0xa3,
0xf5,0xa5,0x9e,0xf0,0x06,0x71,0x01,0xe0,0xfd,0x1a,
0x46,0x7c,0xf0,0x0c,0x71,0x03,0xa3,0xcf,0x8c,0x30,
0x63,0x03,0x30,0x1b,0x00,0xf0,0x06,0xc0,0x33,0x01,
0x8c,0x0c,0x30,0x60,0xc7,0x8f,0xbc,0x7c,0x09,0x71,
0x02,0xe3,0xc1,0xac,0x03,0x02,0x18,0x6f,0xfb,0xfe,
0x10,0x71,0x04,0x9f,0xff,0x8f,0xff,0xed,0x61,0x86,
0x96,0x18,0x67,0x9e,0x7b,0xcf,0x3c,0x0a,0x71,0x03,
0x1f,0xe3,0xfe,0xd6,0x1a,0x58,0x67,0x9e,0xf3,0xc0,
0x08,0x71,0x02,0x8f,0xcf,0xfd,0xc3,0x9c,0x37,0xf9,
0xf8,0x09,0x71,0x02,0xdf,0xe7,0xfe,0x98,0x67,0xf9,
0xfd,0x4c,0x07,0x81,0xe0,0x08,0x81,0xf2,0x8f,0xcf,
0xfd,0xc3,0x9c,0x37,0xf9,0xf8,0x0e,0x03,0x0a,0x71,
0x03,0x1f,0xe3,0xfe,0xa6,0x18,0xfe,0x1f,0xea,0x61,
0x9e,0x7b,0xcf,0x08,0x71,0x02,0x8f,0xef,0xf8,0xc3,
0x8c,0x07,0xf1,0xfe,0x40,0xd8,0x6f,0xf7,0xf0,0x0a,
0x71,0x03,0x23,0xff,0x8c,0xcf,0x43,0x00,0x60,0x1e,
0x03,0xc0,0x0a,0x71,0x03,0x23,0xcf,0xd6,0x1a,0x58,
0x63,0xfc,0x3f,0x00,0x0a,0x71,0x03,0x23,0xcf,0x96,
0x1a,0x4c,0xc9,0x1e,0x20,0x30,0x06,0x00,0x10,0x71,
0x04,0xa3,0xc0,0x3e,0x58,0x61,0xa4,0xcf,0x32,0x47,
0x9e,0x20,0x30,0xc0,0x18,0x60,0x0b,0x71,0x03,0x63,
0xef,0xc1,0x8c,0x81,0xb1,0x01,0xc2,0x06,0xc4,0x18,
0xc7,0xdf,0x7d,0xf0,0x0a,0x71,0x03,0x23,0xcf,0x86,
0x1a,0x0c,0xc8,0x1e,0x28,0x30,0x0f,0x01,0xe0,0x08,
0x71,0x02,0xa3,0xfd,0x8c,0x06,0x80,0xc8,0x18,0x83,
0x03,0x01,0x8d,0xfe,0xff,0x04,0x91,0xf1,0xe3,0xf7,
0x37,0x1e,0xf0,0x08,0x71,0x02,0xa3,0x02,0x18,0x20,
0xc2,0x06,0x20,0x32,0x01,0x80,0x60,0x30,0x04,0x92,
0xf1,0xe3,0xf4,0xf4,0xde,0xf0,0x05,0x19,0x59,0xc4,
0x29,0x10,0x0a,0x08,0x02,0x9f,0xf8,0x03,0x19,0x59,
0x50,0x84,0x08,0x51,0x02,0x8f,0x8f,0xe6,0x30,0x18,
0xfc,0xfe,0x8c,0x67,0xf9,0xfc,0x08,0x70,0x02,0x63,
0x82,0x18,0x0f,0xc7,0xfc,0x63,0x3f,0x9f,0x80,0x07,
0x51,0x02,0x4f,0xdf,0xd8,0xeb,0x03,0x1b,0xf9,0xf8,
0x08,0x71,0x02,0xa0,0x3a,0x01,0x8f,0xcf,0xec,0xc6,
0x7f,0x9f,0xc0,0x07,0x51,0x02,0x4f,0x9f,0xe3,0x1c,
0x7f,0x60,0x63,0x7f,0x3e,0x05,0x71,0x01,0xc7,0x3e,
0x19,0x1e,0xc6,0x3c,0xf0,0x08,0x71,0xe2,0x8f,0xef,
0xfc,0xc6,0x7f,0x1f,0x80,0xcc,0x67,0xf1,0xf0,0x09,
0x70,0x02,0xa3,0x81,0x0c,0x03,0xf0,0xfe,0xc6,0x33,
0xde,0xf7,0x80,0x04,0x71,0x01,0xa1,0xa0,0x23,0xb1,
0x9e,0xf0,0x04,0x90,0xe1,0x60,0xe0,0x21,0xf4,0xe4,
0xde,0xe0,0x09,0x71,0x02,0xa3,0xc1,0x0c,0x08,0x67,
0x1b,0x10,0xf0,0x36,0x0c,0xc3,0x19,0xef,0x7b,0xc0,
0x04,0x71,0x01,0xa3,0xb5,0xa5,0x9e,0xf0,0x0e,0x50,
0x03,0xdf,0xfe,0x3f,0xfe,0xc6,0x31,0x9e,0xf7,0xbd,
0xef,0x09,0x50,0x02,0x9f,0xc7,0xfb,0x18,0xcf,0x7b,
0xde,0x07,0x51,0x02,0x4f,0x9f,0xf3,0x1b,0xf9,0xf0,
0x08,0x70,0xe2,0x5f,0xcf,0xfc,0x63,0x3f,0x9f,0xa1,
0x81,0xe0,0xf0,0x08,0x71,0xe2,0x8f,0xef,0xfc,0xc6,
0x7f,0x1f,0xa0,0x18,0x1e,0x0f,0x08,0x50,0x02,0x1f,
0xcf,0xf3,0x1d,0xb0,0x3c,0x1e,0x00,0x07,0x51,0x02,
0x4f,0xdf,0xd8,0xd8,0x1f,0x8f,0xc0,0xd8,0xdf,0xdf,
0x80,0x05,0x69,0x01,0xe5,0x91,0xec,0x61,0xe3,0x80,
0x09,0x50,0x02,0xa3,0x9d,0x8c,0x63,0xfc,0x7f,0x09,
0x50,0x02,0xa3,0xdf,0x0c,0x68,0x36,0x40,0xe0,0x10,
0x04,0x00,0x0e,0x50,0x03,0xe3,0xde,0xfc,0x63,0x18,
0xff,0xe1,0xf7,0x80,0x09,0x50,0x02,0xa3,0xde,0x63,
0x0d,0x90,0x38,0x1b,0x0c,0x67,0xbd,0xef,0x09,0x70,
0xe2,0xa3,0xdf,0x8c,0x63,0xf8,0x7e,0x01,0x8c,0x63,
0xf8,0x7c,0x07,0x50,0x02,0x23,0xfb,0x18,0x30,0x60,
0xc1,0x83,0x1b,0xfb,0xf8,0x04,0x91,0xf1,0xc7,0xac,
0x66,0x6b,0x0c,0x02,0x92,0xf1,0xb7,0xde,0x76,0x04,
0x92,0xf1,0xd9,0xac,0x61,0xeb,0x30,0x08,0x19,0x5a,
0x86,0x27,0xe4,0x60 };
/* font data size: 3790 bytes */

static const unsigned char athens_classic_index[] = {
0xa4,0x2a,0x46,0xa4,0xca,0x52,0xa5,0xfa,0x73,0xa9,
0x1a,0xa2,0xaa,0x7a,0xb2,0xab,0xda,0xc8,0xad,0x1a,
0xd6,0xad,0xca,0xe0,0xae,0xfa,0xfa,0xb0,0x3b,0x16,
0xb2,0x7b,0x37,0xb4,0x5b,0x54,0xb6,0x1b,0x6e,0xb7,
0xdb,0x83,0xb8,0xab,0x96,0xb9,0xfb,0xab,0xbb,0xcb,
0xd8,0xbe,0x6b,0xf4,0xc0,0x1c,0x0d,0xc1,0xdc,0x2b,
0xc3,0x9c,0x46,0xc4,0xec,0x57,0xc7,0x0c,0x7c,0xc8,
0xdc,0x9a,0xca,0x5c,0xb3,0xcc,0x0c,0xcf,0xcd,0xfc,
0xec,0xcf,0x8d,0x06,0xd1,0x8d,0x2a,0xd3,0x9d,0x49,
0xd5,0x1d,0x60,0xd6,0x8d,0x6e,0xd7,0x3d,0x78,0xd8,
0x6d,0x93,0xd9,0xed,0xab,0xdb,0x7d,0xc1,0xdc,0xfd,
0xdd,0xde,0x6d,0xf0,0xe0,0x2e,0x0a,0xe1,0x7e,0x21,
0xe2,0xae,0x37,0xe4,0x4e,0x4f,0xe5,0xde,0x66,0xe6,
0xfe,0x7c,0xe8,0x8e,0x96,0xea,0x4e,0xb1,0xeb,0x9e,
0xbf,0xec,0x70 };
/* font index size: 143 bytes */

const craft::packedbdf_t athens_classic = {
	athens_classic_index,
	0,
	athens_classic_data,
	1,
	0,
	32,
	126,
	0,
	0,
	12,
	5,
	5,
	3,
	5,
	5,
	22,
	14
};