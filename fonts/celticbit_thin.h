#pragma once

#include "display/PackedBDF.h"

static const unsigned char celticbit_thin_data[] = {
0x02,0x20,0x18,0x05,0x00,0x1b,0xb4,0x10,0x0a,0xa1,
0xb3,0x72,0x94,0x80,0x13,0x00,0x51,0x98,0x23,0x8f,
0x8e,0x20,0x8e,0x3e,0x38,0x82,0x20,0x0f,0x27,0xc0,
0x41,0xe2,0x5a,0x41,0xf0,0x4b,0x48,0xf0,0x40,0x0a,
0xe0,0x34,0x6a,0x48,0x59,0x60,0x0d,0x00,0x39,0x84,
0x8b,0x0c,0xa6,0x88,0x8e,0x80,0x04,0xa1,0x9b,0x95,
0x00,0x07,0x00,0x20,0x95,0x42,0x10,0x07,0x00,0x22,
0x15,0x12,0x40,0x0e,0xe0,0xc0,0x41,0x50,0xe3,0xf8,
0xe1,0x50,0x40,0x0e,0xe0,0xc4,0x88,0x7f,0x81,0x01,
0x00,0x04,0x87,0x1b,0x85,0x00,0x0a,0x22,0x33,0xe0,
0x02,0x20,0x12,0x07,0x00,0x24,0x98,0x51,0x10,0x0f,
0x00,0x40,0xe1,0x12,0x2a,0x4a,0x8b,0x09,0x10,0xe0,
0x07,0x00,0x24,0x26,0xa4,0xe0,0x0f,0x00,0x41,0xf2,
0x08,0x08,0x31,0xc4,0x40,0x7f,0x0f,0x00,0x41,0xfa,
0x08,0x08,0xf4,0x01,0x41,0x3e,0x11,0x27,0xc8,0x20,
0x30,0x28,0x24,0x22,0x5f,0xd0,0x10,0x08,0x0f,0x00,
0x40,0xf9,0x02,0x03,0xf4,0x01,0x61,0x1e,0x0f,0x00,
0x40,0xf1,0x0a,0x03,0xf4,0xc1,0x3e,0x0d,0x00,0x3b,
0xf8,0x04,0x10,0x41,0x04,0x10,0x00,0x0f,0x00,0x41,
0xf4,0x41,0x46,0x39,0x88,0x27,0xc0,0x0f,0x00,0x41,
0xf4,0x41,0x43,0x3d,0x01,0x02,0x3c,0x04,0xa0,0x9b,
0x21,0x90,0x05,0x07,0x1b,0x30,0x38,0x50,0x09,0x00,
0x28,0x44,0x48,0x82,0x08,0x20,0x0a,0x81,0x33,0xf0,
0x07,0xc0,0x09,0x00,0x2a,0x08,0x28,0x11,0x11,0x00,
0x0f,0x00,0x40,0xf3,0x08,0x08,0x34,0x08,0x00,0x08,
0x13,0x00,0x50,0xf8,0x41,0x27,0x31,0x45,0x4f,0x88,
0x01,0xfc,0x11,0x00,0x48,0xe8,0x8d,0x50,0x44,0x61,
0xe8,0x0f,0x00,0x42,0xf3,0x0a,0x0a,0x12,0xf3,0x0a,
0x0b,0xf0,0x0f,0x00,0x40,0xe9,0x1d,0x40,0x21,0x1e,
0x0f,0x00,0x43,0xe1,0x95,0x41,0x22,0x1c,0x0f,0x00,
0x40,0xf1,0x0b,0xe4,0xc0,0x21,0x1e,0x0f,0x47,0x43,
0xf9,0x09,0x01,0xf5,0xa0,0x40,0x0f,0x47,0x40,0xe9,
0x1c,0xc0,0x41,0x23,0x1d,0x01,0x06,0x0f,0x47,0x43,
0x1c,0x21,0x27,0x39,0x94,0x20,0x20,0x40,0x05,0x00,
0x1b,0xc4,0x80,0x09,0x47,0x2b,0xf4,0x44,0x40,0x11,
0x00,0x4b,0x02,0x11,0x09,0x07,0x82,0x41,0x10,0x86,
0x0d,0x27,0xbb,0x0b,0x40,0x89,0xf0,0x20,0x17,0x00,
0x60,0xee,0x11,0x15,0x42,0x12,0x22,0x12,0x40,0x0f,
0x00,0x42,0xe3,0x15,0x41,0x42,0x44,0x11,0x00,0x48,
0xf0,0x85,0x50,0x24,0x21,0xe0,0x11,0x47,0x4b,0x70,
0xc5,0x28,0x26,0x22,0xe4,0x20,0x20,0x00,0x15,0x47,
0x58,0xf0,0x21,0x15,0x02,0x10,0x81,0xe0,0x42,0x40,
0x30,0x11,0x00,0x4a,0xf1,0x85,0x10,0x4b,0xc6,0x42,
0x11,0x06,0x0f,0x00,0x41,0xe2,0x1a,0x01,0xf4,0x01,
0x61,0x1e,0x13,0x00,0x53,0xfc,0x90,0xc9,0x00,0x41,
0x08,0x41,0xe0,0x13,0x00,0x53,0x0c,0x41,0x54,0x08,
0x86,0x1e,0xc0,0x11,0x00,0x4b,0x0e,0x90,0x44,0x21,
0x20,0x60,0x1d,0x00,0x7b,0x98,0x62,0x10,0x55,0x04,
0x11,0x1c,0x61,0xc7,0x60,0x15,0x00,0x5b,0x02,0x10,
0x81,0x22,0x43,0x00,0x90,0xe1,0xc0,0x11,0x66,0xcb,
0x8c,0x83,0x50,0x24,0x11,0xf8,0x05,0x82,0x3e,0x0f,
0x00,0x43,0xfa,0x0a,0x10,0x20,0xc1,0x0a,0x0b,0xf8,
0x07,0x00,0x23,0xe4,0x70,0x07,0x00,0x24,0xc8,0x50,
0x44,0x07,0x00,0x23,0xe1,0x70,0x0a,0x62,0xb0,0x85,
0x22,0x0a,0x20,0x33,0xe0,0x04,0x82,0x1c,0xc4,0x0e,
0xc0,0x41,0xea,0x1c,0x41,0x43,0x3d,0x11,0x00,0x4b,
0x00,0x80,0x5c,0x31,0x4a,0x08,0xf8,0x0c,0xc0,0x39,
0xe4,0x31,0x02,0x13,0xc0,0x0e,0xe0,0x43,0xe0,0xd1,
0x0c,0xc1,0x3e,0x0c,0xc0,0x39,0xe4,0x29,0x94,0x31,
0x3c,0x0f,0x47,0x40,0x70,0x8c,0x10,0x12,0x7e,0x92,
0x04,0x00,0x0f,0x07,0x41,0xea,0x1c,0xc1,0x3f,0x41,
0x3e,0x11,0x00,0x4b,0x00,0x80,0x5e,0x30,0xc2,0x09,
0x08,0x8e,0x05,0x00,0x19,0x0e,0x92,0x05,0x66,0x99,
0x0f,0x54,0x0f,0x00,0x43,0x04,0x22,0x24,0x38,0x28,
0x24,0x23,0x09,0x00,0x2b,0x2d,0x0a,0x20,0x18,0xc0,
0x6b,0x67,0x8c,0xc3,0x08,0x42,0x42,0x26,0x13,0x80,
0x10,0xc0,0x4b,0x78,0xc3,0x08,0x24,0x26,0x18,0x0e,
0xc0,0x41,0xf5,0x41,0x3e,0x11,0x26,0xcb,0x78,0xc3,
0x08,0x26,0x12,0xf4,0x20,0x10,0x00,0x11,0x26,0xc9,
0xed,0x0d,0x10,0x48,0x63,0xd4,0x01,0x00,0x80,0x0e,
0xc0,0x42,0xf3,0x0a,0x0b,0xf2,0x22,0x18,0x0e,0xc0,
0x41,0xe2,0x19,0xc0,0x33,0x08,0xf0,0x0d,0x00,0x38,
0x41,0x0f,0xe4,0x81,0x21,0x80,0x10,0xc0,0x4b,0x8c,
0x85,0x10,0x48,0x63,0xd8,0x10,0xc0,0x4b,0xce,0x10,
0x48,0x42,0x40,0xc0,0x18,0xc0,0x6b,0xc9,0x88,0x43,
0x10,0x42,0x85,0x23,0xc6,0x00,0x10,0xc0,0x4b,0x0c,
0x48,0x18,0x08,0x0a,0x18,0xc0,0x0f,0x26,0xc3,0x1c,
0x21,0x11,0x0f,0x01,0x21,0x11,0x0e,0x0e,0xc0,0x43,
0xfa,0x10,0x20,0x40,0x8b,0xf8,0x08,0xe0,0x28,0xe1,
0x11,0x08,0x30,0x03,0x00,0x16,0xd0,0x09,0x00,0x2b,
0x20,0x83,0x24,0xc0,0x0e,0x82,0x49,0x84,0x49,0x06 };
/* font data size: 13690 bytes */

