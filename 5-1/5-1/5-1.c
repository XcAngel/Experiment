#include <stdio.h>
int main()
{
	char a[100];
	int i;
	gets(a);
	for (i = 0; i < 100; i++)
	{
		if (a[i] == '\0')break;
	}
	printf("%d\n", i);
}