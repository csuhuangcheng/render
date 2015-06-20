#ifndef RENDER_COORDINATE_HPP
#define RENDER_COORDIANTE_HPP

#include <stdint.h>

namespace Render {

	class Coordinate {

		public:

		Coordinate(void);

		~Coordinate(void);

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

