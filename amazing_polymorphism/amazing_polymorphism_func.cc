// <Selected Topic in C++> Topic 13 Function Pointers
#include <iostream>
#include <vector>
using namespace std;
class BaseClass {
public:
	int objId;
	BaseClass(int objId): objId(objId) {}
	virtual void callBackFun() {
		cout << "BaseClass callBackFunc " << objId << endl;
	}
};

class DerivedClass : public BaseClass {
public:
	DerivedClass(int objId) : BaseClass(objId) {}
	virtual void callBackFun() {
		cout << "DerivedClass callBackFunc " << objId << endl;
	}
};

void commonCallbackFunc(BaseClass *obj, void(BaseClass::*callbackFuncPtr)()) {
	(obj->*callbackFuncPtr)();
}

int main(int argc, char** argv) {
	//vector<BaseClass*> collector = {BaseClass(1), DerivedClass(2)}; // will call vector<T> allocator to allocate memory on heap??
	vector<BaseClass*> objs = {new BaseClass(1), new DerivedClass(2)};
	void(BaseClass::*callbackFuncPtr)() = &BaseClass::callBackFun;
	for (auto ptr : objs) {
		commonCallbackFunc(ptr, callbackFuncPtr);
		delete ptr;
	}
	return 0;
}
