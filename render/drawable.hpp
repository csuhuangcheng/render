#ifndef RENDER_DRAWABLE_HPP
#define RENDER_DRAWABLE_HPP

#include "render/target.hpp"

namespace Render {

	class Drawable {

		public:

		virtual ~Drawable(void);

		virtual void Draw(Target& target) const = 0;

	}; /* class Drawable */

} /* namespace Render */

#endif /* RENDER_DRAWABLE_HPP */

