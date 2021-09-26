#include <stdio.h>

int main()
{
	int i;
	int c;								//increase divisor to reduce checking range

	printf("2\n");
	for (i = 3; i == i; i += 2) {
		if (isprime(i) == 1)
			printf("%d\n", i);
	}
}

int isprime(int p)
{
	int i;
	int c;

	if (p == 2 || p == 3)
		return 1;

	c = p / 3;
	
	for (i = 2; i <= c; ++i) {
		if (p % i == 0)
			return 0;
	}
	return 1;
}
		