//#define BitMask(m,n) --> ex. Bitmask(2,5)
#include <stdio.h>
#define Bitmask(m,n) ((0xFFFFFFFF>>((sizeof(int)*8)-n-1)) & (0xFFFFFFFF << m))
int main () {
	int c=0;

	c=Bitmask(2,5);
	printf("Result: %X\n", c);

	return 0;
}
