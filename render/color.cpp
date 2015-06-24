#include "render/color.hpp"

#include <iomanip>

namespace Render {

	Color::Color(uint8_t red, uint8_t green, uint8_t blue): red(red), green(green), blue(blue) {

	}

	void Color::Parse(const std::string& description){
		if (description[0] == '#'){

		}
	}

	uint8_t Color::Red(void) const noexcept {
		return red;
	}

	uint8_t Color::Green(void) const noexcept {
		return green;
	}

	uint8_t Color::Blue(void) const noexcept {
		return blue;
	}

	void Color::SetRed(uint8_t red){
		this->red = red;
	}

	void Color::SetGreen(uint8_t green){
		this->green = green;
	}

	void Color::SetBlue(uint8_t blue){
		this->blue = blue;
	}

	std::ostream& operator<<(std::ostream& output_stream, const Color& color){
		return output_stream << "#" << std::setfill('0') << std::setw(2) << std::hex << color.Red() << color.Green() << color.Blue();
	}

} /* namespace Render */

