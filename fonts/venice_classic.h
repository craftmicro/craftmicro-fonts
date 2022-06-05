#pragma once

#include "display/PackedBDF.h"

static const unsigned char venice_classic_data[] = {
0x02,0x20,0x0a,0x00,0x05,0x48,0x0b,0xb8,0x6c,0x08,
0x68,0xf1,0x12,0x90,0x11,0x00,0x53,0x02,0x47,0xf8,
0x24,0x7f,0x12,0x09,0x00,0x0b,0x67,0xf0,0x21,0xca,
0xa8,0xe1,0xc3,0x8a,0xa9,0xc2,0x00,0x13,0x44,0x18,
0x6f,0xa4,0x69,0x32,0x58,0x6c,0x07,0xc3,0x49,0x92,
0xc4,0xa0,0xc0,0x17,0x44,0x1a,0x38,0x04,0x40,0x4c,
0x03,0x80,0x31,0xc6,0xb2,0xc6,0x28,0x64,0x8d,0x07,
0x8c,0x02,0x68,0xeb,0x14,0x09,0x87,0xee,0x11,0x18,
0x95,0x84,0x30,0x82,0x09,0x8b,0xee,0x82,0x18,0x54,
0x62,0x31,0x10,0x0c,0xa8,0xd4,0x48,0x63,0xf1,0x84,
0x80,0x0e,0xe4,0x53,0x22,0x1f,0xe0,0x40,0x40,0x04,
0x8b,0xcd,0x19,0x40,0x0e,0x24,0xb2,0xfe,0x04,0x48,
0x0c,0xd8,0x0d,0x67,0xf0,0x04,0x18,0x20,0xc1,0x06,
0x08,0x30,0x41,0x82,0x00,0x0d,0x44,0x10,0x7b,0x73,
0x66,0x78,0x09,0x48,0x10,0x23,0x3b,0x19,0xe0,0x0f,
0x40,0x10,0x3c,0x46,0x86,0x06,0x0c,0x18,0x30,0x60,
0xc2,0xfc,0x0f,0x40,0x10,0x7e,0x8c,0x18,0x30,0x7c,
0x06,0x46,0x86,0x8c,0x78,0x11,0x40,0x12,0x04,0x06,
0x07,0x05,0x84,0xc4,0x6b,0xfa,0x03,0x03,0xc0,0x0d,
0x44,0x10,0xf9,0x8b,0x07,0x81,0xa4,0x34,0xc7,0x00,
0x0d,0x44,0x10,0x38,0x8b,0x06,0xce,0xeb,0x33,0xc0,
0x0f,0x40,0x10,0x7e,0x86,0x07,0x01,0xa0,0x64,0x18,
0x18,0x0d,0x44,0x10,0x7a,0x73,0x3d,0x59,0x9e,0x0d,
0x44,0x10,0x7a,0xb3,0x6e,0x6c,0x1a,0x23,0x80,0x04,
0xe8,0x0b,0x1c,0x8d,0x80,0x05,0x2b,0xcb,0x1c,0x91,
0x94,0x0a,0xe4,0x2e,0x18,0xc6,0x30,0x60,0xc1,0x80,
0x0c,0x64,0x70,0xfc,0x03,0xf0,0x0a,0xe4,0x2e,0xc1,
0x83,0x06,0x31,0x8c,0x00,0x0d,0x44,0x12,0x79,0x1c,
0x06,0x18,0x60,0x80,0x02,0x04,0x00,0x1b,0x60,0x1a,
0x01,0xc0,0x09,0x80,0x06,0x00,0x38,0x01,0xe0,0x0d,
0x80,0x66,0x1f,0xf8,0x98,0x60,0xc1,0x8e,0x03,0x80,
0x13,0x60,0x14,0x10,0x1f,0x91,0x66,0x19,0x87,0xca,
0x31,0xbf,0xc0,0x0f,0x40,0x10,0x7d,0x18,0x58,0xa7,
0x03,0x0b,0x11,0xe0,0x15,0x60,0x16,0x10,0x0f,0xe2,
0xc6,0x58,0x76,0x61,0x8c,0x27,0xf8,0x15,0x60,0x14,
0x10,0x0f,0xf2,0xc2,0x58,0x03,0x00,0x7c,0x41,0x80,
0x30,0x46,0x13,0xfc,0x13,0x60,0x12,0x10,0x1f,0xeb,
0x0a,0xc0,0x30,0x0f,0x94,0x60,0x70,0x00,0x15,0x40,
0x14,0x3f,0x0c,0x23,0x08,0x60,0x0c,0xf2,0x30,0xc6,
0x3a,0xcb,0x8e,0x60,0x19,0x60,0x18,0x00,0xe3,0x8c,
0x45,0x8c,0x0c,0x60,0xff,0x0b,0x18,0x18,0xc0,0xc6,
0x46,0x34,0xe1,0xc0,0x11,0x40,0x10,0x78,0x89,0x8a,
0x18,0x0c,0x86,0x83,0x80,0x0b,0xc3,0x8e,0x7c,0x4f,
0x46,0x18,0x42,0x30,0x19,0x40,0x18,0x70,0xc5,0x8c,
0x2c,0xc0,0x6c,0x03,0xc0,0x1c,0x00,0xf0,0x06,0xc2,
0x33,0x27,0x0e,0x00,0x13,0x40,0x12,0x38,0x63,0x00,
0xc1,0x30,0x9f,0xc0,0x1d,0x40,0x1c,0x70,0x71,0x71,
0xc2,0xf5,0x81,0x73,0x02,0x46,0x20,0x81,0x81,0x03,
0x22,0x06,0x98,0x0e,0x00,0x17,0x40,0x18,0x70,0x6b,
0x84,0xbc,0x42,0xe4,0x27,0x42,0x3c,0x21,0xc2,0x0c,
0x20,0x4c,0x04,0x11,0x40,0x12,0x3c,0x23,0x5e,0x1b,
0x08,0x88,0x38,0x13,0x40,0x14,0x7f,0x45,0x8e,0x0c,
0x63,0xf4,0x98,0x1c,0x00,0x11,0x83,0xd2,0x3c,0x23,
0x5e,0x1b,0x4c,0x94,0x3c,0x02,0x00,0x80,0x19,0x60,
0x18,0x10,0x03,0xf8,0x45,0x8c,0x41,0x8c,0x0f,0xc0,
0x6c,0x03,0x30,0x18,0xcb,0x83,0x80,0x0f,0x40,0x10,
0x7c,0xc2,0xe4,0x70,0x38,0x1c,0x4e,0x86,0xc6,0x7c,
0x13,0x40,0x12,0x7f,0xc4,0x63,0x03,0x03,0x80,0x17,
0x40,0x16,0x61,0x8e,0x19,0x4c,0x30,0xc7,0x0c,0xb4,
0xd3,0x86,0x30,0x13,0x40,0x14,0x61,0x38,0xf2,0xc3,
0x31,0x8c,0xc3,0x60,0xf0,0x38,0x00,0x19,0x40,0x1a,
0x60,0x27,0x03,0xc3,0x01,0x98,0x8c,0xcc,0x66,0xe6,
0x3b,0x61,0x9e,0x08,0xe0,0x1b,0x40,0x1a,0x60,0x32,
0xc1,0x89,0x8c,0x03,0x61,0x00,0xe0,0x06,0xc0,0x31,
0x91,0x83,0x4c,0x06,0x13,0xc3,0x94,0x61,0xb8,0x76,
0xc3,0x31,0xcc,0xb1,0xcc,0x03,0x00,0x80,0x40,0xe0,
0x13,0x40,0x12,0x7f,0x20,0xc8,0x60,0x30,0x18,0x0c,
0x06,0x03,0x02,0xc1,0x3f,0x80,0x09,0x87,0xec,0xfd,
0xc9,0xc7,0x80,0x0d,0x67,0xf0,0x81,0x81,0x03,0x02,
0x06,0x04,0x0c,0x08,0x18,0x10,0x09,0x87,0xec,0xfd,
0x39,0x37,0x80,0x0a,0x64,0xd0,0x21,0x48,0x80,0x12,
0x20,0x12,0xff,0x80,0x06,0x65,0x0a,0x84,0x20,0x12,
0xe0,0x12,0x7e,0x4e,0x31,0x9d,0x6b,0x8c,0xc0,0x0f,
0x60,0x10,0x71,0x38,0x1b,0x9c,0xe7,0x1b,0x33,0xe0,
0x0c,0xe0,0x0e,0x7d,0x8c,0x60,0xc5,0x91,0xc0,0x15,
0x60,0x14,0x03,0x24,0x18,0x3f,0x13,0x8c,0x33,0x96,
0xb4,0x67,0x00,0x0e,0xe0,0x0e,0x7c,0xc4,0xc8,0xd0,
0xe2,0xc4,0x78,0x0d,0xe3,0x8e,0x1e,0x4c,0x3d,0xa6,
0x0c,0x10,0xc0,0x0f,0x63,0x90,0x7f,0x38,0xd9,0xda,
0xcc,0xc0,0xc0,0x81,0x06,0x00,0x13,0x60,0x12,0x70,
0x4e,0x01,0x9c,0x6b,0x1c,0xc6,0x31,0x8d,0x63,0x98,
0xc0,0x0d,0x40,0x0c,0x20,0x80,0x03,0x0e,0x21,0x83,
0x26,0x8e,0x00,0x09,0xc3,0x8c,0x11,0x00,0x67,0x5d,
0x98,0x88,0x80,0x13,0x60,0x12,0x70,0x4e,0x01,0xb0,
0x72,0x18,0x87,0xc1,0xb1,0x66,0x98,0xc0,0x0b,0x60,
0x0a,0x76,0xe1,0x96,0x9c,0x1e,0xe0,0x1e,0x67,0x38,
0xeb,0x58,0x73,0x98,0x63,0x18,0x63,0x1a,0x63,0x1c,
0x63,0x18,0x14,0xe0,0x14,0x67,0x1d,0x61,0xcc,0x31,
0x86,0x34,0xc7,0x18,0xc0,0x0e,0xe0,0x10,0x7d,0x58,
0xd9,0x8f,0x00,0x11,0x63,0x92,0x6e,0x79,0xcb,0x19,
0x98,0xf9,0x2c,0x0c,0x00,0x11,0x63,0x90,0x7e,0x9c,
0x66,0x73,0x58,0xcd,0x00,0xc0,0x70,0x30,0x0c,0xe0,
0x0e,0x6d,0xe4,0xb0,0x70,0xc0,0x0c,0xe0,0x0e,0x79,
0x8b,0x03,0xc0,0xd1,0x9e,0x0d,0x20,0x0c,0x20,0xc3,
0xe9,0x60,0xc9,0xa3,0x80,0x14,0xe0,0x14,0x63,0x1c,
0x64,0x31,0x86,0x74,0xd7,0x0c,0xc0,0x10,0xe0,0x12,
0x42,0x73,0x98,0xcc,0x46,0x43,0x41,0xc0,0x1a,0xe0,
0x1c,0x42,0x13,0x9c,0xe6,0x31,0x99,0xc4,0x6b,0x21,
0xcd,0x06,0x38,0x00,0x14,0xe0,0x14,0x61,0x16,0x40,
0x70,0x06,0x01,0x60,0x46,0x90,0x60,0x11,0x63,0x92,
0x63,0x71,0xc3,0x19,0x9c,0xd6,0x33,0x01,0x80,0x80,
0x83,0x80,0x10,0xe0,0x10,0x7e,0x43,0x03,0x03,0x03,
0x03,0x0b,0xf8,0x09,0x87,0xce,0x3a,0x66,0x5b,0x0c,
0x03,0x8b,0xcb,0xba,0xa0,0x09,0x8b,0xce,0xca,0x61,
0xdb,0x30,0x0c,0x45,0x70,0x65,0x30 };
/* font data size: 77955 bytes */

