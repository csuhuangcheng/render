#ifndef RENDER_MATRIX_H
#define RENDER_MATRIX_H

#include <stdint.h>

namespace render {

class matrix {

	public:

	virtual ~matrix(void);

	virtual void SetValue(uint32_t x, uint32_t y, uint8_t value) = 0;

	virtual uint8_t GetValue(uint32_t x, uint32_t y) const = 0;

}; /* class image */

} /* namespace render */

#endif /* RENDER_MATRIX_H */
