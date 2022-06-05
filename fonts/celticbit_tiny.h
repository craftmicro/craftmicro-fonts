#pragma once

#include "display/PackedBDF.h"

static const unsigned char celticbit_tiny_data[] = {
0x02,0x20,0x18,0x04,0xe0,0x1a,0xa4,0x10,0x0a,0x81,
0xb3,0x70,0x94,0x80,0x0e,0xe0,0x44,0x12,0x7f,0x12,
0x7f,0x24,0x24,0x0e,0xe0,0x40,0x41,0xf3,0x41,0xf0,
0x5b,0xf0,0x40,0x0a,0xe0,0x34,0x6a,0x48,0x59,0x60,
0x0c,0xe0,0x39,0x84,0x8b,0x0c,0xa6,0x44,0x74,0x04,
0x81,0x9b,0x85,0x00,0x06,0xe0,0x20,0x94,0xc2,0x10,
0x06,0xe0,0x22,0x14,0x92,0x40,0x0a,0xa1,0x32,0xa7,
0x3e,0x72,0xa0,0x0a,0xa0,0xb0,0x82,0x9c,0xa0,0x80,
0x04,0x67,0x1b,0x28,0x08,0x21,0x2b,0xc0,0x02,0x20,
0x12,0x06,0xe0,0x24,0x19,0x48,0x80,0x0c,0xe0,0x38,
0xc2,0x49,0x62,0x92,0x43,0x00,0x08,0xe0,0x28,0x8c,
0xa9,0x27,0x80,0x0a,0xe0,0x31,0xc8,0x82,0x72,0x08,
0xbc,0x0a,0xe0,0x33,0xe8,0x8d,0x01,0x44,0xe0,0x0c,
0xe0,0x38,0x41,0x85,0x12,0xbe,0x08,0x10,0x0a,0xe0,
0x30,0xe4,0x20,0x70,0x2c,0x8c,0x0a,0xe0,0x30,0xc4,
0x20,0xb3,0x28,0x9c,0x0a,0xe0,0x33,0xf0,0x10,0xa0,
0x82,0x00,0x0a,0xe0,0x31,0xd1,0x13,0xa2,0x27,0x00,
0x0a,0xe0,0x31,0xd1,0x13,0xc1,0x08,0xc0,0x02,0xa0,
0x94,0x45,0x04,0xe7,0x1c,0x30,0x42,0x80,0x08,0xe0,
0x28,0x44,0x44,0x10,0x41,0x08,0x61,0x2b,0xc0,0xf0,
0x08,0xe0,0x2a,0x08,0x20,0x88,0x88,0x0a,0xe0,0x31,
0xc8,0x82,0x10,0x80,0x08,0x0e,0xe0,0x40,0xf1,0x0a,
0x4a,0xaa,0x71,0x00,0xf8,0x0e,0xe0,0x43,0x01,0x81,
0x41,0x22,0x73,0x92,0x08,0x0c,0xe0,0x3a,0xe6,0x28,
0x57,0x31,0x42,0xf8,0x0c,0xe0,0x38,0xe2,0x28,0x62,
0x02,0x23,0x80,0x0c,0xe0,0x3a,0xe6,0x35,0x0b,0xe0,
0x0e,0xe0,0x40,0xf1,0x0a,0x03,0xf2,0x01,0x08,0xf0,
0x0d,0x27,0x3b,0xf2,0x24,0x0f,0x52,0x08,0x00,0x0f,
0x07,0xc0,0xe9,0x1a,0x12,0x02,0x09,0x18,0xe8,0x10,
0x0d,0x07,0xbb,0x38,0x44,0x99,0xd8,0x44,0x10,0x04,
0xe0,0x1b,0xb4,0x80,0x05,0x27,0x1b,0xd5,0x00,0x0e,
0xe0,0x43,0x11,0x11,0x21,0x41,0xa1,0x11,0x08,0x0d,
0x07,0xbb,0x0a,0x40,0x89,0xf0,0x20,0x16,0xe0,0x62,
0xef,0x31,0x0d,0x42,0x14,0x22,0x0c,0xe0,0x3a,0xe6,
0x35,0x0a,0x20,0x0e,0xe0,0x40,0xe1,0x14,0xc1,0x22,
0x1c,0x0f,0x27,0x43,0x61,0x94,0xa1,0x32,0x2c,0x20,
0x40,0x11,0x27,0xc8,0xe0,0x89,0x30,0x49,0x22,0x60,
0xe4,0x0c,0x0e,0xe0,0x42,0xe3,0x12,0x12,0xe3,0x42,
0x22,0x18,0x0c,0xe0,0x39,0xc4,0x68,0x0f,0x01,0x62,
0x38,0x10,0xe0,0x4b,0xf9,0x23,0x04,0x02,0x10,0x88,
0x38,0x10,0xe0,0x4b,0x18,0x85,0x30,0x44,0x61,0xd8,
0x0e,0xe0,0x43,0x1d,0x21,0x12,0x0c,0x18,0xe0,0x6b,
0x31,0x88,0x85,0x30,0x84,0x4a,0x61,0x8d,0x80,0x10,
0xe0,0x4b,0x8c,0x29,0x01,0x01,0x81,0x23,0x0c,0x0f,
0x46,0xc3,0x99,0x0c,0xc1,0x23,0x1d,0x01,0x06,0x08,
0x0e,0xe0,0x43,0xfa,0x10,0x60,0x81,0x02,0x0b,0xf8,
0x06,0xe0,0x23,0xdc,0x70,0x06,0xe0,0x24,0x49,0x42,
0x20,0x06,0xe0,0x23,0xd9,0x70,0x0a,0x62,0x30,0x85,
0x22,0x0a,0x20,0x33,0xe0,0x04,0x62,0x1c,0x44,0x0c,
0xa0,0x39,0xd4,0x68,0x51,0x9d,0x0e,0xc0,0x43,0x01,
0x71,0x8c,0x21,0x1e,0x0a,0xa0,0x31,0xc8,0xa0,0x89,
0xc0,0x0e,0xc0,0x40,0x19,0xd2,0x32,0x12,0x31,0xd0,
0x0a,0xa0,0x31,0xc8,0xbc,0x81,0xe0,0x0b,0x27,0x30,
0xc4,0x90,0xf5,0x21,0x00,0x0c,0xe7,0x39,0xd4,0x68,
0x51,0x9d,0x42,0x78,0x0e,0xe0,0x43,0x01,0x01,0x71,
0x89,0x09,0x11,0x38,0x04,0xe0,0x19,0x0e,0x52,0x05,
0x27,0x19,0x0e,0xd4,0x0e,0xe0,0x43,0x04,0x24,0x38,
0x28,0x24,0x23,0x08,0xe0,0x2b,0x29,0x0a,0x20,0x14,
0xa0,0x5b,0xee,0x94,0x45,0xc9,0x00,0x0e,0xa0,0x42,
0xf4,0xa1,0x62,0x0c,0xa0,0x39,0xe9,0x84,0xf0,0x0e,
0xe7,0x43,0x71,0x89,0x09,0x89,0x71,0x02,0x00,0x0e,
0xe7,0x41,0xda,0x34,0x42,0x3e,0x02,0x01,0x0c,0xa0,
0x3a,0xe6,0x28,0x5f,0x23,0x0c,0xe7,0xb8,0x13,0xe8,
0x0f,0x01,0x7c,0x80,0x0a,0xe0,0x30,0x84,0x3d,0x08,
0x24,0x60,0x0e,0xa0,0x43,0x19,0x12,0x12,0x31,0xd8,
0x0e,0xa0,0x43,0x19,0x09,0x10,0xa0,0x40,0x12,0xa0,
0x53,0x26,0x48,0xa2,0x29,0x49,0x8c,0x0e,0xa0,0x43,
0x18,0xa0,0x40,0xa3,0x18,0x0c,0xe7,0x3b,0x32,0x22,
0x43,0x81,0x22,0x38,0x0c,0xa0,0x3b,0xf0,0x41,0x04,
0x3f,0x08,0xe0,0x28,0xe1,0x11,0x08,0x30,0x02,0xe0,
0x16,0x50,0x08,0xe0,0x2b,0x20,0x83,0x04,0xc0,0x0e,
0x62,0x41,0x8a,0x4a,0x30 };
/* font data size: 715 bytes */

