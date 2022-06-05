#pragma once

#include "display/PackedBDF.h"

static const unsigned char westington_data[] = {
0x02,0x20,0x14,0x07,0x40,0x11,0xa9,0x18,0x13,0x90,
0x0a,0x42,0x19,0xb2,0x40,0x15,0x40,0x2c,0x32,0x02,
0x53,0xff,0x02,0x40,0xd0,0x7f,0xca,0x40,0x90,0x13,
0x00,0x0f,0x67,0xe0,0x20,0xfa,0x24,0xb4,0x1f,0x04,
0xa4,0xb4,0x9f,0x04,0x00,0x0f,0x40,0x20,0x0c,0x89,
0xd0,0x92,0x04,0x09,0x0b,0x91,0x30,0x00,0x11,0x40,
0x24,0xe1,0x11,0x0d,0x03,0x02,0x4d,0x12,0x86,0x61,
0x1f,0x40,0x02,0x42,0x09,0x40,0x07,0x40,0x10,0x61,
0x54,0x84,0x20,0x07,0x40,0x11,0x21,0x51,0x84,0x80,
0x06,0x61,0xd1,0x49,0x40,0x0e,0xe0,0x60,0x70,0x21,
0x25,0xfd,0x24,0x20,0x70,0x04,0x47,0xcc,0xb0,0x0c,
0x60,0xdd,0x03,0xf0,0x20,0x02,0x20,0x09,0x09,0x40,
0x14,0x61,0x92,0x94,0x43,0x00,0x0b,0x00,0x18,0xeb,
0x8b,0x27,0x00,0x0b,0x00,0x18,0x43,0x14,0xa2,0x3e,
0x0b,0x00,0x18,0xe4,0x59,0x24,0x21,0x08,0x7c,0x0b,
0x00,0x18,0xe4,0x41,0x38,0x14,0x59,0x38,0x0b,0x00,
0x18,0x21,0x8a,0x69,0xf8,0x10,0xe0,0x0b,0x00,0x19,
0xf4,0x18,0x7a,0x02,0xc9,0xc0,0x0b,0x00,0x18,0xe4,
0x58,0x7a,0x22,0xc9,0xc0,0x0b,0x00,0x19,0xf0,0x42,
0x3c,0x28,0x20,0x80,0x0b,0x00,0x18,0xe4,0x59,0x7e,
0x22,0xc9,0xc0,0x0b,0x00,0x18,0xe8,0x8b,0x27,0x82,
0x89,0xc0,0x07,0x40,0x10,0x9c,0xa8,0x13,0x90,0x07,
0x87,0x90,0x9c,0xac,0x1c,0x12,0x0c,0xe0,0x5c,0x08,
0x73,0x08,0x0c,0x07,0x02,0x0c,0x80,0xdd,0x03,0xf0,
0x0f,0xc0,0x0c,0xe0,0x5d,0x03,0x80,0xc0,0x43,0x38,
0x40,0x0b,0x40,0x18,0xe4,0x59,0x0a,0x08,0x00,0x87,
0x08,0x11,0x40,0x24,0x78,0x42,0x5c,0xa1,0x57,0xab,
0x55,0xf3,0x00,0xc4,0x3c,0x0f,0x20,0x20,0x20,0x50,
0x88,0xc8,0xfa,0x51,0x3b,0x80,0x0f,0x20,0x21,0xf0,
0x88,0x84,0xc4,0xfa,0x10,0x99,0x3e,0x00,0x0d,0x20,
0x1c,0xf4,0x43,0x30,0x21,0x62,0x78,0x0d,0x20,0x1d,
0xe1,0x2b,0x44,0xd3,0xc0,0x0f,0x20,0x21,0xfc,0x84,
0x80,0x84,0xfc,0x84,0x80,0xc5,0xfc,0x0d,0x20,0x1d,
0xf9,0x12,0x04,0x4f,0x91,0x84,0x1c,0x00,0x0d,0x20,
0x1c,0xf3,0x38,0x81,0x7a,0x94,0x2c,0xcf,0x00,0x0f,
0x20,0x21,0xde,0x51,0x1f,0x4a,0x27,0x70,0x07,0x20,
0x11,0xf5,0x38,0x0d,0x20,0x1c,0x3d,0x84,0x89,0x91,
0xc0,0x0f,0x20,0x21,0xdc,0x88,0x90,0xa0,0xc0,0xa0,
0x90,0x89,0xdc,0x0f,0x20,0x21,0xc3,0x10,0x10,0xbf,
0x80,0x17,0x20,0x31,0xc1,0xcc,0x1a,0x14,0x54,0x25,
0x28,0x44,0x4e,0xee,0x11,0x20,0x25,0xce,0x62,0x85,
0x29,0x4a,0x23,0x39,0xc0,0x0d,0x20,0x1c,0xf6,0x42,
0xc4,0xf0,0x0d,0x20,0x1d,0xe1,0x28,0x44,0xd1,0xc8,
0x41,0xc0,0x0f,0x20,0x20,0xf2,0x61,0x29,0x25,0x23,
0x31,0x1e,0x80,0x0f,0x20,0x21,0xe0,0x92,0x11,0x1a,
0x1c,0x12,0x11,0x3b,0x80,0x0d,0x20,0x1c,0xf4,0x42,
0xc0,0xf0,0x14,0x2c,0x4f,0x00,0x0f,0x20,0x21,0xfd,
0x27,0x04,0x0e,0x00,0x11,0x20,0x25,0xcf,0x88,0x46,
0x21,0xe0,0x13,0x20,0x29,0xc7,0x84,0x14,0x91,0x20,
0x50,0x08,0x00,0x17,0x20,0x31,0xc1,0xc9,0xc8,0x88,
0x8c,0x88,0x49,0x20,0xaa,0x0e,0xe0,0x44,0x00,0x0f,
0x20,0x21,0xde,0x11,0x0a,0x04,0x0a,0x42,0x27,0x70,
0x0f,0x20,0x21,0xdc,0x88,0xca,0x0a,0x48,0x81,0xc0,
0x0f,0x20,0x21,0xfd,0x04,0x08,0x10,0x20,0x40,0x81,
0x85,0xfc,0x07,0x20,0x11,0xf2,0x33,0x80,0x09,0x40,
0x15,0x88,0x94,0x92,0x08,0xc0,0x07,0x20,0x11,0xf4,
0xb8,0x06,0x61,0x90,0x95,0x40,0x0e,0x40,0x21,0x01,
0xfc,0x04,0x42,0x0d,0x90,0x0c,0xc0,0x1c,0xe0,0x23,
0xc8,0x99,0x1f,0x0d,0x20,0x1d,0xc4,0xa0,0x7a,0x11,
0x32,0xf8,0x0c,0xc0,0x1c,0xf2,0x18,0x81,0x89,0xe0,
0x0d,0x20,0x1c,0x3c,0x84,0x7a,0x22,0x64,0x7c,0x0c,
0xc0,0x1c,0xf2,0x16,0x2f,0x90,0x1e,0x0b,0x20,0x18,
0x62,0x61,0x0f,0x4a,0x1c,0x0b,0x27,0x98,0xf9,0x8b,
0x27,0x82,0x89,0xc0,0x0f,0x20,0x21,0xc2,0x50,0x1e,
0x42,0x23,0x27,0x70,0x06,0xe0,0x10,0x81,0xa5,0x18,
0x07,0x07,0xd0,0x42,0xcb,0x00,0x0d,0x20,0x1d,0xc1,
0x02,0x64,0x8e,0x18,0x28,0x49,0xd8,0x09,0x20,0x15,
0x9a,0x8f,0x16,0xc0,0x31,0x80,0x0f,0xf2,0x11,0x11,
0x91,0x3b,0xb8,0x0e,0xc0,0x21,0x80,0xf2,0x11,0x19,
0x3b,0x80,0x0a,0xc0,0x18,0xe9,0x8b,0x27,0x00,0x0d,
0x07,0x9d,0xf4,0x22,0x64,0xf4,0x20,0xe0,0x0d,0x07,
0x9c,0xfc,0x44,0xc8,0xf4,0x04,0x1c,0x0a,0xc0,0x19,
0xb3,0x25,0x0e,0x00,0x0a,0xc0,0x18,0xe4,0x0e,0x05,
0x93,0x80,0x0b,0x20,0x19,0xc8,0x43,0xd2,0x83,0x47,
0x0e,0xc0,0x21,0x9a,0x51,0x19,0x0f,0x80,0x0e,0xc0,
0x21,0xde,0x11,0x41,0x40,0x80,0x16,0xc0,0x31,0xc1,
0xc9,0xc8,0xc8,0x84,0xd0,0x55,0x02,0x20,0x0e,0xc0,
0x21,0xdc,0x88,0x50,0x70,0x89,0xdc,0x0f,0x07,0xa1,
0xde,0x11,0x19,0x0f,0x01,0x11,0x0e,0x00,0x0c,0xc0,
0x1d,0xfa,0x20,0x82,0x0c,0xbf,0x0b,0x20,0x18,0x72,
0x61,0x08,0x42,0x0d,0x1c,0x03,0x20,0x0b,0x6a,0x0b,
0x20,0x19,0xc4,0xa0,0x40,0xc0,0x92,0x70,0x0e,0x60,
0xe0,0xcd,0x25,0x98 };
/* font data size: 78979 bytes */

