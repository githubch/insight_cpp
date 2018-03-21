template<typename scalar_t>
scalar_t add(scalar_t x, scalar_t y) {
}

class MyMathMethtics {
public:
	template<typename scalar_t>
	scalar_t sq(scalar_t x) {
	}
	
	template<>
	double sq(double x) {//Error because specialization is legal in namespace scope
		return x * x;
	}
	
	template<>
	int add(int x, int y) { //Error because specialization is legal in namespace scope
		return x + y;
	}
};	
