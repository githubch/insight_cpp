#include "framework2.hpp"
namespace framework3 {
	class EmptyString
	{
	};
	
	bool is_empty(const EmptyString&x) {
		std::cout << "framework3::is_empty" << std::endl;
		return true;
	}
}

int main(int argc, char** argv) {
	framework3::EmptyString s;
	framework2::do_something(s);
}
