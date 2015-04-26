#ifndef RENDER_PRIMITIVE_H
#define RENDER_PRIMITIVE_H

#include "render/target.hpp"

namespace render {

class primitive {

	public:

	virtual ~primitive(void);

	virtual void Draw(render::target& target) const = 0;

}; /* class primitive */

} /* namespace render */

#endif /* RENDER_PRIMITIVE_H */

