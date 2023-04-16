#include "assignop.h"

namespace test {
	// TestAssign& TestAssign::operator=(const TestAssign&) = delete;

	std::ostream& operator<<(std::ostream& o, TestAssign&) {
		o << "assignop";
		return o;
	}
}