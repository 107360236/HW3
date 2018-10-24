#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1, num2, mut, a, i;
	printf("輸入兩個數 : ");
	scanf_s("%d%d", &num1, &num2);
	for (i = 2; i <= 2147483647; i++)
	{
		if (num1%i == 0)
		{
			if (num2%i == 0)
			{
				printf("%d", i);
				break;
			}
		}
	}
	system("pause");
	return 0;
}