#include "framework1.hpp"

MXT_NAMESPACE_BEGIN(framework2)

using framework1::is_empty;
template<typename string_t>
void do_something(string_t const &x) {
	//if (framework1::is_empty(x)) // it causes error in framework3.cpp when call framework2::do_something(s)
	if (!is_empty(x))
	{
	}
}
MXT_NAMESPACE_END(framework2)
