// common implementation
class A {
public:
	int n;
	operator bool() const {
		return n % 2 == 0;
	}
};

/*  
 * if (s) { // ok, that's what we want
 * 	int i = s + 2; // unfortunately, this compiles
 * }
 *
 */


// A classic workaround was to implement cast to void*
class B {
public:
	int n;
	operator void*() const {
		B* tmp = const_cast<B*>(this);
		if (n % 2 != 0) {
			tmp = NULL;
		}
		return tmp; // return this when true or '0' when false
	}
};

/*
 * if(s) { 				// ok, that's what we want
 * 	int i = s + 2;		// good, this does not compile
 * 	free(s);			// .. but this goes on
 * }
 */

// A better solution is again a pointer to member

struct boolean_type_t {
	int true_;
};
typedef int boolean_type_t::*boolean_type;
#define mxt_boolean_true &boolean_type_t::true_
#define mxt_boolean_false 0

class C {
public:
	int n;
	operator boolean_type() const {
		return n % 2 == 0 ? mxt_boolean_true : mxt_boolean_false;// return mxt_boolean_true or mxt_boolean_false
	}
};
