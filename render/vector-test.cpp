#include "render/vector.hpp"
#include "render/image.hpp"

#include "render/debug/image.hpp"

#include <iostream>

int main(void){

	render::debug::image image;

	image.SetDimensions(8, 8);

	render::vector(4, 7).Draw(image);

	image.FPrintf(std::cout);

	return 0;
}

