#pragma once

#include "display/PackedBDF.h"

static const unsigned char heinzheinrich_data[] = {
0x01,0x10,0x08,0x00,0x02,0xa0,0x07,0x9a,0x0d,0x80,
0x05,0x41,0x8d,0x1b,0x25,0x20,0x09,0x60,0x54,0x33,
0x1f,0xe3,0x31,0x98,0xff,0x19,0x80,0x0a,0xe3,0x56,
0x02,0x04,0x99,0xff,0x72,0xc6,0x41,0xff,0x89,0x60,
0x2c,0x65,0x9e,0xba,0x7a,0x80,0x40,0x30,0x00,0x0d,
0xc3,0xdc,0x00,0x81,0xc6,0x11,0xb3,0x06,0xd8,0x0e,
0x60,0x03,0x38,0x0d,0xb8,0x0c,0xd8,0x31,0xc0,0x80,
0x00,0x0c,0xa0,0x1a,0x7d,0x86,0xb2,0x34,0x34,0xa9,
0xc7,0x8c,0x68,0xe3,0x4b,0x1a,0x5a,0x7c,0xd1,0xc3,
0x00,0x02,0x41,0x87,0x19,0x40,0x03,0xc3,0xc9,0x04,
0xb3,0x10,0x88,0x03,0xc3,0xc9,0x10,0xb1,0x92,0x20,
0x07,0x50,0x50,0x54,0x38,0xfe,0x38,0x54,0x05,0x50,
0x4d,0x04,0x7c,0x41,0x00,0x03,0x43,0x88,0x4e,0x64,
0x05,0x10,0xcc,0xf8,0x03,0x33,0xc8,0x4e,0x40,0x05,
0xc3,0xcc,0x0c,0x8e,0x0d,0x0c,0x9c,0x20,0x08,0xa0,
0x12,0x3c,0x33,0x66,0x19,0x98,0x78,0x06,0xa0,0x0e,
0x10,0x61,0xc7,0x96,0x63,0xf0,0x08,0xa0,0x12,0x7e,
0x63,0xb0,0xc0,0x60,0x61,0xe1,0x81,0xc2,0xff,0x5f,
0x00,0x08,0xa0,0x12,0x7e,0x63,0xb0,0xc0,0xc3,0xc0,
0x34,0x61,0xa1,0xcf,0xc0,0x08,0xa0,0x12,0x04,0x06,
0x07,0x05,0x84,0xc4,0x63,0xfe,0x03,0x07,0xe0,0x08,
0xa0,0x12,0xc1,0x7f,0x30,0x1f,0xc0,0xf0,0x3c,0x61,
0xa0,0x8f,0x80,0x08,0xa0,0x12,0x3c,0x21,0xb0,0xd8,
0x0f,0xc7,0x1c,0x61,0x90,0x87,0x80,0x08,0xa0,0x12,
0xb9,0x67,0xa1,0x80,0x40,0x40,0xc4,0x9c,0x04,0x00,
0x08,0xa0,0x12,0x7c,0x61,0x31,0x8f,0x83,0xe6,0x7c,
0x61,0x90,0x87,0x80,0x08,0xa0,0x12,0x7e,0x9c,0x36,
0x38,0xfc,0x06,0xc3,0x61,0x1f,0x00,0x03,0x73,0xc8,
0x4e,0x40,0x4e,0x40,0x03,0x83,0x88,0x4e,0x40,0x4e,
0x64,0x04,0x60,0x4a,0x11,0x30,0xc3,0x08,0x06,0x30,
0x8e,0xfc,0x03,0xf0,0x04,0x60,0x4a,0x82,0x0c,0xcc,
0x40,0x07,0xa0,0x10,0x3c,0x4e,0xe6,0x4e,0x1c,0x18,
0x10,0x00,0x18,0x18,0x0b,0xc3,0x98,0x1f,0x03,0x08,
0x62,0x4c,0xf2,0xc9,0x2c,0xb2,0xdd,0xc6,0x88,0x30,
0x01,0xf0,0x00,0x80,0x10,0x0c,0xe3,0x1a,0x19,0x01,
0x3c,0x09,0xc0,0x57,0x00,0xd8,0x0a,0x60,0x7f,0x20,
0xa3,0x8f,0x3e,0x80,0x28,0x84,0x03,0xc0,0x00,0x0a,
0xe3,0x16,0x07,0x8b,0x9c,0x1a,0x63,0x78,0xf9,0xad,
0x38,0x34,0xcf,0xf2,0x80,0x88,0x40,0xf0,0x00,0x09,
0xa0,0x14,0x18,0x98,0xcc,0xc4,0xed,0x1b,0x56,0x54,
0xc6,0x0f,0x00,0x0a,0xe3,0x16,0x80,0x0f,0xe0,0xd2,
0x1a,0x67,0x4c,0x69,0x9d,0x35,0xa6,0x34,0x8f,0xe2,
0x80,0x88,0x40,0xf0,0x00,0x0a,0xa0,0x16,0x18,0x8c,
0x63,0x30,0x6d,0x0d,0xbd,0xb5,0xb6,0x96,0x50,0x62,
0x83,0xe0,0x08,0xe3,0x12,0x0d,0x2f,0x8d,0x06,0xa7,
0xe5,0xa4,0x1a,0x0f,0x09,0xe8,0x08,0x84,0x3c,0x00,
0x0a,0xa0,0x16,0x18,0x8c,0x63,0x30,0x6d,0x0d,0xbe,
0x36,0xb6,0x54,0x63,0x03,0xc0,0x0a,0xe3,0x16,0x10,
0x86,0x79,0xd6,0x1a,0xc7,0xfd,0x6b,0x49,0xac,0x7d,
0xd2,0x94,0x42,0x07,0x80,0x08,0xe3,0x12,0x70,0x4d,
0x25,0x8a,0xd4,0x2c,0x17,0x3e,0x26,0x12,0x08,0x43,
0xc0,0x08,0xe3,0x12,0x70,0x4d,0x25,0x8b,0xc1,0xe1,
0xb1,0x58,0x2c,0x17,0x3e,0x26,0x12,0x08,0x43,0xc0,
0x0a,0xe3,0x16,0x22,0x0e,0x92,0xd6,0x1b,0x67,0x4d,
0x7a,0x2d,0xb1,0xa6,0x74,0xdb,0x9a,0x11,0x88,0x40,
0xf0,0x00,0x08,0xe3,0x12,0x05,0x0f,0x1d,0x24,0xd0,
0xe8,0x34,0x1a,0x9b,0x90,0x88,0x04,0x21,0xe0,0x0f,
0xe3,0x20,0x25,0x28,0x77,0xbc,0xbd,0xee,0x35,0xac,
0x3d,0xac,0x75,0xac,0xb5,0xad,0x06,0xb5,0x8b,0xbd,
0xd2,0x10,0x90,0x00,0x10,0x80,0x0f,0x00,0x00,0x0a,
0xe3,0x16,0x25,0x0e,0xf2,0xf7,0x83,0x58,0xeb,0x2d,
0x68,0x35,0x8a,0xba,0x52,0x88,0x40,0xf0,0x00,0x0a,
0xa0,0x16,0x09,0x06,0x61,0xba,0xad,0xac,0xb5,0x0c,
0xc0,0xf0,0x0a,0xe3,0x16,0x21,0x0e,0x72,0xdb,0x1e,
0x67,0x4e,0x2d,0x31,0xa6,0x35,0x8f,0xc2,0xc0,0x5a,
0x09,0x40,0xf0,0x00,0x0b,0xc3,0x98,0x09,0x03,0x30,
0x6e,0x95,0xb5,0x8b,0x54,0x66,0x43,0xcc,0x03,0x80,
0x10,0x0c,0xe3,0x1a,0x20,0x83,0x8c,0x2c,0xb0,0x69,
0xc7,0x50,0x5f,0x62,0xd3,0x06,0x98,0x34,0xd2,0xe3,
0x20,0x02,0x21,0x00,0xf0,0x00,0x0a,0xe3,0x16,0x20,
0xcf,0xfb,0xa6,0x34,0x0f,0xfc,0x4b,0x40,0x2c,0x75,
0xdb,0xd2,0x00,0x88,0x40,0xf0,0x00,0x09,0xa0,0x14,
0x78,0x27,0xa2,0xf1,0x69,0x1b,0x46,0xd5,0x95,0x31,
0x83,0xc0,0x0c,0xe3,0x1a,0x20,0x43,0xa7,0x2d,0x30,
0x69,0x87,0x4c,0x8b,0x4c,0x1a,0x60,0xd7,0x4b,0xdc,
0x80,0x48,0x84,0x03,0xc0,0x00,0x0a,0xe3,0x16,0x20,
0x8e,0x9a,0xd3,0x1a,0x67,0x4d,0x69,0xad,0x21,0xa8,
0x36,0x0b,0x84,0x40,0x08,0x40,0xf0,0x00,0x11,0xe3,
0x24,0x20,0x82,0x1d,0x34,0xcb,0x4d,0x38,0xd3,0x4c,
0x74,0xd3,0x45,0xa6,0x98,0x69,0xa6,0x1a,0xeb,0x8b,
0xdf,0x74,0x00,0x0a,0x21,0x00,0x07,0x80,0x00,0x0a,
0xe3,0x16,0x71,0x8f,0x72,0x34,0x06,0x83,0xf8,0x5a,
0x40,0x68,0x77,0x5c,0x72,0x00,0x88,0x40,0xf0,0x00,
0x0b,0xe3,0x18,0x20,0x87,0x4c,0xb4,0xe3,0x4c,0x74,
0xd1,0x69,0x86,0x98,0x6b,0x8b,0xd8,0x00,0x82,0x08,
0x21,0x01,0xe0,0x0a,0xe3,0x16,0x4f,0x87,0xf8,0x0b,
0x01,0x40,0x78,0x15,0xc0,0x16,0x3f,0x8f,0xe2,0x00,
0x88,0x40,0xf0,0x00,0x03,0xc3,0xc8,0xfb,0xa7,0x38,
0x05,0xc3,0xcc,0x84,0xe2,0x19,0x06,0x91,0x82,0x03,
0xc3,0xc8,0xfa,0xe5,0xb8,0x06,0x31,0xce,0x30,0xd3,
0x10,0x06,0x10,0x0e,0xfc,0x03,0x31,0xc8,0x8c,0x20,
0x08,0x83,0xd2,0x08,0x3f,0x4b,0x33,0xb8,0xee,0x22,
0x07,0xa3,0xd1,0x0c,0x0c,0x8d,0xce,0xe1,0x9b,0x99,
0xf1,0x00,0x06,0x83,0xce,0x04,0xfc,0xb0,0xe4,0x70,
0x40,0x07,0xa3,0xd0,0x18,0x0c,0x4c,0xec,0xdd,0x39,
0x8f,0xc0,0x80,0x07,0x83,0xd0,0x04,0x7e,0x66,0x68,
0x70,0xe2,0x3c,0x10,0x05,0xe3,0x0c,0x10,0xe6,0x1a,
0x73,0x9a,0xc2,0x00,0x08,0xa3,0x52,0x08,0x3f,0x19,
0xe1,0x99,0xdc,0x77,0x03,0x19,0x87,0x80,0x07,0xb3,
0x91,0x0c,0x0c,0x8d,0xce,0xe1,0x9b,0x99,0x99,0x10,
0x20,0x03,0xb3,0xc9,0x19,0x01,0xeb,0x39,0x00,0x04,
0xdf,0x49,0x0c,0x40,0x1e,0x98,0xe6,0x22,0x00,0x07,
0xa3,0xd1,0x0c,0x0c,0x8d,0xce,0xcc,0xcf,0x9c,0xcc,
0xc8,0x80,0x03,0xa3,0xc8,0x9b,0x9c,0x80,0x0c,0x83,
0xda,0x44,0x47,0x77,0x1d,0xda,0x19,0x99,0xcc,0xc7,
0x77,0x11,0x10,0x08,0x83,0xd2,0x44,0x77,0x9d,0xa1,
0x99,0xcc,0x77,0x11,0x00,0x07,0x83,0xd0,0x04,0x7f,
0x2c,0xdc,0xcf,0x84,0x00,0x08,0xb3,0x12,0x08,0x37,
0x3d,0xa5,0x99,0xfe,0x64,0x86,0x01,0x00,0x08,0xb3,
0x12,0x10,0x3b,0x1b,0xe5,0x99,0xfe,0x26,0x80,0x60,
0x20,0x06,0x83,0xce,0x49,0xf9,0xa8,0x61,0xc1,0xc1,
0x00,0x06,0x83,0xce,0x10,0xf3,0x06,0xee,0xc1,0x9e,
0x10,0x04,0xa3,0xca,0x28,0x67,0xd3,0x1c,0x40,0x08,
0x83,0xd2,0x44,0x77,0xcb,0x33,0xb8,0xee,0x22,0x07,
0x83,0xd0,0x44,0xef,0x2c,0xcd,0x8e,0x04,0x00,0x0c,
0x83,0xda,0x44,0x47,0x77,0xd3,0x33,0x0e,0xfc,0x22,
0x40,0x07,0x83,0xd0,0x24,0x76,0x34,0x38,0x70,0xb0,
0xb8,0x10,0x07,0xa3,0x50,0x44,0xef,0x2c,0xcd,0xce,
0xc4,0xc0,0x83,0x00,0x05,0xa3,0x4c,0x62,0xc3,0x18,
0x3c,0x0c,0x62,0x04,0x04,0xc3,0xca,0x23,0xcb,0x32,
0x98,0xe2,0x02,0xd3,0x86,0x77,0xad,0x00,0x04,0xc3,
0xca,0x47,0x4b,0x0e,0x99,0xc4,0x06,0x31,0xce,0x65,
0x70,0x40 };
/* font data size: 1222 bytes */

