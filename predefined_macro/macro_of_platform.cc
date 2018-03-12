#include <stdio.h>

void test() {
	int len = sizeof(int) * 8;
	int pointer_len = sizeof(int*) * 8;
	printf("sizeof(int)=%d(bit)\n", len);
	printf("sizeof(int*)=%d(bit)\n", pointer_len);

	int array[10];
	int* p = array;
	printf("address of p(pointer of array[10]) is %p]\n", p);
	printf("sizeof array[0] is %d (Byte)\n", sizeof(p[0]));
	printf("sizeof p is %d (Byte) \n", sizeof(p));
	printf("address of (p + 1) is %p\n", p + 1);
#ifdef __linux__
	printf("__linux__ is defined\n");
#endif

#ifdef __GUNC__
	printf("__GNUC__ is defined\n");
#endif

#ifdef __WIN32
	printf("__WIN32 is defined\n");
#endif


#ifdef __WIN64
	printf("__WIN64 is defined\n");
#endif 
}

int main(int argc, char** argv) {
	test();
	return 0;
}
