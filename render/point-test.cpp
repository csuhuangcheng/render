#include "render/point.hpp"
#include "render/image.hpp"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

namespace {

	void RunTest(const Render::Point& point, const Render::Image& expected_image);

} /* namespace */

int main(void){

	try {

		RunTest(Render::Point(1.0f, 1.0f),
			Render::Image(2, 2, { Render::White, Render::Black,
			                      Render::White, Render::White }));
	}	catch(...) {

		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}

namespace {

	void RunTest(const Render::Point& point, const Render::Image& expected_image){

		Render::Image actual_image(expected_image.Width(), expected_image.Height());

		point.Draw(actual_image);

		if (actual_image != expected_image){

			std::cout << "actual image:" << std::endl;
			std::cout << actual_image << std::endl;

			std::cout << "expected image:" << std::endl;
			std::cout << expected_image << std::endl;

			throw std::runtime_error("images are not the same");
		}
	}
} /* namespace */

