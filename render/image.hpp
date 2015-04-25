#ifndef RENDER_IMAGE_HPP
#define RENDER_IMAGE_HPP

#include "render/matrix.hpp"

namespace render {

class image: public render::matrix {

	public:

	image(void);

	virtual ~image(void);

	virtual uint8_t GetValue(uint32_t x, uint32_t y) const;

	virtual uint32_t RowCount(void) const;

	virtual uint32_t RowWidth(void) const;

	virtual void SetDimensions(uint32_t row_width, uint32_t row_count);

	virtual void SetValue(uint32_t x, uint32_t y, uint8_t value);

	private:

	uint8_t ** row_array;

	uint32_t row_count;

	uint32_t row_width;
};

} /* namespace render */

#endif /* RENDER_IMAGE_HPP */

