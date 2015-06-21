#include "render/point.hpp"

namespace Render {

	Point::Point(float x, float y): x(x), y(y) {

	}

	void Point::Draw(Target& target) const {
		(void) target;
	}

	void Point::SetX(float x){
		this->x = x;
	}

	void Point::SetY(float y){
		this->y = y;
	}

	float Point::X(void) const noexcept {
		return x;
	}

	float Point::Y(void) const noexcept {
		return y;
	}

} /* namespace Render */

