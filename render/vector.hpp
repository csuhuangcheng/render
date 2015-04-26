#ifndef RENDER_VECTOR_HPP
#define RENDER_VECTOR_HPP

#include "render/target.hpp"

#include <stdint.h>

namespace render {

class vector {

	public:

	int32_t x;

	int32_t y;

	vector(void);

	vector(int32_t x, int32_t y);

	void Draw(render::target& target) const;

}; /* class vector */

} /* namespace render */

#endif /* RENDER_VECTOR_HPP */

