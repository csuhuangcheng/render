#include "pixel.hpp"

namespace Render {

	Pixel::Pixel(void): red(0), green(0), blue(0) {

	}

	Pixel::~Pixel(void){

	}

	void Pixel::SetRed(uint8_t red){
		this->red = red;
	}

	void Pixel::SetGreen(uint8_t green){
		this->green = green;
	}

	void Pixel::SetBlue(uint8_t blue){
		this->blue = blue;
	}

	uint8_t Pixel::Red(void) const noexcept {
		return red;
	}

	uint8_t Pixel::Green(void) const noexcept {
		return green;
	}

	uint8_t Pixel::Blue(void) const noexcept {
		return blue;
	}

} /* namespace Render */

