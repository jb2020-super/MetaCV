#pragma once
#include <cstdint>

namespace mtcv {
	enum class SampleFormat {
		RGB32
	};
	struct Mat2D {
		uint32_t width;
		uint32_t height;
		int32_t stride;
		SampleFormat format;
		uint32_t size; // data size in byte
		void* pdata;
	};

	template<class T>
	struct Point2D {
		T x;
		T y;
	};

	template<class T>
	struct Point3D {
		T x;
		T y;
		T z;
	};

	struct RGBA {
		uint8_t r : 8;
		uint8_t g : 8;
		uint8_t b : 8;
		uint8_t a : 8;
	};

	RGBA to_rgba(uint32_t val);
}