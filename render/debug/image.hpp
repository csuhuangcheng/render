#ifndef RENDER_DEBUG_IMAGE_HPP
#define RENDER_DEBUG_IMAGE_HPP

#include "render/image.hpp"

#include <ostream>

namespace render {

namespace debug {

class image: public render::image {

	public:

	void FPrintf(std::ostream& out) const;

}; /* class image */

} /* namespace debug */

} /* namespace render */

#endif /* RENDER_DEBUG_IMAGE_HPP */

