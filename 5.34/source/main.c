#include <stdio.h>
#include <stdlib.h>
int power(int a,int b);

int main(void)
{
	int exponent, result, base;
	while (1)
	{
		printf("請輸入底數:");
		scanf_s("%d", &base);
		printf("請輸入指數:");
		scanf_s("%d", &exponent);
		result = power(base, exponent);
		printf("Answer is %d\n\n\n", result);
	}
	system("pause");
	return 0;
}
int power(int a, int b)
{
	int c=0, i = 0;
	if (b > 0)
	{
		b--;
		c = a*power(a, b);
		return c;
	}
	else
		return 1;
}