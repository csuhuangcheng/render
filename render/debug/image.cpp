#include "render/debug/image.hpp"

#include <iomanip>

namespace render {

namespace debug {

void image::FPrintf(std::ostream& out) const {

	for (uint32_t i = this->RowCount(); i > 0; i--){

		out << static_cast<int>(i - 1) << ": ";

		for (uint32_t j = 0; j < this->RowWidth(); j++){
			out << std::setfill('0') << std::setw(2) << std::hex << static_cast<int>(this->GetValue(i - 1, j)) << " ";
		}

		out << std::endl;
	}
}

} /* namespace debug */

} /* namespace render */

