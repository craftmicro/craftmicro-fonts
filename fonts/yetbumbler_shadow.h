#pragma once

#include "display/PackedBDF.h"

static const unsigned char yetbumbler_shadow_data[] = {
0x02,0x20,0x28,0x07,0x27,0x9d,0x97,0x82,0xe0,0x0c,
0x82,0x34,0x92,0xfc,0x13,0x27,0xc8,0x45,0x00,0x14,
0xcc,0x22,0x80,0x0a,0x66,0x77,0x00,0x11,0x27,0xc4,
0x00,0x89,0xc0,0x48,0x12,0x48,0x04,0x06,0xfe,0x0e,
0xe0,0x3c,0x11,0x63,0x06,0x09,0x19,0x77,0x11,0x27,
0xc4,0x04,0x0e,0x20,0x44,0x72,0x01,0x41,0x9f,0x80,
0x06,0x82,0x1c,0x97,0x09,0x27,0xa4,0x08,0xe4,0x82,
0x93,0x80,0x09,0x27,0xa0,0x82,0x9a,0x11,0xb8,0x06,
0x62,0x9c,0x17,0x0e,0xe0,0x3c,0x04,0x80,0x2c,0xe0,
0x83,0x80,0x06,0x86,0x9c,0x97,0x0c,0x61,0x34,0x02,
0xfc,0x06,0x67,0x9c,0x17,0x0b,0x27,0xac,0x84,0x38,
0x10,0xc2,0x38,0x0f,0x27,0xb8,0x10,0x08,0xcc,0x91,
0x01,0x43,0x3e,0x09,0x27,0xa4,0x8a,0x68,0x4e,0x0d,
0x27,0xb0,0x20,0x22,0x58,0x83,0x0d,0x00,0xbf,0x0d,
0x27,0xb0,0x20,0x22,0x58,0x83,0x12,0x05,0x19,0xe0,
0x0d,0x27,0xb5,0x82,0xe6,0x01,0x0e,0x0d,0x27,0xb4,
0x02,0x3c,0x10,0x17,0x20,0x41,0xbe,0x0d,0x27,0xb4,
0x04,0x38,0x10,0x11,0x20,0x51,0x9e,0x0d,0x27,0xb4,
0x02,0xe4,0x08,0x30,0x41,0x82,0x1c,0x0d,0x27,0xb0,
0x20,0x22,0x60,0x11,0x20,0x51,0x9e,0x0d,0x27,0xb0,
0x20,0x22,0x40,0xa1,0x32,0x04,0x19,0xe0,0x06,0xc0,
0x1c,0x17,0x82,0xe0,0x07,0x07,0x1c,0x17,0x09,0x2e,
0x0a,0xe0,0x2c,0x04,0x30,0x91,0x24,0x70,0x0c,0xc0,
0x34,0x02,0xfe,0x01,0x7e,0x0a,0xe0,0x28,0x81,0x22,
0x08,0x63,0x38,0x0d,0x27,0xb0,0x20,0x2e,0x40,0x83,
0x3d,0x02,0x1c,0x13,0x07,0xc8,0x45,0x20,0x14,0x0c,
0x86,0x13,0x03,0x80,0x13,0x27,0xcc,0x02,0x20,0x09,
0x00,0x20,0xc4,0x69,0x71,0xc0,0x0f,0x27,0xb8,0x10,
0x08,0xcc,0x01,0x19,0x01,0x03,0x7e,0x0f,0x27,0xb8,
0x10,0x08,0xc8,0xb8,0x80,0x88,0x0a,0x19,0xf0,0x0f,
0x27,0xb8,0x10,0x08,0xcc,0x91,0x01,0x03,0x7e,0x0d,
0x27,0xb4,0x02,0x3e,0x04,0x19,0x00,0xbf,0x0d,0x27,
0xb4,0x02,0x3e,0x02,0x1d,0x04,0x38,0x0f,0x27,0xbc,
0x02,0x1e,0x82,0x23,0x20,0x28,0x67,0xc0,0x0f,0x27,
0xbc,0x91,0x80,0x23,0x30,0x45,0xdc,0x07,0x27,0x9e,
0x91,0x70,0x0d,0x27,0xb5,0x82,0x24,0x0a,0x33,0xc0,
0x0f,0x27,0xbc,0x11,0x03,0x06,0x04,0x02,0x11,0x19,
0x77,0x0d,0x27,0xb6,0x11,0x00,0xbf,0x13,0x27,0xc8,
0x43,0x00,0x11,0x24,0x79,0x92,0x0b,0x8e,0x11,0x27,
0xc0,0x84,0x22,0x09,0x80,0x11,0x08,0xc4,0x52,0xe7,
0x0f,0x27,0xb8,0x10,0x08,0xcc,0x91,0x01,0x43,0x3e,
0x0f,0x27,0xb8,0x10,0x08,0xc8,0x08,0x18,0xf4,0x10,
0x70,0x11,0x27,0xc0,0x08,0x02,0x39,0x82,0x11,0x18,
0x05,0x12,0x7f,0x0f,0x27,0xb8,0x10,0x08,0xc8,0x08,
0x18,0x10,0x88,0xcb,0xb8,0x0f,0x27,0xbc,0x01,0x1f,
0x02,0x41,0x39,0x01,0x03,0x7e,0x0f,0x27,0xbc,0x01,
0x67,0xb0,0x83,0x80,0x0f,0x27,0xbe,0x11,0x01,0x43,
0x3e,0x13,0x27,0xcc,0x10,0x42,0x14,0x8c,0x02,0x21,
0x80,0x41,0x30,0x38,0x17,0x27,0xdc,0x90,0x10,0x91,
0x49,0x30,0x02,0x20,0x60,0x64,0x1d,0xc0,0x13,0x27,
0xc8,0x82,0x10,0xa0,0x64,0x30,0x08,0x01,0x06,0x23,
0x4b,0x8e,0x0f,0x27,0xbc,0x11,0x01,0x43,0x26,0x90,
0x83,0x80,0x0f,0x27,0xbc,0x01,0x71,0x03,0x06,0x0c,
0x80,0x2f,0xe0,0x09,0x27,0xa4,0x08,0xe4,0xa0,0x5e,
0x0b,0x27,0xac,0x10,0x24,0x82,0x04,0x90,0x47,0x09,
0x27,0xa4,0x0a,0x6c,0x5e,0x0a,0x82,0x28,0x50,0x17,
0xc0,0x0c,0x67,0x34,0x02,0xfc,0x06,0x82,0x1c,0x97,
0x0c,0xc7,0xb4,0x02,0x24,0x0a,0x13,0xe0,0x0d,0x27,
0xb4,0x90,0x0c,0x08,0x90,0x20,0xdf,0x00,0x0a,0xc7,
0xac,0x04,0x70,0x51,0x3c,0x0d,0x27,0xb5,0x82,0x24,
0x0a,0x13,0xe0,0x0c,0xc7,0xb0,0x28,0x04,0x3a,0x43,
0x80,0x09,0x27,0xa4,0x08,0xe0,0x47,0x04,0xe0,0x0d,
0x06,0xb4,0x02,0x24,0x0a,0x12,0x20,0xc7,0x00,0x0d,
0x27,0xb4,0x90,0x08,0x0c,0x92,0xfc,0x06,0xc7,0x9d,
0x97,0x09,0x1e,0x9e,0x08,0xdc,0x0d,0x27,0xb4,0x90,
0x24,0x08,0x30,0x22,0x5f,0x80,0x07,0x27,0x9e,0x91,
0x70,0x12,0xc7,0xc8,0x24,0x00,0xc9,0x25,0xff,0x0c,
0xc7,0xb0,0x20,0x32,0x4b,0xf0,0x0c,0xc7,0xb0,0x20,
0x22,0x40,0xa3,0x3c,0x0d,0x06,0xb0,0x20,0x22,0x40,
0x83,0x1c,0x21,0xc0,0x0d,0x06,0xb4,0x02,0x24,0x0a,
0x13,0x20,0x43,0x80,0x08,0xc7,0xa4,0x08,0xe0,0x9c,
0x0a,0xc7,0xac,0x05,0x30,0x43,0x78,0x09,0x27,0xa4,
0x94,0x08,0xc2,0x93,0x80,0x0c,0xc7,0xb4,0x92,0x05,
0x09,0xf0,0x0c,0xc7,0xb4,0x12,0x05,0x19,0x61,0x80,
0x12,0xc7,0xc8,0x82,0x24,0xc0,0x05,0x33,0x3b,0x80,
0x0c,0xc7,0xb0,0x90,0x28,0xc0,0x89,0x7e,0x0d,0x06,
0xb4,0x92,0x05,0x08,0x10,0x6f,0x80,0x0c,0xc7,0xb4,
0x02,0x8e,0x01,0x7e,0x0b,0x27,0xac,0x04,0x38,0x12,
0x40,0x92,0x38,0x07,0x66,0x9e,0x99,0x2e,0x0b,0x27,
0xa8,0x81,0x25,0x01,0x0c,0x21,0x9c,0x10,0x80,0xc0,
0x24,0x02,0x23,0x7f,0x00 };
/* font data size: 805 bytes */

