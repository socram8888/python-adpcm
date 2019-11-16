/*
 * samples.c
 *
 * Created: 09/11/2019 17:03:59
 *  Author: Marcos
 */ 

#include "samples.h"

const PROGMEM uint8_t goose_01[] = {
	0x80, 0x00, 0x09, 0x00, 0x00, 0x00, 0x10, 0x00, 0x09, 0x00, 0x00, 0x00, 0x09, 0x90, 0x90, 0x09,
	0x90, 0x09, 0x00, 0x00, 0x00, 0x11, 0x01, 0x11, 0x00, 0x21, 0x31, 0x21, 0x90, 0x10, 0x10, 0x91,
	0xb9, 0x0b, 0x99, 0x90, 0x91, 0x0b, 0xa9, 0xca, 0x1e, 0x86, 0x08, 0x89, 0x49, 0x05, 0x88, 0x08,
	0x1a, 0x90, 0x91, 0xa1, 0x19, 0x91, 0x19, 0x92, 0x11, 0xbb, 0x10, 0x10, 0x11, 0xb0, 0x09, 0xb9,
	0x99, 0xb9, 0x9a, 0x91, 0x19, 0x21, 0x11, 0x02, 0x21, 0x01, 0x10, 0x12, 0x11, 0x92, 0x99, 0x99,
	0x9a, 0x9a, 0x19, 0xba, 0x9a, 0x21, 0x12, 0x90, 0x19, 0x11, 0x12, 0x09, 0x91, 0x99, 0x10, 0x01,
	0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x00, 0x91, 0x99, 0x99, 0xb9, 0x99, 0x9a, 0x9a, 0x99,
	0x19, 0x11, 0x99, 0x09, 0x31, 0x33, 0x91, 0x00, 0x31, 0x12, 0x00, 0x99, 0x99, 0x00, 0x10, 0x92,
	0x09, 0x99, 0x10, 0x01, 0x90, 0x99, 0x09, 0x00, 0x99, 0x99, 0x99, 0x09, 0x09, 0x01, 0x01, 0x01,
	0x21, 0x11, 0x01, 0x10, 0x00, 0x90, 0x00, 0x01, 0x99, 0x9b, 0x9a, 0x11, 0x00, 0x99, 0x09, 0x21,
	0x00, 0x90, 0x0a, 0x11, 0x01, 0x11, 0x11, 0x91, 0x09, 0x11, 0x22, 0x90, 0x99, 0x09, 0x21, 0x11,
	0xa0, 0x9a, 0x09, 0x90, 0x09, 0xaa, 0x99, 0x0a, 0x90, 0x19, 0x90, 0x09, 0xba, 0x1a, 0x37, 0x81,
	0x98, 0x19, 0x53, 0x11, 0x91, 0xb9, 0x1b, 0x11, 0x91, 0xab, 0xbb, 0x12, 0x91, 0xda, 0x19, 0x60,
	0x88, 0xd0, 0x1b, 0x15, 0x91, 0x08, 0x0b, 0x12, 0x29, 0x99, 0xb9, 0x09, 0x10, 0x92, 0xab, 0x40,
	0x83, 0x00, 0xdb, 0x1c, 0x17, 0x99, 0x99, 0x90, 0x31, 0x91, 0xb9, 0x91, 0x0c, 0x52, 0x13, 0x09,
	0xa9, 0x31, 0x25, 0xa0, 0xba, 0x19, 0x91, 0xb9, 0xab, 0x22, 0x01, 0x0a, 0x99, 0x90, 0xaa, 0x09,
	0x32, 0x92, 0xa9, 0x99, 0x21, 0x91, 0x9a, 0xb9, 0x19, 0x33, 0x15, 0x99, 0xa0, 0x19, 0x73, 0x91,
	0xaa, 0x89, 0x20, 0x24, 0xd9, 0xab, 0x8a, 0x31, 0x15, 0xb0, 0xbb, 0x39, 0x45, 0x91, 0xba, 0x0a,
	0x73, 0x02, 0x9a, 0x9a, 0x00, 0x39, 0x84, 0x90, 0x9a, 0xbb, 0x21, 0x90, 0xb9, 0xba, 0x9b, 0x33,
	0x33, 0x11, 0xeb, 0x19, 0x10, 0x02, 0xda, 0x33, 0x09, 0x43, 0x09, 0x61, 0xc8, 0x90, 0x11, 0x0a,
	0x11, 0xbc, 0x51, 0xf9, 0x99, 0x32, 0x18, 0x13, 0x8d, 0x69, 0x82, 0x13, 0xcb, 0xab, 0x30, 0x21,
	0x21, 0xf0, 0x9a, 0x28, 0x02, 0xd9, 0xab, 0x1b, 0x17, 0x0a, 0x32, 0x03, 0x35, 0xad, 0x88, 0x00,
	0xb0, 0xb8, 0x09, 0x30, 0x91, 0x51, 0x03, 0x09, 0x33, 0x90, 0x20, 0x91, 0x9a, 0xa1, 0xae, 0x0a,
	0x09, 0x08, 0x91, 0xab, 0x11, 0x52, 0x02, 0xa9, 0xbb, 0x3b, 0x45, 0x02, 0xbb, 0x0a, 0x32, 0x23,
	0xea, 0x9a, 0x09, 0x10, 0x31, 0x13, 0xb9, 0x99, 0x51, 0x14, 0x90, 0xdb, 0x9a, 0x31, 0x01, 0xba,
	0xbb, 0x3a, 0x35, 0x22, 0xa8, 0x09, 0x21, 0x0a, 0x01, 0xb9, 0x11, 0xb1, 0xbd, 0x9b, 0x9a, 0xa9,
	0xdb, 0x1d, 0x42, 0x25, 0x82, 0x08, 0x11, 0x31, 0xa8, 0xcd, 0x09, 0x31, 0x15, 0xb2, 0x9c, 0x0b,
	0x20, 0x23, 0xa0, 0xdb, 0x19, 0x20, 0xdb, 0xbb, 0x9b, 0x9b, 0xa9, 0x62, 0x26, 0x90, 0x08, 0x10,
	0x33, 0xea, 0x0a, 0x51, 0x12, 0x81, 0x0b, 0x9a, 0xb8, 0x0c, 0x90, 0xeb, 0x0b, 0x21, 0x02, 0x9a,
	0xa9, 0x91, 0x11, 0x19, 0x31, 0x22, 0xc9, 0x9b, 0x39, 0x43, 0x11, 0x24, 0x33, 0xb1, 0x0b, 0x12,
	0xb9, 0xbb, 0xbb, 0xba, 0xad, 0x1a, 0x32, 0x04, 0xaa, 0xbb, 0x39, 0x14, 0xb8, 0xa9, 0x0a, 0x12,
	0x33, 0x33, 0x21, 0x53, 0x01, 0xa9, 0x9a, 0x31, 0x23, 0xd9, 0xcb, 0x9b, 0x00, 0x90, 0xeb, 0xba,
	0x0b, 0x27, 0x21, 0x34, 0xd9, 0x09, 0x01, 0x22, 0xb9, 0x18, 0x51, 0x15, 0x90, 0xba, 0x9c, 0x11,
	0x09, 0xdb, 0xbc, 0x8a, 0x38, 0x02, 0x9e, 0x23, 0x43, 0x37, 0xc9, 0x09, 0x01, 0x92, 0xca, 0x18,
	0x43, 0x24, 0x10, 0xa9, 0xac, 0xa9, 0x30, 0x25, 0xfa, 0xac, 0x88, 0x30, 0x90, 0x11, 0xb9, 0x33,
	0x04, 0x0b, 0x1a, 0xa3, 0xbb, 0x39, 0x47, 0x23, 0x00, 0x98, 0x99, 0xa0, 0xdb, 0x89, 0x10, 0xab,
	0x99, 0xa9, 0x99, 0x19, 0xa0, 0x0a, 0x99, 0x90, 0x99, 0x9b, 0x10, 0x99, 0x20, 0x34, 0x34, 0x91,
	0x90, 0x32, 0x93, 0xc9, 0x9a, 0x31, 0x13, 0x19, 0x91, 0xcb, 0x09, 0x09, 0xb9, 0xcc, 0xab, 0x22,
	0x11, 0x21, 0x09, 0x33, 0x33, 0x01, 0x00, 0xa0, 0x1a, 0x33, 0x31, 0x33, 0x31, 0x00, 0xa9, 0xb9,
	0xbb, 0x9b, 0xb9, 0xab, 0xbb, 0x39, 0x15, 0xa0, 0xbb, 0x3a, 0x43, 0x98, 0x91, 0x19, 0x32, 0x36,
	0x32, 0x01, 0x99, 0x0b, 0x01, 0xfb, 0xcc, 0x19, 0x23, 0xa0, 0xea, 0x09, 0x42, 0x13, 0xb9, 0x89,
	0x31, 0x13, 0xb0, 0xaa, 0x09, 0x32, 0x37, 0x11, 0xa8, 0x8b, 0x13, 0xfd, 0x9a, 0x30, 0x33, 0xb1,
	0xef, 0x18, 0x21, 0x91, 0xab, 0x18, 0x43, 0x80, 0x88, 0x98, 0x90, 0x10, 0x45, 0x22, 0x01, 0xc0,
	0xad, 0x92, 0x20, 0x36, 0xa0, 0xca, 0x9c, 0x11, 0x92, 0xcb, 0xac, 0x21, 0x24, 0xb0, 0x09, 0x9a,
	0xbb, 0xa9, 0x71, 0x03, 0x08, 0x33, 0x82, 0xba, 0x19, 0x32, 0xb0, 0xdb, 0x09, 0x13, 0xb0, 0xad,
	0x08, 0x42, 0x04, 0x99, 0xb9, 0xcb, 0x89, 0x13, 0xb9, 0xbc, 0x18, 0x23, 0x41, 0x33, 0x35, 0xa0,
	0x0a, 0x53, 0x23, 0xc9, 0xcc, 0x8a, 0x21, 0xb9, 0x1a, 0x01, 0x23, 0xa1, 0x99, 0xbb, 0x40, 0x91,
	0xb0, 0xbb, 0x41, 0x34, 0x05, 0x81, 0x41, 0x33, 0xb9, 0xcd, 0xca, 0xbd, 0x15, 0x01, 0x82, 0xaf,
	0x18, 0x21, 0x02, 0xa9, 0x10, 0x00, 0x91, 0x1b, 0x30, 0x99, 0xb0, 0x39, 0x57, 0x22, 0x81, 0xeb,
	0x9a, 0xaa, 0x18, 0x42, 0x33, 0xf2, 0xad, 0x20, 0x12, 0x90, 0x9c, 0x18, 0x31, 0x03, 0x9b, 0x99,
	0x38, 0x43, 0x43, 0x02, 0x18, 0xa9, 0x92, 0x3b, 0x97, 0xcb, 0x88, 0x14, 0xe8, 0x0a, 0x11, 0x91,
	0xba, 0x19, 0x13, 0x21, 0xfa, 0xab, 0x09, 0x52, 0x22, 0x11, 0x8b, 0x31, 0x35, 0xa2, 0x1a, 0x33,
	0xb9, 0x9d, 0x00, 0x00, 0x99, 0xb9, 0x9b, 0x11, 0x32, 0x15, 0xba, 0xcc, 0x8a, 0x22, 0xb9, 0xbd,
	0x1a, 0x43, 0x23, 0x34, 0x11, 0x30, 0x53, 0x01, 0xba, 0xbc, 0x9a, 0x01, 0xa0, 0x9b, 0x1b, 0x12,
	0x03, 0x99, 0x9a, 0x21, 0x11, 0xc9, 0xad, 0x18, 0x32, 0x35, 0x33, 0x44, 0x21, 0x11, 0xdc, 0xdb,
	0xbb, 0x98, 0x52, 0x14, 0xb8, 0xae, 0x20, 0x33, 0xa3, 0xac, 0x28, 0x32, 0x93, 0xad, 0x20, 0x91,
	0x02, 0x43, 0x25, 0x13, 0xb8, 0xdf, 0x88, 0xa8, 0x30, 0x14, 0x12, 0xfc, 0x0b, 0x22, 0x11, 0xb9,
	0x9b, 0x31, 0x15, 0xb0, 0x89, 0x88, 0x31, 0x53, 0x33, 0x00, 0x91, 0xa9, 0xb9, 0x36, 0xd9, 0x9a,
	0x0a, 0x83, 0xab, 0x11, 0xa9, 0x99, 0x99, 0x02, 0x10, 0xa1, 0xad, 0x09, 0x30, 0x12, 0x53, 0x92,
	0x00, 0x21, 0x43, 0x90, 0x31, 0xa1, 0xbd, 0x09, 0x20, 0x33, 0xb9, 0xbb, 0x10, 0x34, 0x12, 0xc9,
	0xae, 0x9a, 0x08, 0x01, 0xbb, 0x8e, 0x28, 0x53, 0x33, 0x23, 0x80, 0x29, 0x33, 0x93, 0xdc, 0xbb,
	0x89, 0x80, 0x01, 0x99, 0x31, 0x13, 0x91, 0xab, 0x10, 0x12, 0x91, 0xbd, 0xab, 0x31, 0x37, 0x33,
	0x33, 0x02, 0x11, 0xb9, 0xcd, 0xdd, 0x9a, 0x31, 0x33, 0x03, 0xdf, 0x19, 0x31, 0x03, 0xc9, 0x09,
	0x10, 0x13, 0x9a, 0x99, 0x10, 0x12, 0x31, 0x55, 0x22, 0x93, 0xdd, 0xbb, 0x00, 0x19, 0x26, 0x11,
	0xd8, 0xad, 0x10, 0x22, 0x90, 0xbb, 0x19, 0x34, 0x91, 0xa9, 0x90, 0x10, 0x13, 0x73, 0x13, 0xa0,
	0x10, 0x91, 0xbb, 0x24, 0xcb, 0x9a, 0x9a, 0x91, 0x9a, 0x92, 0xbd, 0x0a, 0x31, 0x53, 0x92, 0xcd,
	0x09, 0x01, 0x12, 0x10, 0x01, 0x21, 0x90, 0x51, 0x21, 0x43, 0xa1, 0xeb, 0x8a, 0x30, 0x02, 0xda,
	0xab, 0x22, 0x22, 0x13, 0x01, 0xdb, 0xbd, 0x89, 0xa1, 0x99, 0xbb, 0x41, 0x34, 0x33, 0x35, 0x14,
	0x01, 0x90, 0xa8, 0xfb, 0x9a, 0x9a, 0x9a, 0x00, 0x63, 0x91, 0x88, 0xa8, 0x19, 0x43, 0x02, 0xcb,
	0x99, 0xba, 0x1b, 0x45, 0x23, 0x32, 0x23, 0x21, 0x92, 0xfd, 0xdb, 0x9a, 0x43, 0x11, 0x02, 0xcd,
	0x09, 0x22, 0x03, 0xb9, 0x8b, 0x20, 0x24, 0x90, 0x8a, 0x19, 0x15, 0x0a, 0x44, 0x13, 0x01, 0xfa,
	0xad, 0x18, 0x08, 0x54, 0x11, 0xb8, 0xbe, 0x28, 0x12, 0x90, 0xbc, 0x18, 0x42, 0x03, 0xac, 0x00,
	0x9a, 0x22, 0x10, 0x13, 0x33, 0x05, 0x11, 0x01, 0xb9, 0x19, 0xda, 0xab, 0x1a, 0x31, 0xa0, 0xba,
	0x9b, 0x52, 0x33, 0x80, 0xdb, 0xbb, 0x98, 0x13, 0x19, 0xb0, 0x0b, 0x33, 0x33, 0x37, 0x42, 0x91,
	0xba, 0x9a, 0x19, 0xa9, 0xac, 0xbc, 0x20, 0x33, 0x33, 0x22, 0xb0, 0xbd, 0x0b, 0x11, 0xdb, 0xac,
	0x29, 0x36, 0x34, 0x12, 0x21, 0x12, 0xa1, 0xcd, 0xcb, 0xce, 0x18, 0x22, 0x02, 0x98, 0x9c, 0x41,
	0x23, 0xb0, 0xab, 0x29, 0x24, 0x93, 0xbd, 0x0b, 0x42, 0x34, 0x32, 0x21, 0x33, 0xec, 0xbb, 0xbd,
	0x09, 0x41, 0x63, 0xb3, 0x9f, 0x10, 0x11, 0xa1, 0xab, 0x0a, 0x43, 0x22, 0xc9, 0x0a, 0x31, 0x23,
	0x30, 0x15, 0x22, 0xb0, 0xcc, 0x9f, 0x12, 0x09, 0x90, 0x60, 0xa1, 0x9b, 0x09, 0x12, 0xcb, 0x9d,
	0x20, 0x33, 0xb1, 0x9f, 0x88, 0x51, 0x83, 0x18, 0xa9, 0x30, 0x15, 0x01, 0xa9, 0x10, 0xb9, 0x99,
	0x11, 0x90, 0x99, 0xa9, 0xac, 0x10, 0x33, 0x23, 0xca, 0xbc, 0x0a, 0x31, 0x13, 0x91, 0x9a, 0x9b,
	0x22, 0x36, 0x81, 0x88, 0x30, 0x15, 0x03, 0xca, 0xab, 0xba, 0xad, 0x09, 0x00, 0x11, 0x01, 0x20,
	0x11, 0x33, 0x01, 0xdb, 0xbb, 0x0a, 0x32, 0x37, 0x11, 0x32, 0x34, 0x13, 0xd9, 0xad, 0xca, 0xab,
	0x39, 0x15, 0x01, 0xd9, 0x0b, 0x53, 0x03, 0x9a, 0x9b, 0x22, 0x25, 0x99, 0xaa, 0x99, 0x30, 0x34,
	0x73, 0x14, 0xb8, 0xfb, 0x18, 0x9c, 0x21, 0x88, 0x33, 0xfb, 0x89, 0x22, 0x91, 0xac, 0x9a, 0x51,
	0x14, 0x80, 0xaa, 0x9c, 0x32, 0x34, 0x13, 0x89, 0x23, 0xa2, 0x9e, 0xb0, 0xbb, 0x90, 0x29, 0x17,
	0xaa, 0xa9, 0x19, 0xb9, 0x9b, 0x2a, 0x17, 0x98, 0x9b, 0x09, 0x19, 0x35, 0x90, 0x12, 0x30, 0x17,
	0x01, 0x98, 0x90, 0x0a, 0x91, 0x11, 0x91, 0xcb, 0x9a, 0x11, 0x00, 0x11, 0x03, 0xb9, 0xac, 0x9a,
	0x31, 0x90, 0xb9, 0x9a, 0x30, 0x53, 0x23, 0x10, 0x20, 0x33, 0x14, 0x08, 0xca, 0xbb, 0xbb, 0xbb,
	0x1b, 0x11, 0x00, 0x19, 0x13, 0x31, 0x92, 0x9b, 0x9a, 0xdb, 0x09, 0x10, 0x53, 0x32, 0x34, 0x34,
	0x13, 0xb9, 0xfb, 0xbc, 0xbb, 0x5a, 0x01, 0x01, 0xe9, 0x29, 0x31, 0x85, 0xb9, 0x1a, 0x42, 0x24,
	0xa9, 0xab, 0xaa, 0x33, 0x33, 0x54, 0x11, 0x12, 0xeb, 0x0a, 0xbf, 0x31, 0x10, 0x12, 0xc8, 0xbb,
	0x39, 0xb2, 0xfd, 0x89, 0x31, 0x26, 0x00, 0x9a, 0x9a, 0x21, 0x13, 0x31, 0x13, 0x30, 0x33, 0xec,
	0x81, 0x9d, 0x88, 0x01, 0x12, 0x9a, 0xbc, 0x00, 0x11, 0xbc, 0x18, 0x44, 0x12, 0xab, 0x19, 0x10,
	0xb0, 0xbb, 0x32, 0x73, 0x12, 0x31, 0x01, 0x90, 0xbb, 0xbb, 0x0b, 0x91, 0x9c, 0x9a, 0x11, 0x15,
	0xa9, 0x98, 0x9a, 0x11, 0xa0, 0xba, 0x99, 0xbb, 0x0a, 0x21, 0x34, 0x42, 0x24, 0x11, 0x13, 0x01,
	0xdb, 0xbb, 0xaa, 0x9b, 0x9a, 0x39, 0x91, 0x20, 0x10, 0x24, 0x90, 0x00, 0x9a, 0xeb, 0x9a, 0x0a,
	0x21, 0x73, 0x33, 0x43, 0x12, 0x98, 0xc9, 0xbc, 0xce, 0xab, 0x04, 0x21, 0x01, 0x0b, 0x11, 0x35,
	0xa9, 0xab, 0x81, 0x65, 0x00, 0x9a, 0xaa, 0x19, 0x34, 0x23, 0x20, 0x12, 0x39, 0xf3, 0xbf, 0x19,
	0x21, 0x21, 0xa4, 0x8c, 0x19, 0x90, 0xda, 0xaa, 0x28, 0x55, 0x01, 0x88, 0x99, 0x11, 0x03, 0x80,
	0x00, 0x42, 0x12, 0xb1, 0xfa, 0x99, 0x99, 0x1a, 0x9a, 0x22, 0xa2, 0x01, 0x9b, 0x9a, 0xbb, 0x22,
	0x01, 0x33, 0x31, 0x05, 0xa8, 0xda, 0x09, 0x22, 0x1a, 0x73, 0x12, 0x13, 0xb8, 0xa9, 0xb9, 0xbb,
	0xbf, 0x1a, 0x21, 0x12, 0x91, 0xbb, 0x19, 0x92, 0x01, 0xcb, 0x09, 0x19, 0x01, 0x91, 0x20, 0x43,
	0x24, 0x21, 0x33, 0xa0, 0xdb, 0xab, 0x9b, 0xb9, 0x8c, 0x21, 0x33, 0x23, 0x11, 0x12, 0xb9, 0xbd,
	0x0a, 0x10, 0x99, 0xba, 0x39, 0x44, 0x44, 0x22, 0x31, 0x81, 0xcb, 0xbe, 0xd9, 0xbc, 0x39, 0x33,
	0x13, 0x80, 0x21, 0x13, 0x92, 0x9e, 0x09, 0x88, 0x30, 0x91, 0x02, 0x31, 0x21, 0x21, 0x11, 0x37,
	0x99, 0xce, 0x9b, 0x24, 0x10, 0xa2, 0x8a, 0xa0, 0x2b, 0xf9, 0x0b, 0x81, 0x31, 0x07, 0x88, 0x80,
	0x41, 0x11, 0x91, 0x19, 0x30, 0x24, 0x92, 0xdb, 0x8d, 0xba, 0x90, 0x20, 0x11, 0xa1, 0x99, 0x1b,
	0x0b, 0xb3, 0x1b, 0x11, 0x33, 0x14, 0x39, 0xc9, 0x8a, 0xb0, 0x0b, 0x0a, 0x75, 0x21, 0x01, 0x99,
	0x98, 0x09, 0xb0, 0xbf, 0xaa, 0x99, 0x11, 0x31, 0x03, 0x00, 0x11, 0x33, 0x01, 0xba, 0x9b, 0x1a,
	0x21, 0xb1, 0x10, 0x32, 0x37, 0x11, 0x99, 0x0b, 0x00, 0x01, 0xc9, 0xbc, 0x8b, 0x99, 0x10, 0x33,
	0x23, 0x99, 0x9b, 0x9a, 0x99, 0x10, 0x12, 0x90, 0x31, 0x36, 0x33, 0x33, 0x10, 0xb0, 0xcc, 0xbd,
	0xab, 0xdb, 0x99, 0x31, 0x34, 0x23, 0x03, 0x98, 0x90, 0xac, 0x10, 0x01, 0x10, 0x00, 0x43, 0x22,
	0x11, 0xb9, 0x21, 0x36, 0x81, 0xfb, 0x9d, 0x20, 0x00, 0x18, 0x80, 0xda, 0xbb, 0x99, 0x41, 0x13,
	0x8b, 0x33, 0x34, 0x43, 0x23, 0x99, 0xbb, 0x9c, 0xa0, 0x33, 0x43, 0xa8, 0xcb, 0x3a, 0x33, 0x94,
	0xc9, 0xaa, 0xbb, 0xac, 0x39, 0x33, 0x90, 0xa0, 0x31, 0x31, 0x23, 0x91, 0xaa, 0xab, 0x99, 0x63,
	0x34, 0x01, 0xa9, 0x08, 0xa9, 0xba, 0xbb, 0xba, 0xdb, 0x09, 0x21, 0x23, 0x11, 0x11, 0x11, 0x92,
	0xb9, 0x9a, 0xaa, 0x9b, 0x99, 0x31, 0x63, 0x32, 0x22, 0x11, 0x99, 0xc9, 0xab, 0x9b, 0xbb, 0xbf,
	0x0a, 0x21, 0x13, 0x91, 0x11, 0x19, 0x91, 0x9b, 0x30, 0x14, 0x91, 0x09, 0x31, 0x53, 0x22, 0x02,
	0x90, 0xbd, 0xaa, 0xb9, 0xbe, 0xb0, 0x38, 0x30, 0x25, 0xa0, 0xab, 0xb9, 0x13, 0x32, 0x22, 0x33,
	0x11, 0x09, 0x32, 0x11, 0x91, 0x99, 0x2b, 0x27, 0x98, 0xb9, 0x9d, 0x1c, 0x84, 0x21, 0x91, 0xf9,
	0x9b, 0x19, 0x11, 0x81, 0xab, 0x21, 0x35, 0x43, 0x04, 0x99, 0x9b, 0x20, 0x03, 0x19, 0x01, 0x33,
	0x11, 0xb9, 0xbc, 0x9a, 0x0b, 0x90, 0xbb, 0x9b, 0x31, 0x24, 0x01, 0x9a, 0xa9, 0x90, 0x90, 0x1a,
	0x00, 0x00, 0x22, 0x35, 0x26, 0x00, 0xa8, 0xaa, 0xab, 0xba, 0xbb, 0xae, 0x9a, 0x10, 0x32, 0x24,
	0x02, 0x99, 0x20, 0x12, 0x09, 0xaa, 0x09, 0x32, 0x31, 0x12, 0x31, 0x32, 0x33, 0xb0, 0x9a, 0xdb,
	0x9d, 0xa9, 0x29, 0x32, 0xa0, 0xba, 0x9b, 0x01, 0x32, 0x33, 0x91, 0x19, 0x33, 0x13, 0x19, 0x91,
	0x11, 0x11, 0x11, 0x04, 0x98, 0xfb, 0xbc, 0x00, 0x42, 0x22, 0xb2, 0xcb, 0x9b, 0xa0, 0x31, 0x91,
	0xdb, 0x0a, 0x41, 0x26, 0x11, 0xa9, 0x98, 0x10, 0x30, 0x33, 0x11, 0x92, 0xaa, 0xba, 0xab, 0x99,
	0xa9, 0xb9, 0x9a, 0x09, 0x31, 0x13, 0xb9, 0xb9, 0x21, 0x21, 0xa0, 0x99, 0x11, 0x11, 0x11, 0x44,
	0x22, 0x01, 0xb9, 0x9b, 0x91, 0xba, 0xcb, 0xbb, 0xbb, 0x09, 0x33, 0x33, 0x12, 0x11, 0x11, 0x99,
	0x9a, 0x0a, 0x11, 0x11, 0x11, 0x22, 0x32, 0x44, 0x22, 0xa0, 0xcc, 0xba, 0xab, 0xa9, 0xba, 0xab,
	0x10, 0x20, 0x33, 0x13, 0x22, 0x11, 0x00, 0x11, 0x13, 0x12, 0x91, 0x10, 0x92, 0xb1, 0x5a, 0x82,
	0x81, 0xdc, 0x8e, 0x01, 0x32, 0x11, 0xa9, 0xbc, 0xa9, 0x18, 0x12, 0xc9, 0xbb, 0x31, 0x55, 0x23,
	0x90, 0x99, 0x89, 0x11, 0x02, 0x10, 0x01, 0x11, 0x11, 0xb9, 0xbb, 0xab, 0x90, 0x01, 0x99, 0x10,
	0x31, 0x02, 0xb9, 0x9a, 0x19, 0x12, 0x11, 0xb9, 0xbb, 0x10, 0x44, 0x34, 0x91, 0xb9, 0x99, 0x31,
	0x13, 0xb9, 0xbd, 0xab, 0x08, 0x21, 0x01, 0x99, 0x09, 0x31, 0x23, 0x01, 0xa9, 0x09, 0x11, 0x01,
	0x91, 0x00, 0x31, 0x33, 0x43, 0x11, 0xb9, 0xdb, 0x9a, 0x99, 0xa9, 0x9a, 0x9b, 0x10, 0x11, 0x01,
	0x10, 0x90, 0x19, 0x33, 0x24, 0x11, 0x01, 0x99, 0x00, 0x21, 0x90, 0x9a, 0x11, 0x11, 0xb9, 0xbf,
	0x88, 0x33, 0x12, 0xb8, 0xd9, 0x8a, 0x29, 0x12, 0x91, 0xab, 0x19, 0x53, 0x33, 0x82, 0x99, 0xbb,
	0xab, 0x63, 0x01, 0xb9, 0x99, 0x23, 0x90, 0xbb, 0xaa, 0x09, 0xb9, 0x11, 0x11, 0x01, 0xab, 0x99,
	0x22, 0x21, 0x11, 0x21, 0x12, 0x09, 0x09, 0x10, 0x33, 0x12, 0xa9, 0xa9, 0x90, 0x10, 0x90, 0xb9,
	0xab, 0x99, 0x22, 0x01, 0xa9, 0xa9, 0x10, 0x91, 0x10, 0x11, 0x01, 0x00, 0x11, 0x11, 0x01, 0x01,
	0x22, 0x12, 0x90, 0x9a, 0x99, 0xb9, 0xaa, 0xa9, 0x00, 0x11, 0x01, 0x00, 0x01, 0x11, 0x99, 0xa9,
	0x99, 0x99, 0x11, 0x33, 0x22, 0x12, 0x12, 0x33, 0x21, 0x01, 0x9a, 0xbb, 0xdb, 0xaa, 0xa9, 0xa9,
	0x09, 0x21, 0x11, 0x23, 0x23, 0x33, 0x12, 0x00, 0xa9, 0x10, 0x12, 0x00, 0x01, 0x99, 0x99, 0x21,
	0xb9, 0x8e, 0x08, 0x32, 0x32, 0x01, 0xbb, 0xdb, 0x8a, 0x19, 0x9a, 0x99, 0x10, 0x31, 0x33, 0x12,
	0x92, 0x10, 0x12, 0x13, 0x12, 0x01, 0x99, 0x00, 0x91, 0xb9, 0xbd, 0xab, 0x19, 0x31, 0x12, 0x90,
	0x09, 0x31, 0x22, 0x12, 0x91, 0x9a, 0x09, 0x11, 0x99, 0x11, 0x21, 0x21, 0x11, 0x12, 0x91, 0x99,
	0x00, 0x90, 0xa9, 0x9a, 0xab, 0xa9, 0x9a, 0x0a, 0x01, 0x11, 0x12, 0x00, 0x11, 0x12, 0x02, 0x11,
	0x11, 0x11, 0x21, 0x01, 0xa9, 0xa9, 0xaa, 0x99, 0x00, 0x00, 0x09, 0x11, 0x12, 0x12, 0x00, 0xa9,
	0x9a, 0x9a, 0x99, 0x09, 0x99, 0x10, 0x22, 0x32, 0x33, 0x13, 0x11, 0x91, 0x00, 0x99, 0xaa, 0xcb,
	0xab, 0xab, 0x00, 0x11, 0x10, 0x11, 0x11, 0x33, 0x33, 0x13, 0x11, 0x99, 0x9b, 0xab, 0x19, 0x11,
	0x11, 0x00, 0x30, 0x33, 0x13, 0x01, 0x9a, 0x0b, 0x11, 0xb9, 0xcd, 0xab, 0x19, 0x12, 0x13, 0x21,
	0x31, 0x43, 0x22, 0x12, 0x91, 0xaa, 0x19, 0x21, 0x01, 0xb9, 0x2b, 0x13, 0xc0, 0xeb, 0x9b, 0x19,
	0x34, 0x13, 0x28, 0xdb, 0x9a, 0x22, 0x51, 0x98, 0xbb, 0x09, 0x53, 0x21, 0x18, 0xa0, 0x00, 0x21,
	0x22, 0x01, 0x90, 0x09, 0x00, 0xa0, 0xba, 0xab, 0xaa, 0x99, 0x99, 0x19, 0x11, 0x01, 0x21, 0x31,
	0x12, 0x11, 0x92, 0xb9, 0x9a, 0x09, 0x21, 0x12, 0x99, 0x9a, 0x99, 0x19, 0x11, 0x11, 0x01, 0x90,
	0x90, 0x90, 0x99, 0x99, 0x99, 0x00, 0x00, 0x10, 0x12, 0x23, 0x21, 0x90, 0x00, 0x31, 0x12, 0x90,
	0xbb, 0x9a, 0x99, 0x99, 0xba, 0x9b, 0x99, 0x10, 0x12, 0x92, 0x09, 0x10, 0x23, 0x12, 0x99, 0xba,
	0x99, 0x11, 0x11, 0x01, 0x10, 0x00, 0x53, 0x11, 0x8a, 0xaa, 0x90, 0x01, 0x9a, 0xbb, 0xbb, 0x99,
	0x20, 0x11, 0x11, 0x13, 0x43, 0x12, 0x10, 0x90, 0x09, 0x19, 0x09, 0x99, 0xba, 0xab, 0x53, 0x91,
	0x9a, 0xbd, 0x19, 0x33, 0x39, 0x13, 0xd9, 0x99, 0x10, 0x21, 0x91, 0xbb, 0x19, 0x33, 0x33, 0x91,
	0x99, 0x21, 0x31, 0x13, 0x91, 0x99, 0x99, 0xa9, 0x99, 0xba, 0x99, 0x00, 0x99, 0x00, 0x11, 0x00,
	0x90, 0x11, 0x00, 0x11, 0x11, 0x11, 0x91, 0xa9, 0x99, 0x10, 0x01, 0x19, 0x00, 0x10, 0x10, 0x11,
	0x01, 0x99, 0xa9, 0x99, 0x90, 0x09, 0x90, 0x10, 0x10, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x01,
	0x11, 0x01, 0x00, 0x90, 0x99, 0x90, 0x00, 0x90, 0x99, 0x09, 0x00, 0x00, 0x90, 0x90, 0x99, 0x10,
	0x11, 0x02, 0x00, 0x00, 0x00, 0x09, 0x19, 0x01, 0x00, 0x00, 0x01, 0x10, 0x00, 0x10, 0x99, 0x99,
	0x09, 0x19, 0x00, 0x91, 0x00, 0x10, 0x11, 0x10, 0x01, 0x90, 0x99, 0x09, 0x10, 0x90, 0x10, 0x12,
	0x90, 0x19, 0x09, 0x90, 0x09, 0x90, 0x90, 0x01, 0x01, 0x11, 0x00, 0x99, 0x99, 0x99, 0x21, 0x91,
	0x90, 0x00, 0x10, 0x11, 0x91, 0x90, 0x90, 0x00, 0x00, 0x11, 0x01, 0x90, 0x09, 0x01, 0x00, 0x00,
	0x09, 0x09, 0x09, 0x10, 0x00, 0x01, 0x00, 0x09, 0x10, 0x00, 0x00, 0x09, 0x00, 0x01, 0x00, 0x00,
	0x10, 0x09, 0x09, 0x00, 0x00, 0x01, 0x00, 0x09, 0x01, 0x09, 0x01, 0x00, 0x90, 0x00, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x09, 0x10,
	0x10, 0x00, 0x00, 0x09, 0x00, 0x10, 0x00, 0x00, 0x09, 0x00, 0x00, 0x01, 0x00, 0x09, 0x00, 0x10,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x10, 0x09, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x09, 0x00, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x01, 0x00, 0x09, 0x00, 0x00, 0x01, 0x00,
	0x90, 0x00, 0x00
};

const uint16_t goose_01_size = sizeof(goose_01);