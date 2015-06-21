#ifndef RENDER_POINT_HPP
#define RENDER_POINT_HPP

#include "render/drawable.hpp"

namespace Render {

	class Point: public Drawable {

		public:

		Point(float x = 0.0f, float y = 0.0f);

		void Draw(Target& target) const;

		void SetX(float x);

		void SetY(float y);

		float X(void) const noexcept;

		float Y(void) const noexcept;

		private:

		float x;

		float y;

	}; /* class Point */

} /* namespace Render */

#endif /* RENDER_POINT_HPP */

