#include "MetaCV.h"
#include "common.h"

namespace mtcv {
	void mosaic(Mat2D& src, const Point2D<uint32_t>& box)
	{
		if (!src.pdata) {
			throw std::exception("pdata is nullptr");
		}
		if (src.format == SampleFormat::RGB32) {
			uint32_t* pdata = static_cast<uint32_t*>(src.pdata);
			for (uint32_t i = 0; i < src.height; i += box.y) {
				for (uint32_t j = 0; j < src.width; j += box.x) {
					if (src.format == SampleFormat::RGB32) {
						Point3D<uint32_t> avg{};
						for (uint32_t p = i; p < src.height; ++p) {
							for (uint32_t q = j; q < src.width; ++q) {
								auto color = to_rgba(pdata[q]);
								avg.x += color.r;
								avg.y += color.g;
								avg.z += color.b;								
							}
						}

					}
				}
				pdata += src.stride;
			}
		}
	}
}


