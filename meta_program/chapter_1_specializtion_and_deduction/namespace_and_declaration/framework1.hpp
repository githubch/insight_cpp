#include <iostream>
#include "macro.hpp"
MXT_NAMESPACE_BEGIN(framework1)
template<typename T>
inline bool is_empty(T const& x) {
	std::cout << "framework1::is_empty master template " << std::endl;
	return x.empty();
}

template<>
inline bool is_empty(const char* const& x) {
	std::cout << "framework1::is_empty specification" << std::endl;
	return x == 0 || *x == 0;
}

MXT_NAMESPACE_END(framework1)
