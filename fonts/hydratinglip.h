#pragma once

#include "display/PackedBDF.h"

static const unsigned char hydratinglip_data[] = {
0x02,0x20,0x28,0x07,0x47,0xa4,0x67,0x37,0x30,0x8c,
0x40,0x0a,0x82,0xb3,0x11,0xb4,0x40,0x17,0x67,0x60,
0x66,0x1f,0xe3,0xff,0x9c,0xf8,0xcc,0xc7,0xfe,0x33,
0x83,0x18,0x11,0x01,0x00,0x0f,0x67,0xc1,0xf3,0xfb,
0x63,0xe3,0xf2,0xf8,0xdb,0xfb,0xf1,0xe0,0x40,0x1d,
0x47,0xf8,0x00,0x20,0x01,0x09,0x9c,0x4c,0xe0,0x3f,
0x1c,0x7b,0xc0,0x71,0xed,0x54,0x02,0x0d,0x80,0x00,
0x40,0x11,0x47,0xc9,0x30,0x06,0x13,0x5e,0x0f,0x8f,
0xcf,0xf6,0x78,0x78,0xa8,0x04,0xa2,0x1c,0xe4,0x80,
0x09,0x47,0xa8,0x8e,0xf6,0xc6,0x38,0xe6,0x20,0x07,
0x67,0x22,0x33,0xd3,0x76,0x22,0x04,0x63,0x1c,0x68,
0x0f,0x27,0x44,0x0c,0x7c,0x7f,0x5f,0x1a,0x83,0x02,
0x00,0x04,0x87,0x1c,0xe8,0x0a,0x41,0xb3,0xe7,0x80,
0x04,0x60,0x1a,0x6c,0x0d,0x47,0xb8,0x30,0xe1,0x87,
0x1a,0x31,0x38,0x10,0x0f,0x47,0xc0,0xe1,0xf3,0xf3,
0x5c,0x63,0x73,0x7f,0x5e,0x04,0x09,0x47,0xa9,0xa3,
0xe2,0xe0,0xce,0x30,0x80,0x0d,0x67,0x39,0xe7,0xed,
0xcb,0x96,0x1c,0x71,0xf9,0xf1,0x42,0x00,0x0d,0x67,
0x39,0xe7,0xec,0xcb,0xc1,0xc1,0xdf,0x9e,0x28,0x40,
0x0d,0x47,0xbc,0xb7,0x1f,0xb6,0x4d,0x03,0x82,0x0d,
0x47,0xb8,0xf3,0xee,0x1f,0x1f,0x26,0x1d,0xf9,0xd1,
0x00,0x0d,0x67,0x38,0xf3,0xe6,0x9e,0x3e,0x76,0xcd,
0xfb,0xe4,0x81,0x00,0x0d,0x47,0xb8,0xf7,0xee,0xe1,
0x30,0xf0,0x30,0xe0,0x40,0x0d,0x47,0xb8,0xe3,0xee,
0xcf,0x3f,0x6e,0xcd,0xf1,0xf1,0x20,0x0d,0x67,0x38,
0xe3,0xee,0xd9,0xbf,0x5e,0x1e,0x1e,0x14,0x08,0x04,
0xe0,0x1c,0x64,0x46,0x80,0x05,0x27,0x1c,0x68,0x18,
0xd2,0x0b,0x00,0x30,0x43,0x1d,0x1c,0x38,0x70,0xc0,
0x0d,0x07,0xbb,0xe7,0xe2,0xd8,0x3f,0x3e,0x50,0x80,
0x0c,0xe0,0x3b,0xc3,0xc1,0xc7,0xbd,0x70,0x20,0x0d,
0x47,0xb9,0xe7,0xe4,0xc3,0x8f,0x1a,0x06,0x0c,0x10,
0x17,0x67,0x61,0x31,0x0d,0xc2,0x6c,0x00,0x11,0x9b,
0x1d,0xf8,0x4f,0x90,0xf8,0x7f,0x39,0xf9,0xbd,0x00,
0x13,0x87,0x50,0x30,0x1c,0x0f,0x87,0xe1,0xac,0x63,
0x47,0xfd,0xcb,0x62,0xc8,0xa0,0x08,0x11,0xa6,0xcb,
0xe2,0x3f,0x9a,0xec,0x78,0xce,0x73,0xc3,0xf9,0x28,
0x84,0x02,0x0f,0x87,0x40,0xf1,0xfb,0xd3,0x53,0x14,
0x60,0x73,0x7f,0x5e,0x04,0x04,0x11,0x87,0x49,0xe1,
0xf8,0xde,0x67,0xb2,0xd8,0x6c,0x76,0x73,0xf8,0xf4,
0x2a,0x01,0x00,0x0f,0x87,0x41,0xe3,0xf3,0x5b,0x0b,
0xeb,0xe3,0x23,0x83,0xfa,0xf0,0x90,0x80,0x0d,0x87,
0x38,0xf7,0xee,0x98,0x3e,0x7e,0xd5,0x83,0x83,0x04,
0x08,0x00,0x11,0x87,0x48,0xf8,0xfe,0xeb,0x60,0xb7,
0x1b,0xed,0x77,0x39,0xfc,0xfa,0x49,0x20,0x00,0x11,
0x87,0x4b,0x0d,0xce,0xc3,0x7f,0x9f,0xe1,0xac,0xc7,
0x0c,0xc2,0x20,0x10,0x09,0x87,0x2c,0x63,0x8f,0x2d,
0x1c,0xc2,0x10,0x0f,0x67,0xc0,0x30,0x38,0x18,0x3c,
0x03,0x63,0x77,0x7e,0x5e,0x12,0x11,0x67,0xc9,0x9c,
0xdc,0x7e,0x7d,0x1c,0x9e,0x0f,0x86,0xe3,0x7d,0x8e,
0x44,0x0f,0x87,0x44,0xe0,0x8e,0x11,0x81,0xdc,0xfd,
0xf9,0x28,0x08,0x19,0x87,0x68,0x77,0x07,0xfc,0x7f,
0xe3,0x7b,0xb9,0x4d,0x88,0x6c,0x47,0x60,0x1b,0x80,
0xd8,0x06,0x40,0x22,0x00,0x00,0x13,0x87,0x50,0xc6,
0x71,0xc3,0xcc,0xfb,0x7f,0xdb,0xf6,0xbd,0x8f,0x62,
0x88,0x20,0x08,0x13,0x67,0xd0,0x78,0x3f,0x1d,0xcf,
0x5c,0x62,0xd8,0x37,0x18,0xfe,0x3e,0x8a,0x20,0x0f,
0x87,0x41,0xe3,0xf3,0x5b,0x3c,0x7e,0x74,0x34,0x30,
0x70,0x50,0x10,0x11,0x87,0x48,0xf0,0xfc,0xf7,0x69,
0xb0,0xdb,0xed,0xe7,0x61,0xf8,0xec,0x54,0x02,0x00,
0x0f,0x87,0x40,0xe1,0xf1,0xbb,0x9c,0x7f,0x6d,0x6e,
0x6f,0x6b,0x22,0x20,0x0f,0x87,0x41,0xf3,0xfb,0x2b,
0xc1,0xf1,0x78,0x1b,0xbb,0xf9,0xe9,0x29,0x00,0x0f,
0x87,0x41,0xfb,0xf9,0x68,0x6c,0x8c,0x93,0x82,0x82,
0x00,0x0f,0x87,0x41,0x91,0x9b,0xdb,0x5b,0x1b,0x3b,
0x1b,0x3c,0x7e,0x4a,0x02,0x11,0x87,0x49,0x0d,0x86,
0xe7,0x63,0x19,0x8d,0xc6,0xc7,0x72,0xe8,0x70,0x20,
0x10,0x00,0x17,0x87,0x62,0x00,0xce,0x03,0x72,0x37,
0x76,0x66,0x67,0x7f,0x3f,0xd3,0xd8,0x28,0x82,0x00,
0x11,0x87,0x4b,0x8d,0xce,0x76,0x83,0xe0,0xd0,0xf0,
0xf8,0xf6,0x6b,0x25,0x02,0x00,0x0f,0x87,0x43,0x1b,
0xbc,0x3e,0x2c,0x0c,0x0e,0x1c,0x83,0x01,0x01,0x00,
0x0f,0x87,0x41,0xfb,0xfb,0x78,0x70,0xf1,0xd3,0x93,
0x83,0xfa,0xf8,0x28,0x08,0x09,0x47,0xac,0x74,0x63,
0x98,0xe8,0x72,0x00,0x09,0x00,0x2c,0x64,0x33,0xd6,
0x31,0x00,0x0b,0x67,0x31,0x87,0x97,0x03,0x1d,0xf7,
0x8e,0x28,0x20,0x0c,0xc1,0xb8,0xc3,0xcd,0xd9,0x92,
0x20,0x10,0x87,0x4b,0x01,0xfe,0x7f,0x22,0x00,0x06,
0xc1,0xa3,0x3c,0x31,0x10,0x0d,0x07,0xb9,0xc7,0xc1,
0xcf,0xbb,0x7e,0x7c,0x10,0x0d,0x67,0xbc,0xb0,0xf9,
0xfb,0xb8,0xcd,0xf9,0xe1,0x00,0x0c,0xe0,0x39,0xe7,
0xcd,0x18,0x3b,0x3e,0x38,0x0d,0x67,0xbc,0x8c,0x38,
0xfb,0xb8,0xcd,0xf9,0xf0,0x80,0x0d,0x07,0xb8,0xe3,
0xef,0xdf,0x30,0x7c,0x78,0x20,0x09,0x40,0x28,0xce,
0xe8,0xf6,0xb1,0xc6,0x30,0x0d,0x46,0xb9,0xe7,0xed,
0xd9,0xbb,0x3e,0x5c,0x31,0xe3,0x80,0x0f,0x67,0xc1,
0x04,0x30,0x3c,0x3e,0x37,0x77,0x9c,0x64,0x40,0x07,
0x07,0xa4,0xe8,0xf0,0xc8,0x0b,0x5e,0xae,0x0c,0x78,
0xf1,0x80,0x0d,0x67,0xb9,0x08,0x60,0xd9,0xf7,0xcf,
0x1f,0x37,0x66,0x40,0x07,0x67,0xa1,0xbd,0x68,0xf0,
0xc8,0x11,0x07,0xc9,0xb0,0xfc,0xff,0xad,0xb0,0x80,
0x0d,0x07,0xb9,0x83,0x87,0x9b,0xce,0x64,0x00,0x0d,
0x07,0xb8,0xe3,0xee,0xd9,0xb7,0x7c,0x70,0x20,0x0d,
0x46,0xba,0xe7,0xd1,0x9b,0x78,0xf8,0xd1,0x83,0x00,
0x0d,0x46,0xb9,0xc7,0xcd,0xd9,0xbb,0x3e,0x3e,0x03,
0x04,0x08,0xe0,0x29,0xde,0xd8,0xc7,0x18,0x0b,0x07,
0xb1,0xef,0xb8,0x70,0xef,0x9c,0x20,0x09,0x40,0x2c,
0xe4,0x7b,0x1c,0x63,0x8c,0x0d,0x07,0xbc,0xb6,0xed,
0x9b,0xf3,0xc2,0x00,0x0d,0x07,0xbb,0x18,0xcc,0xd9,
0xe1,0xc3,0x04,0x00,0x14,0xe0,0x5c,0x60,0x6c,0xcd,
0xfd,0x9f,0xe3,0x9c,0x21,0x00,0x0d,0x07,0xbb,0x37,
0x67,0x87,0x1f,0x7e,0xcc,0x10,0x0d,0x46,0xb9,0x39,
0xcc,0xf9,0xe1,0xc7,0x1c,0x30,0x0b,0x07,0xb3,0xcf,
0x8c,0x63,0x6f,0xbc,0x20,0x0b,0x47,0xb0,0xc7,0x43,
0x1c,0x78,0xc3,0xc6,0x08,0x07,0x86,0xa1,0x56,0x76,
0x8f,0x0c,0x80,0x0b,0x47,0xb3,0x0e,0x18,0x34,0x1c,
0x67,0x9c,0x10,0x10,0xc0,0x49,0xc5,0xf6,0xdf,0x67,
0x11,0x00,0x80 };
/* font data size: 1063 bytes */

