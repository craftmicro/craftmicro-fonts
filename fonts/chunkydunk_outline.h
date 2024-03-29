#pragma once

#include "display/PackedBDF.h"

static const unsigned char chunkydunk_outline_data[] = {
0x02,0x20,0x28,0x09,0x9f,0x9b,0xf6,0x5f,0x12,0xf0,
0x0e,0xbb,0x33,0xfc,0xc9,0x7f,0x15,0x58,0x49,0xfe,
0x66,0x71,0x00,0xc6,0x67,0x10,0x0b,0x33,0x3f,0xc0,
0x15,0x9f,0xc9,0xfe,0x60,0x68,0x05,0x24,0xa0,0xf6,
0x1c,0x70,0xde,0x0a,0x49,0x40,0x2c,0x0c,0xff,0x00,
0x11,0x18,0xbb,0xfd,0x32,0x91,0x71,0xb1,0xd1,0x29,
0x97,0xf8,0x15,0x9f,0xc9,0xf0,0x63,0x08,0x21,0x24,
0x20,0x86,0x3e,0x82,0x52,0x0a,0x63,0x40,0x2c,0x24,
0xff,0x80,0x08,0xbb,0x1b,0xe6,0x5e,0x0d,0xde,0xa8,
0xf3,0x24,0x59,0xa2,0x4d,0x12,0x26,0x44,0xcc,0x89,
0x91,0xe0,0x0d,0xde,0xab,0xc4,0xc8,0x99,0x91,0x33,
0x04,0x99,0x22,0xcd,0x12,0x67,0x80,0x0e,0xfa,0x33,
0xfa,0x4a,0x0b,0x1a,0x0a,0x4b,0xf8,0x11,0x18,0x38,
0xf0,0x48,0xe7,0x88,0x17,0x38,0x90,0x78,0x08,0xbe,
0x9b,0xe6,0x5e,0x0e,0x99,0x33,0xfc,0x41,0x7f,0x08,
0x9f,0x9b,0xe2,0x5e,0x0f,0x9f,0xb0,0x78,0x48,0xc8,
0x98,0x91,0x91,0x31,0x23,0x22,0x62,0x43,0xc0,0x15,
0x9f,0xc8,0xfc,0x30,0xcc,0x0d,0x18,0xa6,0x14,0x82,
0x82,0x50,0xca,0x31,0x60,0x66,0x18,0x7e,0x00,0x0f,
0x9f,0xb0,0xf1,0x93,0x14,0x42,0x72,0x82,0x4e,0x71,
0x05,0xfc,0x11,0x9f,0xb9,0xf9,0x86,0x81,0x4c,0xbe,
0x46,0x26,0x36,0x32,0x3e,0x20,0x5f,0xe0,0x11,0x9f,
0xbb,0xfe,0x20,0x5e,0x30,0x46,0x31,0x7c,0xa6,0x50,
0x2c,0x33,0xf0,0x11,0x9f,0xbb,0xfe,0x66,0x62,0x05,
0xf3,0x41,0x20,0xf0,0x11,0x9f,0xbb,0xfe,0x20,0x53,
0xe8,0x34,0x0c,0x7c,0xa6,0x50,0x2c,0x33,0xf0,0x13,
0x9f,0xc1,0xfc,0xc1,0x20,0x49,0xf2,0x06,0x80,0xa7,
0x29,0x4a,0x72,0x80,0xb0,0x67,0xf0,0x11,0x9f,0xbb,
0xfe,0x20,0x5f,0x21,0x10,0x98,0xc8,0x44,0x26,0x82,
0x41,0xe0,0x13,0x9f,0xc1,0xfc,0xc1,0xa0,0x31,0x39,
0x60,0xd0,0x18,0x9c,0xa0,0x2c,0x19,0xfc,0x13,0x9f,
0xc1,0xfc,0xc1,0xa0,0x29,0xca,0x52,0x9c,0xa0,0x2c,
0x09,0xf2,0x40,0x90,0x67,0xf0,0x09,0x18,0x1b,0xe2,
0x63,0xe2,0x5e,0x09,0x5f,0x1b,0xe2,0x5e,0x07,0xcc,
0xbc,0x0d,0x18,0x28,0xf3,0x2c,0x62,0x36,0x26,0x47,
0x80,0x0f,0x18,0x33,0xfc,0x41,0x8f,0xf1,0x05,0xfc,
0x0d,0x18,0x2b,0xc4,0xc8,0xe3,0x14,0x69,0x9e,0x00,
0x11,0x9f,0xb9,0xf9,0x86,0x81,0x89,0x97,0x88,0x8c,
0x4c,0x3c,0x82,0x41,0xe0,0x19,0x9f,0xd8,0x3c,0x01,
0x20,0x19,0x80,0x84,0x0c,0x30,0x4c,0x86,0x06,0x20,
0x13,0x3c,0xd3,0x32,0x90,0x97,0x87,0x80,0x15,0x9f,
0xcb,0xfc,0x40,0xc8,0x09,0x39,0x20,0x34,0x02,0x9e,
0x52,0x4a,0x79,0x40,0x28,0x0d,0xff,0x00,0x15,0x9f,
0xc8,0xfe,0x30,0x6c,0x05,0x1c,0xa6,0xf8,0x90,0x13,
0x7a,0x39,0x60,0x26,0x0c,0x7f,0x00,0x15,0x9f,0xcb,
0xfc,0x40,0xc8,0x0d,0x38,0xa5,0x98,0x92,0x52,0xca,
0x71,0x40,0x68,0x19,0xfe,0x00,0x11,0x9f,0xbb,0xfe,
0x20,0x53,0xf1,0x08,0x9c,0x48,0x27,0xe2,0x05,0xfe,
0x11,0x9f,0xbb,0xfe,0x20,0x53,0xf1,0x04,0x9e,0xa9,
0x07,0x80,0x15,0x9f,0xc8,0xfe,0x30,0x4c,0x09,0x1f,
0xc4,0xc2,0x9e,0x53,0x4a,0x39,0x60,0x26,0x0c,0x7f,
0x00,0x15,0x9f,0xcb,0xcf,0x89,0x25,0x3c,0xc4,0x02,
0x9e,0x6a,0x49,0x79,0xe0,0x09,0x9f,0x9b,0xf6,0x66,
0x5e,0x11,0x9f,0xb8,0x3f,0x02,0x5f,0x29,0x94,0x0b,
0x0c,0xfc,0x13,0x9f,0xc3,0xde,0x9c,0xa6,0x29,0x1a,
0x0d,0x10,0xc4,0x19,0x23,0x4c,0x53,0x97,0xbc,0x11,
0x9f,0xbb,0xc3,0x64,0x13,0xf1,0x02,0xff,0x19,0x9f,
0xdb,0xc3,0xd2,0x12,0x99,0x94,0x48,0xa3,0xc6,0x21,
0x86,0x24,0x26,0x26,0x65,0xff,0xe0,0x13,0x9f,0xc3,
0xde,0x9c,0xc4,0x66,0x21,0x31,0x21,0x89,0x8a,0x72,
0xf7,0x80,0x17,0x9f,0xd0,0xfe,0x18,0x33,0x01,0xa3,
0x8a,0x6c,0xc4,0x89,0x4d,0x94,0x71,0x60,0x33,0x06,
0x1f,0xc0,0x13,0x9f,0xc3,0xfc,0x81,0xa0,0x29,0xca,
0x02,0x81,0xa7,0xd5,0x20,0x78,0x00,0x17,0x9f,0xd0,
0xfe,0x18,0x33,0x01,0xa3,0x8a,0x7c,0xa4,0xca,0x44,
0xa6,0x0a,0x31,0xb0,0x09,0x84,0x8f,0xf8,0x13,0x9f,
0xc3,0xfc,0x81,0xa0,0x29,0xca,0x02,0x81,0xa1,0xc8,
0x32,0x46,0x98,0xa7,0x2f,0x78,0x13,0x9f,0xc1,0xfc,
0xc1,0xa0,0x29,0xca,0x3e,0xc3,0x18,0x6f,0x8a,0x72,
0x80,0xb0,0x67,0xf0,0x15,0x9f,0xcb,0xff,0x88,0x05,
0xe7,0xe8,0x90,0x1e,0x00,0x13,0x9f,0xc3,0xdf,0xb2,
0x94,0xe5,0x01,0x60,0xcf,0xe0,0x19,0x9f,0xdb,0xc3,
0xd2,0x12,0x99,0x96,0x49,0x93,0xc8,0xcc,0xc2,0x64,
0x18,0x60,0x42,0x03,0x30,0x09,0x00,0x78,0x00,0x1d,
0x9f,0xeb,0xc0,0xf4,0xbd,0x29,0x4a,0x53,0x9c,0xb2,
0x13,0x24,0x24,0x40,0x08,0x86,0x11,0x8c,0x61,0x3c,
0x82,0x49,0x07,0x9e,0x00,0x13,0x9f,0xc3,0xde,0x94,
0xa7,0x2c,0x99,0x05,0x0c,0x62,0x09,0x93,0x4e,0x52,
0x97,0xbc,0x15,0x9f,0xcb,0xcf,0x4f,0x28,0xc5,0x81,
0x98,0x61,0x99,0x62,0x40,0x78,0x15,0x9f,0xcb,0xff,
0x88,0x05,0xf8,0x86,0x31,0x8c,0x63,0x18,0xc2,0x3f,
0x88,0x05,0xff,0x80,0x0d,0xbf,0x2b,0xf8,0x85,0x3d,
0xc8,0x9e,0x21,0x7e,0x0f,0x9f,0xb3,0xc2,0x42,0x63,
0x21,0x21,0x31,0x90,0x90,0x98,0xc8,0x48,0x78,0x0d,
0xbf,0x2b,0xf8,0x85,0xcd,0x92,0xe6,0x21,0x7e,0x10,
0xda,0xb8,0xf0,0xcc,0xc3,0x40,0xa6,0x5f,0xe0,0x10,
0x9e,0xbb,0xfe,0x20,0x5f,0xe0,0x0c,0xda,0xab,0xc4,
0xc8,0xd8,0x99,0x1e,0x13,0x3f,0xc1,0xfe,0xc4,0xa0,
0x29,0x8a,0x72,0x98,0xa0,0x2c,0x49,0xfe,0x13,0x9f,
0xc3,0xc1,0x12,0x04,0xf9,0x23,0x40,0x51,0x94,0xe5,
0x19,0x40,0x52,0x37,0xf8,0x11,0x3f,0xb9,0xf9,0x86,
0x81,0x4c,0xa7,0xd3,0x28,0x16,0x19,0xf8,0x13,0x9f,
0xc0,0x1f,0x00,0x93,0xe5,0x89,0x40,0x53,0x14,0xe5,
0x31,0x40,0x58,0x93,0xfc,0x11,0x3f,0xb9,0xf9,0x86,
0x81,0x48,0xa0,0xd0,0xe8,0x16,0x09,0xfc,0x0d,0x9f,
0xa1,0xf6,0x28,0x53,0xc4,0x49,0xaa,0x47,0x80,0x11,
0x9e,0x39,0xfd,0x82,0x81,0x89,0x94,0x8a,0x05,0x92,
0x79,0x20,0x90,0xcf,0xc0,0x0f,0x9f,0xb3,0xc4,0x48,
0x4e,0x43,0x41,0xb9,0x2f,0xe0,0x09,0x9f,0x9b,0xe2,
0x5f,0xb2,0xf0,0x0b,0xf6,0x19,0xf0,0x93,0xf5,0x2c,
0xa2,0x9b,0xc0,0x0f,0x9f,0xb3,0xc4,0x48,0x4f,0x49,
0x41,0x43,0x46,0x43,0x41,0x49,0x7f,0x09,0x9f,0x9b,
0xf6,0x66,0x5e,0x19,0x3f,0xdb,0xff,0x90,0x46,0x80,
0x1b,0x99,0x97,0xff,0x80,0x11,0x3f,0xbb,0xf9,0x06,
0x81,0xb9,0x97,0xf8,0x11,0x3f,0xb9,0xf9,0x86,0x81,
0x99,0x94,0x0b,0x0c,0xfc,0x11,0x9e,0x3b,0xf9,0x06,
0x81,0x89,0x94,0x4a,0x05,0x26,0x9e,0x89,0x07,0x80,
0x11,0x9e,0x39,0xfd,0x82,0x81,0x89,0x94,0x8a,0x05,
0x92,0x79,0x80,0x90,0x78,0x0d,0x3f,0xa9,0xf6,0x28,
0x53,0xd4,0x8f,0x00,0x0f,0x3f,0xb1,0xfb,0x0a,0x0a,
0x3b,0x1b,0x8a,0x0a,0x1b,0xf0,0x0d,0x9f,0xab,0xc8,
0x91,0x3c,0x42,0x9d,0x22,0x74,0x2c,0x4f,0x80,0x11,
0x3f,0xbb,0xfe,0xe6,0x50,0x2c,0x33,0xf0,0x11,0x3f,
0xbb,0xfe,0x26,0x50,0x2c,0x32,0x11,0x98,0x48,0x3c,
0x19,0x3f,0xdb,0xc3,0xd3,0xf2,0x99,0x94,0x48,0xb0,
0x0c,0x80,0x46,0x66,0x13,0x20,0xff,0x00,0x13,0x3f,
0xc3,0xde,0x9c,0xa2,0x2c,0x19,0x8c,0xc1,0xa2,0x29,
0xcb,0xde,0x11,0x9e,0x3b,0xfe,0xa6,0x52,0x28,0x16,
0x49,0xe4,0x82,0x43,0x3f,0x00,0x0f,0x3f,0xb3,0xfc,
0x41,0x71,0x63,0x47,0x88,0x2f,0xe0,0x0d,0xbf,0x28,
0xf3,0x24,0x49,0xb2,0x44,0x99,0x13,0x22,0x64,0x4c,
0x8f,0x09,0xde,0x9b,0xf6,0x6e,0x5e,0x0d,0xbf,0x2b,
0xc4,0xc8,0x99,0x13,0x22,0x64,0x89,0x36,0x48,0x93,
0x3c,0x14,0xd8,0xc9,0xff,0x63,0x28,0x25,0x20,0xa6,
0x37,0xfc };
/* font data size: 1242 bytes */

