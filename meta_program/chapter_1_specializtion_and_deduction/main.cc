#include<iostream>
//#include "specialization_and_overload.h"
//#include "specialization_in_class.h"
#include "tempalte_argument_deduction.h"
#include "default_and_value_initialization.h"
using namespace std;

int main(int argc, char** argv) {
	A a;
	cout << "a.i_=" << a.i_ << "\n";
	initialized_value<double> x;
	cout << "x.result=" << x.result << "\n";
	initialized_value<double [5]> y;
	cout << "y.result= ";
	for (int i = 0;i < 5;++i) {
		cout << y.result[i] << " ";
	} 
	cout << "\n";
	initialized_value<std::string> z;
	cout << "z.result = " << z.result << "\n";
	return 0;
}

