#include <stdio.h>
int main()
{
	int n;
	printf("�ɼ�Ϊ	");
	scanf("%d", &n);
	if (n < 0 || n>100)
	{
		printf("�������ݴ��������\n");
		return 1;
	}
	if (n >= 90)printf("�ȼ�Ϊ	A\n");
	else if (n >= 80 && n < 90)printf("�ȼ�Ϊ	B\n");
	else if (n >= 70 && n < 80)printf("�ȼ�Ϊ	C\n");
	else if (n >= 60 && n < 70)printf("�ȼ�Ϊ	D\n");
	else if (n < 60)printf("�ȼ�Ϊ	E\n");
	return 0;
}