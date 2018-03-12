// <Selected Topic in C++ > Topic 12 class member offset
#include <iostream>
using namespace std;

class BaseClass {
public:
	int val1;
	int val2;
	int val3;
	BaseClass(int val1, int val2, int val3): val1(val1), val2(val2), val3(val3){}
	void virtual VirFunc() {
		cout << "base virtual function" <<endl;
	}
};

class DerivedClass : public BaseClass {
public:
	int val4;
	DerivedClass(int val1, int val2, int val3, int val4) : BaseClass(val1, val2, val3), val4(val4) {}
};

void memberVarPrintFunc(BaseClass object, int BaseClass::*varPtr) {
	cout << object.*varPtr << endl;
}

int main(int argc, char** argv) {
	BaseClass baseClassObj(1,2,3);
	DerivedClass derivedClassObj(4, 5, 6, 7);
	
	int BaseClass::*intVarPtr;
	intVarPtr = &BaseClass::val1;
	cout << "baseClassObject.val1:";
	memberVarPrintFunc(baseClassObj, intVarPtr);
	cout << "derivedClassObject.val1:";
	memberVarPrintFunc(derivedClassObj, intVarPtr);

	intVarPtr = &BaseClass::val3;
	cout << "baseClassObj.var3:";
	memberVarPrintFunc(baseClassObj, intVarPtr);
	cout << "derivedClassObj.var3:";
	memberVarPrintFunc(derivedClassObj, intVarPtr);
	return 0;
}
	
