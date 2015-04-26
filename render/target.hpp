#ifndef RENDER_TARGET_H
#define RENDER_TARGET_H

#include <stdint.h>

namespace render {

class target {

	public:

	virtual ~target(void);

	virtual void SetValue(uint32_t x, uint32_t y, uint8_t value) = 0;

	virtual uint8_t GetValue(uint32_t x, uint32_t y) const = 0;

}; /* class image */

} /* namespace render */

#endif /* RENDER_TARGET_H */