static const unsigned char westington_index[] = {
0x98,0xa5,0xcc,0x53,0xa6,0x2a,0xb3,0x15,0xa9,0x8b,
0x54,0xc5,0xe2,0x63,0x0b,0x31,0x93,0x98,0xcb,0xcc,
0x67,0xa6,0x34,0xb3,0x1a,0xa9,0x8d,0xa4,0xc6,0xe2,
0x63,0x7d,0x31,0xc1,0x98,0xe4,0xcc,0x74,0x26,0x3a,
0xf3,0x1e,0x09,0x8f,0x4c,0xc7,0xca,0x63,0xf7,0x32,
0x04,0x99,0x06,0xcc,0x85,0xa6,0x43,0xf3,0x22,0x69,
0x91,0x6c,0xc8,0xda,0x64,0x7b,0x32,0x46,0x99,0x28,
0x4c,0x97,0xa6,0x4d,0x33,0x27,0x59,0x93,0xf4,0xca,
0x1a,0x65,0x25,0x32,0x9d,0x99,0x54,0x4c,0xac,0x66,
0x56,0xd3,0x2b,0xe9,0x96,0x54,0xcb,0x4a,0x65,0xbf,
0x32,0xea,0x99,0x78,0xcc,0xbe,0xe6,0x60,0xd3,0x31,
0x29,0x98,0xec,0xcc,0x96,0x66,0x5b,0x33,0x38,0x99,
0xa4,0x4c,0xd4,0xe6,0x6b,0xb3,0x36,0x99,0x9b,0x7c,
0xcd,0xde,0x66,0xf9,0x33,0x81,0x99,0xc3,0x4c,0xe2,
0xa6,0x72,0x53,0x39,0xb9,0x9d,0x1c,0xce,0xb2,0x67,
0x69,0x33,0xbc,0x99,0xe2,0xcc,0xf3,0xe6,0x7a,0xb3,
0x3d,0xb9,0x9f,0x34,0xcf,0xae,0x67,0xed,0x33,0xff,
0x9a,0x03,0x4d,0x03,0xe6,0x83,0x13,0x41,0xf9,0xa1,
0x3c,0xd0,0xbe,0x68,0x6f,0x34,0x3f,0x9a,0x25,0xcd,
0x15,0x26,0x8b,0xf3,0x46,0x79,0xa3,0x84,0xd1,0xd2,
0x68,0xfa };
/* font index size: 202 bytes */

const craft::packedbdf_t westington = {
	westington_index,
	0,
	westington_data,
	1,
	0,
	32,
	126,
	0,
	0,
	17,
	4,
	4,
	2,
	5,
	4,
	16,
	9
};