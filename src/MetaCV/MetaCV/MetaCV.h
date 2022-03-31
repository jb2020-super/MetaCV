#pragma once
#include "core.h"

namespace mtcv {
	Mat2D load_image(const char* url);

	void mosaic(Mat2D& src, const Point2D<uint32_t>& box);
}