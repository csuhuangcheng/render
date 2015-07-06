#include "render/image.hpp"

#include <cstdlib>
#include <stdexcept>

namespace Render {

	Image::Image(int32_t width, int32_t height): width(width), height(height) {
		pixels.resize(width * height);
	}

	Image::Image(int32_t width, int32_t height, const std::vector<Color> pixels): width(width), height(height), pixels(pixels) {
		if (pixels.size() != static_cast<size_t>(std::abs(width * height))){
			throw std::runtime_error("pixel array size doesn't match width and height");
		}
	}

	Image::~Image(void){

	}

	int32_t Image::Width(void) const noexcept {
		return width;
	}

	int32_t Image::Height(void) const noexcept {
		return height;
	}

	std::ostream& operator<<(std::ostream& output_stream, const Image& image){

		for (int32_t x = 0; x < image.Width(); x++){
			for (int32_t y = 0; y < image.Height(); y++){
				output_stream << image[Coordinate(x, y)] << " ";
			}
			output_stream << std::endl;
		}
		return output_stream;
	}

	Color& Image::operator[](const Coordinate& c){
		return pixels[c.X() + (c.Y() * width)];
	}

	const Color& Image::operator[](const Coordinate& c) const {
		return pixels[c.X() + (c.Y() * width)];
	}

	bool operator==(const Image& image_1, const Image& image_2){

		if (image_1.Width() != image_2.Width()
		 || image_1.Height() != image_2.Height()){
			return false;
		}

		auto c = Coordinate(0, 0);

		while (c.Y() < image_1.Width()){
			while (c.X() < image_1.Height()){
				if (image_1[c] != image_2[c]){
					return false;
				}
				c.AddX(1);
			}
			c.AddY(1);
		}

		return true;
	}

	bool operator!=(const Image& image_1, const Image& image_2){
		return !(image_1 == image_2);
	}

} /* namespace Render */

