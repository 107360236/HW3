#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char b[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int i;
	char c;
	printf("請輸入一個英文字:");
	c = getchar();
	for (i = 0; i < 26; i++)
	{
		if (c == a[i])
		{
			printf("%c\n", b[i]);
		}
		else if (c == b[i])
		{
			printf("%c\n", a[i]);
		}
	}
	system("pause");
	return 0;
}