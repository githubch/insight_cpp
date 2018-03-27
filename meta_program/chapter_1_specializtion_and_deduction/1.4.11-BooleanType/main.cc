#include <stdio.h>
#include <malloc.h>
#include "boolean_type.h"
int main(int argc, char** argv) {
	A a;
	a.n = 2;
	if (a) {
		int i = a + 2;
		printf("i=%d\n", i);
	}

	B b;
	b.n = 2;
	if (b) {
		int i = b + 2;
		printf("i=%d\n", i);
		free(b);
	}

	C c;
	c.n = 2;
	if (c) {
		int i = a + 2;
		printf("i=%d\n", i);
		free(c);
	}
	return 0;		
}
