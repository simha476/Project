#include <stdio.h>

#define NUM 1024
#define SET(num,bit) {num |= bit}

int main()
{
	int c, num = 10, bit_pos = 2;

	c = SET(num, bit_pos);

	printf("%d \t %X\r\n", c, c);

	return 0;
}
