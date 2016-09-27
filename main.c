#include <stdio.h>

<<<<<<< HEAD
int main()
{
	int x,y,z;
=======
#define NUM 1024
#define SET(num,bit) {num |= bit}

int main()
{
	int c, num = 10, bit_pos = 2;

	c = SET(num, bit_pos);

	printf("%d \t %X\r\n", c, c);

>>>>>>> source
	return 0;
}
