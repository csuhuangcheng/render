#include "render/vector.hpp"

#include <cmath>

namespace render {

vector::vector(int32_t x, int32_t y): x(x), y(y) {

}

void vector::draw(render::matrix& matrix){

	double rational_slope = static_cast<double>(this->y) / static_cast<double>(this->x);

	for (int32_t x_pos = 0; x_pos < this->x; x_pos++){

		double rational_y_pos = rational_slope * static_cast<double>(x_pos);

		double rational_y_error = rational_y_pos - std::floor(rational_y_pos);

		uint32_t y_pos = static_cast<uint32_t>(std::floor(rational_y_pos));

		uint8_t intensity = static_cast<uint8_t>(std::floor(255.0 * (1 - rational_y_error)));

		matrix.SetValue(x_pos, y_pos, intensity);

		uint8_t next_intensity = static_cast<uint8_t>(std::floor(255.0 * rational_y_error));

		if (next_intensity > 0x00){
			matrix.SetValue(x_pos, y_pos + 1, next_intensity);
		}
	}
}

} /* namespace render */

