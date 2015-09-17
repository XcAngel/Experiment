#include <stdio.h>
int main()
{
	int n;
	printf("成绩为	");
	scanf("%d", &n);
	if (n < 0 || n>100)
	{
		printf("输入数据错，程序结束\n");
		return 1;
	}
	if (n >= 90)printf("等级为	A\n");
	else if (n >= 80 && n < 90)printf("等级为	B\n");
	else if (n >= 70 && n < 80)printf("等级为	C\n");
	else if (n >= 60 && n < 70)printf("等级为	D\n");
	else if (n < 60)printf("等级为	E\n");
	return 0;
}