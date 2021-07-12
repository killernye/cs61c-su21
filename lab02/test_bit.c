#include <stdio.h>
#include <math.h>
#include "bit_ops.h"


void test_oct_numbers(unsigned n) {
	printf("\ntest_oct_numbers(unsigned n)\n\n");

	unsigned actual = n & 037;
	unsigned expected = 31;

	int cmp = actual == expected;
	if (cmp) {
		printf("test_oct_numbers(%08x) returns %x, correct!\n", n, actual);
	} else {
		printf("test_oct_numbers(%08x) returns %x, but expected %x.\n", n,actual, expected);
	}
}

void test_right_shift(unsigned x, unsigned n) {
	printf("\ntest_right_shift(x, n): right shift X by N bits\n\n");

	unsigned actual = x >> n;
	unsigned expected = x / pow(2, n);

	int cmp = (actual == expected);
	if (cmp) {
		printf("test_right_shift(%08x, %u) returns %x, correct!\n", x, n, actual);
	} else {
		printf("test_right_shift(%08x, %u) returns %x, but expected %x.\n",x, n,actual, expected);
	}
}

int main(int argc, char const *argv[])
{
	//test_oct_numbers(31);
	test_right_shift(31, 1);
	return 0;
}