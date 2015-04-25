#include "render/vector.hpp"

namespace render {

vector::vector(int32_t x, int32_t y): x(x), y(y) {

}

void vector::draw(render::matrix& matrix){

	int64_t slope = (0xFFFF * this->y) / this->x;

	for (int32_t x = 0; x < this->x; x++){

		int64_t y = (slope * x) / 0xFFFF;

		matrix.SetValue(x, y, 0xFF);
	}
}

} /* namespace render */

