#include <stdio.h>

static int var;
volatile int count;

void add(int,int);

#define NUM 1024
#define SET(num,bit) {num |= bit}

int main()
{
	int c, num = 10, bit_pos = 2;

	c = SET(num, bit_pos);

	add(5,10);
	printf("%d \t %X\r\n", c, c);

	return 0;
}
<<<<<<< HEAD
=======
	add(5,10);
	printf("%d \t %X\r\n", c, c);
>>>>>>> source

void add(int a,int b)
{
	int c;
	c = a+b;
}
