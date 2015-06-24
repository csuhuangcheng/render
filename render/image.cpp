#include "render/image.hpp"

namespace Render {

	Image::Image(uint32_t width, uint32_t height): width(width), height(height) {
		this->pixels.resize(width * height);
	}

	Image::Image(uint32_t width, uint32_t height, const std::vector<Color> pixels): width(width), height(height), pixels(pixels) {

	}

	Image::~Image(void){

	}

	uint32_t Image::Width(void) const noexcept {
		return width;
	}

	uint32_t Image::Height(void) const noexcept {
		return height;
	}

	Color Image::Pixel(const Coordinate& coordinate) const {
		return this->pixels[coordinate.X() + (coordinate.Y() + width)];
	}

	void Image::SetPixel(const Coordinate& coordinate, const Color& color){
		this->pixels[coordinate.X() + (coordinate.Y() * width)] = color;
	}

	std::ostream& operator<<(std::ostream& output_stream, const Image& image){
		(void) image;
		return output_stream;
	}

	bool operator==(const Image& image_1, const Image& image_2){

		if (image_1.Width() != image_2.Width()
		 || image_1.Height() != image_2.Height()){
			return false;
		}

		/* TODO */

		return true;
	}

	bool operator!=(const Image& image_1, const Image& image_2){
		return !(image_1 == image_2);
	}

} /* namespace Render */

