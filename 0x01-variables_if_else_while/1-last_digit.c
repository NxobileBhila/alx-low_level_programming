#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
rand(time(0));
n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
if (n % 10 > 5)
	printf("and is greater than 5\n");
else if (n % 10 == 0)
	printf("and is 0\n");
else if (n % 10 < 6 && n % 10 != 0)
	printf("and is less than 6 and not 0\n");
return (0);
}
