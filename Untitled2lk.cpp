/* C++ Program to demonstrate use of left shift
operator */
#include<stdio.h>
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 212;

	// The result is 00001010
	printf("a<<1 = %d\n", a<<3);

	// The result is 00010010
	printf("b<<1 = %d\n", a<<2);
	return 0;
}

