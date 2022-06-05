#pragma once

#include "display/PackedBDF.h"

static const unsigned char grapesoda_data[] = {
0x02,0x20,0x28,0x07,0x20,0x24,0xb2,0x8c,0x0c,0xc0,
0x0a,0x63,0x34,0x6d,0xb0,0x13,0x00,0x50,0x48,0x1f,
0x1f,0xe3,0x20,0xdc,0xff,0x99,0x84,0x60,0x0d,0x67,
0x3c,0x18,0x7d,0x9b,0x83,0xe0,0xcf,0x9e,0x18,0x30,
0x15,0x00,0x59,0x98,0x7b,0x0b,0x61,0xd8,0x03,0x60,
0xde,0x1b,0x43,0x30,0x11,0x27,0xc9,0xc2,0x36,0x0e,
0x67,0xf6,0x73,0x31,0xfc,0x66,0x04,0x63,0x1c,0x6c,
0x09,0x67,0x28,0xce,0x6b,0xc3,0x1c,0x60,0x09,0x67,
0x2b,0x1c,0x6b,0x33,0x39,0x80,0x0e,0xe0,0xc0,0xc0,
0xdb,0xfb,0xe0,0xf1,0xb1,0x80,0x0c,0xc0,0xb8,0x81,
0x83,0xdf,0xbc,0x18,0x04,0x67,0x9c,0x68,0x08,0x61,
0x28,0xde,0xc0,0x04,0x40,0x1b,0x60,0x0b,0x47,0x34,
0x8e,0x0d,0x2c,0x61,0x80,0x0d,0x00,0x38,0xe3,0xee,
0xe3,0x36,0xef,0x8e,0x00,0x09,0x00,0x28,0xce,0xf1,
0x43,0x3d,0xe0,0x0d,0x00,0x38,0xe3,0xee,0xc9,0x86,
0x38,0xfd,0xf8,0x0d,0x00,0x3c,0x7c,0x10,0x70,0x33,
0x67,0xc7,0x00,0x0d,0x00,0x3c,0x06,0xd9,0xbb,0xf7,
0xc1,0x83,0x00,0x0d,0x00,0x3c,0x3c,0xc1,0xf3,0xf0,
0x67,0x8e,0x00,0x0f,0x00,0x40,0xc1,0xc3,0x83,0x73,
0xfb,0x99,0xf8,0xf0,0x0d,0x00,0x38,0x78,0xfe,0x06,
0x83,0x06,0x00,0x0d,0x00,0x39,0xc7,0xcd,0x9f,0x1f,
0x66,0xfc,0xf0,0x0d,0x00,0x38,0xe3,0xec,0xdf,0x9e,
0x0c,0x30,0x60,0x04,0xc0,0x1c,0x70,0x36,0x04,0xe7,
0x9c,0x70,0x46,0x80,0x0c,0xc0,0xb8,0x73,0xee,0x0e,
0x0f,0x06,0x0a,0xa1,0x34,0x78,0x07,0xcf,0x0c,0xc0,
0xbb,0x07,0x83,0x83,0xbe,0x70,0x0d,0x20,0x38,0xe7,
0xec,0xc3,0x8e,0x18,0x00,0x60,0xc0,0x15,0x47,0x58,
0x78,0x1f,0x86,0x19,0x8d,0xb3,0xb6,0x5e,0xcf,0x8c,
0x00,0xf0,0x0c,0x00,0x13,0x27,0xd4,0x0e,0x20,0xd8,
0x7f,0x19,0xce,0x3b,0x0e,0x01,0x00,0x0f,0x00,0x43,
0xc4,0x6c,0x7c,0x66,0x67,0x3f,0x3e,0x0f,0x00,0x40,
0xf1,0xfb,0x9b,0x03,0x1b,0x3b,0xf1,0xe0,0x0f,0x00,
0x41,0xe1,0xf1,0xbb,0x9b,0x1b,0x3b,0xf3,0xe0,0x0f,
0x27,0xc4,0x3e,0x30,0x3c,0x7c,0x70,0x78,0x7f,0x0f,
0x0d,0x00,0x3c,0x3e,0x60,0xf3,0xe7,0x0c,0x18,0x00,
0x11,0x00,0x48,0xf0,0xf8,0xe0,0x8c,0xf6,0x33,0xf8,
0xf8,0x11,0x20,0x48,0x0e,0x18,0xcc,0xe7,0xf7,0xfb,
0x99,0x8c,0xc6,0x0b,0x00,0x34,0x3e,0x0d,0x0c,0x79,
0xe0,0x0d,0x00,0x3c,0x0f,0x21,0xb3,0x7e,0x78,0x0f,
0x00,0x43,0x33,0x73,0xe3,0xc1,0xe1,0xf1,0xb9,0x98,
0x0d,0x00,0x3c,0xb0,0xe1,0x9c,0x7e,0xe0,0x15,0x00,
0x59,0x83,0x38,0xe7,0xbc,0xff,0xbb,0xb7,0x26,0xc0,
0xd8,0x18,0x11,0x20,0x48,0x31,0x98,0xee,0x73,0x3d,
0x9f,0xed,0xf6,0x7b,0x18,0x0f,0x00,0x40,0xe1,0xf3,
0xb4,0x63,0x73,0x3f,0x1e,0x0f,0x00,0x43,0xf3,0xfb,
0x1b,0x3b,0xf1,0x81,0xc1,0xc0,0x0f,0x47,0x40,0x61,
0xf3,0x9b,0x1b,0x5b,0x73,0xe1,0xf0,0x38,0x10,0x0f,
0x27,0xc1,0xf1,0xf9,0x99,0xb9,0xf3,0xe3,0x73,0x3b,
0x10,0x0d,0x00,0x39,0xe7,0xec,0xce,0x0e,0x66,0xfc,
0xf0,0x0f,0x00,0x40,0x3b,0xfb,0xe4,0x18,0x81,0x81,
0x80,0x0f,0x00,0x41,0x81,0x9b,0x9c,0x63,0x77,0x7e,
0x3c,0x0f,0x00,0x40,0x1b,0x1b,0x33,0xb4,0x3c,0x18,
0x18,0x13,0x00,0x54,0x60,0xdb,0x77,0xd9,0xfe,0x3f,
0x8c,0xc3,0x30,0x11,0x20,0x48,0x08,0x8e,0xee,0x3e,
0x41,0xc1,0xf1,0xdc,0x44,0x11,0x00,0x49,0x09,0x8e,
0xee,0x3e,0x0e,0x06,0x07,0x03,0x00,0x0f,0x00,0x40,
0xfb,0xfb,0xb0,0x70,0xe1,0xc3,0xfb,0xf8,0x09,0x67,
0x2c,0x7e,0x64,0x7b,0x00,0x0b,0x47,0x34,0x62,0x59,
0x06,0x81,0x86,0x09,0x67,0x2c,0x7e,0x9b,0xde,0x0c,
0xa2,0x38,0x41,0xc7,0x9b,0x82,0x0c,0x46,0xbb,0xf7,
0xc0,0x06,0x63,0x24,0x63,0x0e,0xe0,0x40,0x70,0xd8,
0x19,0xfb,0x3b,0xf9,0xd8,0x0f,0x00,0x44,0xe0,0x6e,
0x3f,0x33,0x3f,0x3e,0x0a,0xe0,0x31,0xc7,0xb6,0xc3,
0x87,0x8e,0x0f,0x00,0x44,0x0c,0x06,0x3e,0x76,0x67,
0x7f,0x3b,0x0c,0xe0,0x38,0xe3,0xec,0xdf,0xb8,0x3c,
0x38,0x0b,0x00,0x30,0xe7,0x99,0x1f,0x30,0x61,0x80,
0x0d,0x46,0xb8,0xd3,0xee,0xd9,0xbb,0x3e,0x38,0x33,
0xe7,0x80,0x0d,0x00,0x3c,0xb0,0x78,0xfb,0xb6,0x6c,
0xc0,0x07,0x00,0x24,0x30,0x86,0x4c,0xc0,0x09,0x66,
0xac,0x30,0x25,0xa0,0xce,0xe6,0x00,0x0d,0x00,0x3c,
0x60,0xd8,0xf1,0xc3,0xc7,0xcd,0x80,0x07,0x00,0x25,
0x32,0x67,0x30,0x12,0xe0,0x52,0xc0,0xff,0x3f,0xf3,
0xb3,0x60,0xc0,0x0e,0xe0,0x43,0x73,0xfb,0x9c,0x33,
0x36,0x36,0x0c,0xe0,0x38,0xe3,0xee,0xe3,0x37,0xc7,
0x00,0x0f,0x46,0xc3,0x73,0xfb,0xdc,0x73,0x3e,0x3c,
0x86,0x06,0x00,0x0d,0x46,0xb8,0xf3,0xee,0xd9,0xb7,
0x7c,0x7a,0x06,0x08,0x0c,0xe0,0x39,0x67,0xee,0xcc,
0x1c,0x18,0x30,0x0c,0xe0,0x38,0xf3,0xe6,0x07,0x13,
0x7e,0x78,0x0b,0x00,0x34,0x1a,0x3f,0x0c,0x3c,0x70,
0x0e,0xe0,0x41,0x81,0xb4,0x66,0x6e,0x7f,0x3b,0x0e,
0xe0,0x40,0x1b,0x3b,0xb1,0xf1,0xe0,0xe0,0xc0,0x10,
0xe0,0x48,0x0e,0x76,0xe1,0xf8,0x68,0x0e,0xe0,0x40,
0x33,0x73,0xe1,0xe0,0xf1,0xf9,0x98,0x0d,0x46,0xb8,
0x38,0xcd,0xd9,0xf1,0xd0,0x31,0xc3,0x00,0x0c,0xe0,
0x38,0xf7,0xed,0x86,0x18,0x7e,0xfc,0x0b,0x67,0x30,
0x63,0x88,0x31,0xce,0x1c,0x30,0x83,0x86,0x05,0x47,
0x1e,0xf1,0xb0,0x0b,0x67,0x33,0x0e,0x08,0x61,0xc3,
0x9c,0x60,0x8e,0x30,0x10,0x61,0xc9,0xcd,0xfe,0xce };
/* font data size: 31370 bytes */

