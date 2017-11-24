#ifndef _IMAGE_TYPES_H
#define _IMAGE_TYPES_H

#include <stdint.h>

// to support conversions between different types, we define all image
// types at once. Type-specific implementations can then #include this
// file, assured that the basic types of each image are known.

struct image_u8_t
{
	int32_t width;
	int32_t height;
	int32_t stride;

	uint8_t *buf;
	image_u8_t(int32_t width, int32_t height, int32_t stride, uint8_t *buf) {
		this->width = width;
		this->height = height;
		this->stride = stride;
		this->buf = buf;
	}
};

struct image_u8x3_t
{
	int32_t width;
	int32_t height;
	int32_t stride; // bytes per line

	uint8_t *buf;
	image_u8x3_t(int32_t width, int32_t height, int32_t stride, uint8_t *buf) {
		this->width = width;
		this->height = height;
		this->stride = stride;
		this->buf = buf;
	}
};

struct image_u8x4_t
{
	int32_t width;
	int32_t height;
	int32_t stride; // bytes per line

	uint8_t *buf;
	image_u8x4_t(int32_t width, int32_t height, int32_t stride, uint8_t *buf) {
		this->width = width;
		this->height = height;
		this->stride = stride;
		this->buf = buf;
	}
};

struct image_f32_t
{
	 int32_t width;
	 int32_t height;
	 int32_t stride; // floats per line

	float *buf; // indexed as buf[y*stride + x]
	image_f32_t(int32_t width, int32_t height, int32_t stride,float *buf) {
		this->width = width;
		this->height = height;
		this->stride = stride;
		this->buf = buf;
	}
};

struct image_u32_t
{
	const int32_t width;
	const int32_t height;
	const int32_t stride; // int32_ts per line

	uint32_t *buf; // indexed as buf[y*stride + x]
};

#endif
