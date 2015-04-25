#include "render/debug/image.hpp"

#include <iomanip>

namespace render {

namespace debug {

void image::FPrintf(std::ostream& out) const {

	for (uint32_t y = this->RowCount(); y > 0; y--){

		out << static_cast<int>(y - 1) << ": ";

		for (uint32_t x = 0; x < this->RowWidth(); x++){

			out << std::setfill('0') << std::setw(2) << std::hex << static_cast<int>(this->GetValue(x, y - 1));

			if (x + 1 < this->RowWidth()){
				out << " ";
			}
		}

		out << std::endl;
	}
}

} /* namespace debug */

} /* namespace render */

