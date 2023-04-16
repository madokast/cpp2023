#include <iostream>

namespace test {
	class TestAssign {
	public:
		TestAssign& operator=(const TestAssign&) = default;
	};

	std::ostream& operator<<(std::ostream& o, TestAssign&);
}