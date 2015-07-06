#ifndef RENDER_COLOR_HPP
#define RENDER_COLOR_HPP

#include <cstdint>
#include <string>
#include <iostream>

namespace Render {

	class Color {

		public:

		Color(void);

		Color(const Color& color);

		Color(uint8_t red, uint8_t green, uint8_t blue);

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

	const Color Red(0xFF, 0x00, 0x00);

	const Color Green(0x00, 0xFF, 0x00);

	const Color Blue(0x00, 0x00, 0xFF);

	const Color Black(0x00, 0x00, 0x00);

	const Color White(0xFF, 0xFF, 0xFF);

	bool operator==(const Color& color_1, const Color& color_2);

	bool operator!=(const Color& color_1, const Color& color_2);

	std::ostream& operator<<(std::ostream& output_stream, const Color& color);

} /* namespace Render */

#endif /* RENDER_COLOR_HPP */

