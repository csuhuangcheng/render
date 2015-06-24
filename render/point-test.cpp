#include "render/point.hpp"
#include "render/image.hpp"

#include <stdexcept>

namespace {

	void RunTest(const Render::Point& point, const Render::Image& expected_image);

} /* namespace */

int main(void){

	RunTest(Render::Point(1.0f, 1.0f), Render::Image(2, 2, { 0, 0, 0, 0 }));

	return 0;
}

namespace {

	void RunTest(const Render::Point& point, const Render::Image& expected_image){

		Render::Image actual_image(expected_image.Width(), expected_image.Height());

		point.Draw(actual_image);

		if (actual_image != expected_image){
			throw std::runtime_error("images are not the same");
		}
	}
} /* namespace */