static const unsigned char chunkydunk_outline_index[] = {
0x00,0x00,0x0c,0x05,0x01,0x00,0x3c,0x0c,0x81,0xf0,
0x52,0x0a,0xe1,0x98,0x3a,0x87,0xf1,0x14,0x23,0xc4,
0xa8,0x9a,0x15,0x22,0xf4,0x65,0x0d,0xa1,0xd2,0x3d,
0x08,0x19,0x15,0x24,0x84,0xd0,0xa3,0x14,0xd2,0xaa,
0x57,0xcb,0x41,0x72,0x30,0x26,0x60,0xd6,0x1b,0xf3,
0xa4,0x78,0x0f,0x61,0xff,0x41,0xa8,0x4d,0x0f,0x22,
0xf4,0x70,0x92,0xd2,0xd2,0x6e,0x4f,0xaa,0x49,0x52,
0x2b,0x65,0x82,0xb3,0x17,0x1a,0xfd,0x61,0xcc,0x71,
0x97,0x33,0x86,0x8e,0xd4,0x5a,0xdb,0x62,0x6d,0x4d,
0xe1,0xc4,0xb9,0x67,0x4e,0xed,0x1d,0xfb,0xcf,0x7b,
0x4f,0x85,0xf5,0xbf,0x97,0xff,0x02,0xe0,0xa4,0x1f,
0x85,0xd0,0xf6,0x23,0x45,0x28,0xbf,0x1a,0x23,0xa4,
0x86,0x92,0x92,0x8a,0x56,0xcb,0xb9,0x83,0x33,0xc0 };
/* font index size: 130 bytes */

const craft::packedbdf_t chunkydunk_outline = {
	chunkydunk_outline_index,
	0,
	chunkydunk_outline_data,
	1,
	0,
	32,
	63,
	65,
	126,
	11,
	4,
	4,
	2,
	4,
	4,
	14,
	11
};