static const unsigned char hydratinglip_index[] = {
0x00,0x00,0x0c,0x05,0x81,0x10,0x46,0x0c,0x42,0x38,
0x55,0x0b,0x41,0x8c,0x35,0x06,0xe0,0xf2,0x1f,0x44,
0x10,0x86,0x12,0x02,0x70,0x52,0x8b,0x21,0x7c,0x31,
0xc6,0x98,0xe0,0x1d,0x63,0xdc,0x81,0x90,0x92,0x1e,
0x46,0x09,0x11,0x2b,0x26,0xc5,0x28,0xad,0x96,0xa2,
0xf0,0x62,0x4c,0xc1,0xa6,0x36,0xe7,0x18,0xe7,0x9d,
0xc3,0xd6,0x7d,0xd0,0x72,0x1f,0x45,0xe8,0xf5,0x27,
0x25,0xc4,0xd6,0x9d,0xd4,0x2a,0x96,0x55,0x0a,0xe1,
0x63,0x2d,0x55,0xbc,0xb9,0x97,0x8a,0xf9,0x60,0x2c,
0x1d,0x88,0xb1,0xc6,0x4a,0xcc,0x19,0xd3,0x43,0x69,
0xed,0x6d,0xb0,0xb6,0x86,0xe8,0xde,0xdc,0x23,0x8d,
0x72,0xee,0x89,0xd6,0xbb,0x47,0x7a,0xf1,0x5e,0x73,
0xd8,0x7c,0x8f,0xb9,0xfc,0x40,0x18,0x17,0x04,0xe0,
0xe8 };
/* font index size: 131 bytes */

const craft::packedbdf_t hydratinglip = {
	hydratinglip_index,
	0,
	hydratinglip_data,
	1,
	0,
	32,
	126,
	0,
	0,
	11,
	4,
	4,
	2,
	4,
	4,
	13,
	10
};
