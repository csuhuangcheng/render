#include "coordinate.hpp"

namespace Render {

	Coordinate::Coordinate(int32_t x, int32_t y): x(x), y(y) {

	}

	void Coordinate::AddX(int32_t add_x){
		x += add_x;
	}

	void Coordinate::AddY(int32_t add_y){
		y += add_y;
	}

	void Coordinate::SetX(int32_t x) noexcept {
		this->x = x;
	}

	void Coordinate::SetY(int32_t y) noexcept {
		this->y = y;
	}

	int32_t Coordinate::X(void) const noexcept {
		return x;
	}

	int32_t Coordinate::Y(void) const noexcept {
		return y;
	}

} /* namespace Render */

