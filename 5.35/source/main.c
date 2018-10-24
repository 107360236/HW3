#include <stdio.h>
#include <stdlib.h>
void Fibonacci(unsigned long long int b);

int main(void)
{
	unsigned int b;
	scanf_s("%u", &b);
	b = b - 1;
	printf("0 ");
	Fibonacci(b);
	system("pause");
	return 0;
}

void Fibonacci(unsigned long long int b)
{
	unsigned int a = 0, c = 0, d = 1;
	for (unsigned long long int i = 0; i < b; i++)
	{
		c = d;
		d = a;
		a = c + d;
		printf("%d ", a);
	}
}