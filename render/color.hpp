#ifndef RENDER_COLOR_HPP
#define RENDER_COLOR_HPP

#include <cstdint>
#include <string>
#include <iostream>

namespace Render {

	class Color {

		public:

		Color(uint8_t red = 0, uint8_t green = 0, uint8_t blue = 0);

		void Parse(const std::string& description);

		uint8_t Red(void) const noexcept;

		uint8_t Green(void) const noexcept;

		uint8_t Blue(void) const noexcept;

		void SetRed(uint8_t red);

		void SetGreen(uint8_t green);

		void SetBlue(uint8_t blue);

		private:

		uint8_t red;

		uint8_t green;

		uint8_t blue;

	}; /* class Color */

	std::ostream& operator<<(std::ostream& output_stream, const Color& color);

} /* namespace Render */

#endif /* RENDER_COLOR_HPP */