static const unsigned char celticbit_tiny_index[] = {
0x00,0x00,0x30,0x20,0x0e,0x05,0xc2,0x10,0xa0,0x31,
0x0d,0x83,0xc1,0x08,0x49,0x14,0x05,0x41,0x60,0x5b,
0x18,0x46,0xa1,0xc4,0x79,0x20,0x48,0xa2,0x48,0x9a,
0x28,0x8a,0xa2,0xc8,0xb6,0x2f,0x0c,0x33,0x20,0xcf,
0x35,0xce,0x13,0xac,0xf4,0x3f,0x50,0x44,0x39,0x17,
0x48,0x92,0xb4,0xc1,0x35,0x4f,0xd4,0x75,0x41,0x57,
0x57,0xd6,0x95,0xd1,0x7e,0x61,0xd9,0x16,0x69,0xa1,
0x6b,0x5b,0x77,0x09,0xcc,0x74,0x5d,0x77,0x71,0xe1,
0x79,0x5e,0x97,0xc1,0xf8,0x7f,0xe0,0x88,0x3e,0x17,
0x88,0x22,0xa8,0xbe,0x34,0x8f,0x64,0x39,0x2e,0x51,
0x95,0xe6,0x19,0xaa,0x71,0x9e,0xa8,0x2a,0x2a,0x92,
0xa6,0xea,0x3a,0xb2,0xb3,0xae,0xab,0xeb,0x14 };
/* font index size: 119 bytes */

const craft::packedbdf_t celticbit_tiny = {
	celticbit_tiny_index,
	0,
	celticbit_tiny_data,
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
	12,
	7
};
