#include <stdio.h>
int main()
{
	int L, S;
	int i;
	printf("��������������\n\n");
	printf("1:");
	scanf("%d", &L);
	for (i = 0; i < 2; i++)
	{
		printf("%d:", i + 2);
		scanf("%d", &S);
		if (L <= S)
		{
			L = S;
		}
	}
	printf("\n�������Ϊ\n\n%d\n", L);
	return 0;
}