static const unsigned char grapesoda_index[] = {
0xee,0x35,0xdc,0x77,0xb9,0x27,0x72,0x9e,0xe6,0xdd,
0xd0,0xbb,0xa8,0x77,0x5c,0xee,0xc1,0xdd,0xa3,0xbb,
0x87,0x77,0xae,0xf0,0x5d,0xe1,0xbb,0xc5,0xf7,0x8f,
0xef,0x2f,0xde,0x87,0xbd,0x4f,0x7b,0x3e,0xf7,0xbd,
0xf1,0xfb,0xe8,0xf7,0xdc,0xef,0xcb,0xdf,0xbf,0xbf,
0xcf,0x7f,0xef,0x00,0x9e,0x03,0x3c,0x09,0x78,0x1a,
0xf0,0x4b,0xe0,0xdb,0xc2,0x1f,0x84,0xdf,0x0b,0x1e,
0x18,0xfc,0x37,0x78,0x78,0xf1,0x07,0xe2,0x3f,0xc4,
0xbf,0x89,0xff,0x15,0x5e,0x2c,0xbc,0x60,0x78,0xcd,
0xf1,0xaf,0xe3,0x8b,0xc7,0x7f,0x8f,0xbf,0x20,0xbe,
0x43,0xfc,0x8c,0xf9,0x23,0xf2,0x5f,0xe4,0xef,0xca,
0x3f,0x95,0x2f,0x2b,0x3e,0x58,0x7c,0xb3,0xf9,0x6e,
0xf2,0xe7,0xe5,0xdf,0xcc,0x0f,0x98,0xaf,0x32,0x5e,
0x67,0x3c,0xd2,0xf9,0xae,0xf3,0x75,0xe7,0x0f,0xce,
0x57,0x9d,0x3f,0x3b,0xbe,0x78,0xfc,0xf6,0xf9,0xf6,
0xf3,0xff,0xe8,0x2f,0xd0,0xb7,0xa1,0xff,0x45,0x1e,
0x8c,0x3d,0x1c,0xfa,0x43,0xf4,0x97,0xe9,0x57,0xd3,
0x07,0xa6,0x9f,0x4e,0x9e,0x9e,0x7d,0x42,0x00 };
/* font index size: 179 bytes */

const craft::packedbdf_t grapesoda = {
	grapesoda_index,
	0,
	grapesoda_data,
	1,
	0,
	32,
	126,
	0,
	0,
	15,
	4,
	4,
	2,
	4,
	4,
	16,
	8
};