static const unsigned char heinzheinrich_index[] = {
0x00,0x00,0x10,0x05,0x01,0x00,0x36,0x0c,0x42,0x38,
0x5b,0x0c,0x01,0x9c,0x37,0x07,0x60,0xfa,0x20,0x84,
0x30,0x8b,0x12,0x82,0x74,0x53,0x0b,0x51,0x86,0x34,
0x46,0xf8,0xed,0x1f,0x44,0x20,0x8a,0x91,0xc2,0x46,
0x4a,0x89,0x81,0x37,0x28,0x85,0x64,0xb8,0x98,0x53,
0x26,0x6a,0x4d,0xd1,0xcc,0x3b,0x87,0xbc,0xff,0xa1,
0x24,0x50,0x8e,0x52,0xba,0x6b,0x4f,0x0a,0x39,0x4f,
0xab,0x85,0x9a,0xb7,0x17,0xa3,0x0a,0x65,0x2c,0xf9,
0xaa,0xb6,0xa6,0xe0,0xde,0x5b,0xfb,0x85,0x71,0x2e,
0x39,0xcc,0x3a,0x47,0x5a,0xee,0x5e,0x23,0xce,0x7b,
0x8f,0xa5,0xf8,0xbf,0xb8,0x11,0x03,0xa0,0xec,0x29,
0x86,0x71,0x02,0x26,0xc5,0x78,0xc3,0x1a,0x63,0x9c,
0x7d,0x91,0x32,0x52,0x50,0x4a,0xa9,0x65,0x2e,0x26,
0x00 };
/* font index size: 131 bytes */

const craft::packedbdf_t heinzheinrich = {
	heinzheinrich_index,
	0,
	heinzheinrich_data,
	1,
	0,
	32,
	126,
	0,
	0,
	11,
	5,
	4,
	2,
	4,
	5,
	16,
	10
};
