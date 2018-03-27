// 1.4.12 Default and Value Initialization
#include<string>
class A {
public:
	std::string s_;
	int i_;
	A(){} // this will default-construct s_ but leave i_ uninitialized
		  // ch: in c++11, still be this?
};	

/*Good as following*/
/*
 * if T is as class with a default constructor, that will be used
 * otherwise, the storage for T will be set to 0
 * if T is an array, each element will be recursively initialized
 */
template<typename T>
struct initialized_value {
	T result;
	initialized_value() : result() {
	}
};


