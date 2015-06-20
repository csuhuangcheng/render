#ifndef RENDER_PIXEL_HPP
#define RENDER_PIXEL_HPP

#include <stdint.h>

#include "coordinate.hpp"

namespace Render {

	class Pixel: public Coordinate {

		public:

		Pixel(void);

		~Pixel(void);

		void SetRed(uint8_t red);

		void SetGreen(uint8_t green);

		void SetBlue(uint8_t blue);

		uint8_t Red(void) const noexcept;

		uint8_t Green(void) const noexcept;

		uint8_t Blue(void) const noexcept;

		private:

		uint8_t red;

		uint8_t green;

		uint8_t blue;

	}; /* class Pixel */

} /* namespace Render */

#endif /* RENDER_PIXEL_HPP */

