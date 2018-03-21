#include<iostream>
#include<string>
#include<functional>
/*
 *for avoid ambiguous
 */ 
template<typename T>
T max(const T& a, const T& b) {
}

int a = 7;
long b = 20;
//long m1 = max(a, b); // Error because it's ambiguous
long m2 = max<long>(a, b);


/*
 * similar C++ build-in cast operator
 */

template<typename X, typename T>
X sabotage_cast(T* p) {
	return reinterpret_cast<X>(p + 1);
}

std::string s = "hello world";
double* p = sabotage_cast<double*>(&s);

/*
 * To perform simultaneously a cast and a function template invocation
 */
template<typename T>
T somefunc(const T& a) {
}

double y = somefunc<int>(6.18);

/*
 * 函数参数默认值依赖于模板参数
 */

template<typename  LESS_T>
void nonstd_sort(LESS_T cmp = LESS_T()) {
}

//nonstd_sort<std::less<int> >(); // not work, not expect as the book says p24
//nonstd_sort(std::less<int>()); // not work, not expect as the book says p24

