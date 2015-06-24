#ifndef RENDER_IMAGE_HPP
#define RENDER_IMAGE_HPP

#include "render/target.hpp"

#include <vector>

namespace Render {

	class Image: public Render::Target {

		public:

		Image(uint32_t width, uint32_t height);

		Image(uint32_t width, uint32_t height, std::vector<Color> pixels);

		virtual ~Image(void);

		virtual uint32_t Width(void) const noexcept;

		virtual uint32_t Height(void) const noexcept;

		virtual Color Pixel(const Coordinate& coordinate) const;

		virtual void SetPixel(const Coordinate& coordinate, const Color& color);

		protected:

		uint32_t width;

		uint32_t height;

		std::vector<Color> pixels;

	}; /* class Image */

	std::ostream& operator<<(std::ostream& output_stream, const Image& image);

	bool operator==(const Image& image_1, const Image& image_2);

	bool operator!=(const Image& image_1, const Image& image_2);

} /* namespace Render */

#endif /* RENDER_IMAGE_HPP */

