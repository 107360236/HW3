#include <stdio.h>
#include <stdlib.h>

void hannoi(int n, char from, char buffer, char to);

int main()
{
	int n;
	printf("How many disk ?  ");
	scanf_s("%d", &n);
	hannoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}
void hannoi(int n, char from, char buffer, char to)
{
	if (n == 0)
	{
		return 0;
	}
	hannoi(n - 1, from, to, buffer);
	printf("Move disk %d from %c to %c\n", n, from, to);
	hannoi(n - 1, buffer, from, to);
}