#include "render/image.hpp"

namespace Render {

	Image::Image(uint32_t width, uint32_t height): width(width), height(height) {
		this->pixels.resize(width * height);
	}

	uint32_t Image::Width(void) const noexcept {
		return width;
	}

	uint32_t Image::Height(void) const noexcept {
		return height;
	}

	Color Image::GetColor(const Coordinate& coordinate) const {
		return this->pixels[coordinate.X() + (coordinate.Y() + width)];
	}

	void Image::SetColor(const Coordinate& coordinate, const Color& color){
		this->pixels[coordinate.X() + (coordinate.Y() * width)] = color;
	}

	std::ostream& operator<<(std::ostream& output_stream, const Image& image){
		(void) image;
		return output_stream;
	}

} /* namespace Render */

