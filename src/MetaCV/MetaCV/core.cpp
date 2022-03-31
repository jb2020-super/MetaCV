#include "core.h"

namespace mtcv {
	RGBA to_rgba(uint32_t val)
	{
		return  *reinterpret_cast<RGBA*>(&val);
	}
}