static const unsigned char venice_classic_index[] = {
0x96,0x36,0x4b,0x1c,0x25,0x8e,0xb2,0xc7,0xa9,0x64,
0x2c,0xb2,0x46,0x59,0x43,0x2c,0xb3,0x96,0x5b,0xcb,
0x30,0x25,0x99,0x32,0xcd,0x19,0x66,0xcc,0xb3,0x7a,
0x59,0xc5,0x2c,0xe6,0x96,0x79,0xcb,0x3e,0xa5,0xa0,
0x32,0xd0,0xe9,0x68,0xdc,0xb4,0xa6,0x5a,0x69,0x2d,
0x3e,0x96,0xa4,0xcb,0x54,0x65,0xab,0x72,0xd6,0x19,
0x6b,0x3c,0xb5,0xc2,0x5a,0xed,0x2d,0x7f,0x96,0xc5,
0xcb,0x68,0xa5,0xb5,0xf2,0xdb,0xa9,0x6e,0x3c,0xb7,
0x62,0x5b,0xcd,0x2d,0xf6,0x97,0x05,0x4b,0x85,0x65,
0xc3,0xd2,0xe3,0x29,0x71,0xe4,0xb9,0x46,0x5c,0xc7,
0x2e,0x6d,0x97,0x3c,0xcb,0xa1,0xa5,0xd3,0x32,0xea,
0x69,0x75,0x7c,0xba,0xf6,0x5d,0x97,0x2e,0xdd,0x97,
0x78,0x4b,0xc0,0x25,0xe2,0x12,0xf1,0x79,0x79,0x24,
0xbc,0xae,0x5e,0x63,0x2f,0x36,0x97,0x9d,0xcb,0xd1,
0x65,0xea,0x12,0xf5,0x99,0x7b,0x3c,0xbd,0xc6,0x5e,
0xf7,0x2f,0x88,0x97,0xcb,0xcb,0xe8,0xe5,0xf5,0xb2,
0xfb,0xc9,0x7e,0x1c,0xbf,0x52,0x5f,0xc3,0x2f,0xe9,
0x97,0xfa,0xcc,0x00,0xa6,0x01,0x53,0x01,0x39,0x80,
0xec,0xc0,0xa6,0x60,0x69,0x30,0x44,0x98,0x28,0xcc,
0x18,0x26,0x0d,0x73,0x07,0x29,0x83,0xbc,0xc1,0xf8 };
/* font index size: 200 bytes */

const craft::packedbdf_t venice_classic = {
	venice_classic_index,
	0,
	venice_classic_data,
	1,
	0,
	32,
	63,
	65,
	126,
	17,
	4,
	4,
	3,
	5,
	4,
	19,
	11
};