static const unsigned char celticbit_thin_index[] = {
0xc9,0x43,0x25,0x3c,0x96,0x32,0x5e,0xc9,0xaf,0x27,
0x7c,0x9f,0xb2,0x88,0xca,0x37,0x29,0x3c,0xa6,0x72,
0xa3,0xca,0xaf,0x2b,0x0c,0xad,0x32,0xb7,0xca,0xf7,
0x2c,0x8c,0xb3,0xb2,0xd8,0xcb,0x8b,0x2e,0xec,0xbe,
0x33,0x01,0xcc,0x2f,0x31,0x5c,0xc7,0xf3,0x24,0xcc,
0xab,0x33,0x2c,0xce,0x33,0x40,0xcd,0x2b,0x35,0x6c,
0xd7,0xf3,0x6a,0xcd,0xcb,0x37,0xac,0xe0,0xf3,0x8c,
0xce,0x5f,0x3a,0x2c,0xe9,0xf3,0xad,0xce,0xe3,0x3c,
0x0c,0xf2,0xf3,0xd3,0xcf,0x73,0x3e,0x8c,0xfd,0x74,
0x00,0xd0,0x2b,0x41,0x5d,0x07,0xf4,0x28,0xd0,0xd7,
0x44,0x1d,0x13,0x74,0x58,0xd1,0x77,0x46,0x3d,0x1a,
0x34,0x6d,0xd1,0xc7,0x47,0x5d,0x1f,0x74,0x87,0xd2,
0x3f,0x49,0x7d,0x27,0xf4,0xaa,0xd2,0xcf,0x4b,0xed,
0x30,0xf4,0xc8,0xd3,0x4b,0x4d,0x8d,0x39,0x34,0xed,
0xd3,0xcf,0x4f,0xfd,0x42,0xf5,0x14,0xd4,0x77,0x52,
0x6d,0x4b,0xf5,0x38,0xd5,0x13,0x54,0xed,0x56,0x75,
0x62,0xd5,0xa7,0x56,0xdd,0x5d,0x00 };
/* font index size: 167 bytes */

const craft::packedbdf_t celticbit_thin = {
	celticbit_thin_index,
	0,
	celticbit_thin_data,
	1,
	0,
	32,
	126,
	0,
	0,
	14,
	4,
	4,
	2,
	4,
	4,
	14,
	8
};