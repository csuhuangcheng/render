#ifndef RENDER_COORDINATE_HPP
#define RENDER_COORDIANTE_HPP

#include <stdint.h>

namespace Render {

	class Coordinate {

		public:

		Coordinate(int32_t x = 0, int32_t y = 0);

		void AddX(int32_t x);

		void AddY(int32_t y);

		void SetX(int32_t x) noexcept;

		void SetY(int32_t y) noexcept;

		int32_t X(void) const noexcept;

		int32_t Y(void) const noexcept;

		private:

		int32_t x;

		int32_t y;

	}; /* class Coordinate */

} /* namespace Render */

#endif /* RENDER_COORDINATE_HPP */