static const unsigned char yetbumbler_shadow_index[] = {
0x00,0x00,0x30,0x24,0x0e,0x06,0xc2,0x70,0xc0,0x3c,
0x10,0x04,0x81,0x3c,0x53,0x17,0x06,0x01,0x94,0x69,
0x1c,0x47,0xb2,0x04,0x8b,0x25,0x89,0xd2,0x9c,0xb1,
0x2e,0xcc,0x53,0x40,0xd6,0x37,0x0e,0x43,0xac,0xf3,
0x3f,0x50,0x84,0x51,0x1f,0x4a,0xd3,0x54,0xf9,0x47,
0x54,0x95,0xb5,0x81,0x68,0x5c,0xd7,0x96,0x11,0x90,
0x66,0x9a,0x56,0xc5,0xbd,0x72,0x1d,0x07,0x5d,0xe4,
0x7c,0xa0,0x08,0x2a,0x15,0x87,0x22,0x58,0xae,0x31,
0x8d,0xa3,0xa9,0x0a,0x4c,0x94,0xe5,0xb9,0x8e,0x6b,
0x9d,0x67,0xda,0x06,0x86,0xa4,0x29,0x5a,0x76,0xa4,
0xab,0x2b,0x6b,0x02,0xc6,0xb3,0x6d,0x5b,0x72,0xe4,
0xbb,0xaf,0x6b,0xff,0x06,0xc3,0xf1,0x4c,0x74 };
/* font index size: 119 bytes */

const craft::packedbdf_t yetbumbler_shadow = {
	yetbumbler_shadow_index,
	0,
	yetbumbler_shadow_data,
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
	9,
	8
};
