#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("请输入一个小于1000的正数n\n");
	while (1)
	{
		printf("n=");
		scanf("%d", &n);
		if (n > 0 && n < 1000)break;
		else printf("数字不符合，请重新输入\n");
	}
	printf("n的平方根为	%.0f\n", sqrt(n));
	return 0;
}