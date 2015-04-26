#include "render/primitive.hpp"
#include "render/vector.hpp"

namespace render {

class line: public render::primitive {

	public:

	line(const render::vector& start, const render::vector& end);

	virtual ~line(void);

	virtual void Draw(render::target& target) const;

	private:

	render::vector start;

	render::vector end;

}; /* class line */

} /* namespace render */

