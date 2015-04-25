#include "render/image.hpp"

#include <algorithm>
#include <cstring>

namespace render {

image::image(void){
	this->row_array = NULL;
	this->row_count = 0;
	this->row_width = 0;
}

image::~image(void){

	for (uint32_t i = 0; i < this->row_count; i++){
		delete [] this->row_array[i];
	}

	delete [] this->row_array;
}

uint8_t image::GetValue(uint32_t x, uint32_t y) const {
	return this->row_array[x][y];
}

uint32_t image::RowCount(void) const {
	return this->row_count;
}

uint32_t image::RowWidth(void) const {
	return this->row_width;
}

void image::SetDimensions(uint32_t new_row_width, uint32_t new_row_count){

	uint8_t ** new_row_array = new uint8_t * [new_row_count];

	for (uint32_t i = 0; i < std::min(this->row_count, new_row_count); i++){

		new_row_array[i] = new uint8_t[new_row_width];

		std::memcpy(new_row_array[i], this->row_array[i], std::min(this->row_width, new_row_count));

		if (new_row_width > this->row_width){
			memset(&new_row_array[this->row_width], 0, new_row_width - this->row_width);
		}
	}

	for (uint32_t i = this->row_count; i < new_row_count; i++){

		new_row_array[i] = new uint8_t[new_row_width];

		std::memset(new_row_array[i], 0, new_row_width);
	}

	for (uint32_t i = 0; i < this->row_count; i++){
		delete [] this->row_array[i];
		i++;
	}

	delete [] this->row_array;

	this->row_array = new_row_array;
	this->row_width = new_row_width;
	this->row_count = new_row_count;
}

void image::SetValue(uint32_t x, uint32_t y, uint8_t value){
	this->row_array[x][y] = value;
}

} /* namespace render */

