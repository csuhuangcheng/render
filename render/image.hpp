#ifndef RENDER_IMAGE_HPP
#define RENDER_IMAGE_HPP

#include "render/target.hpp"

#include <vector>

namespace Render {

	class Image: public Render::Target {

		public:

		Image(int32_t width, int32_t height);

		Image(int32_t width, int32_t height, std::vector<Color> pixels);

		virtual ~Image(void);

		virtual int32_t Width(void) const noexcept;

		virtual int32_t Height(void) const noexcept;

		Color& operator[](const Coordinate& c);

		const Color& operator[](const Coordinate& c) const;

		protected:

		int32_t width;

		int32_t height;

		std::vector<Color> pixels;

	}; /* class Image */

	std::ostream& operator<<(std::ostream& output_stream, const Image& image);

	bool operator==(const Image& image_1, const Image& image_2);

	bool operator!=(const Image& image_1, const Image& image_2);

} /* namespace Render */

#endif /* RENDER_IMAGE_HPP */

