#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("������һ��С��1000������n\n");
	while (1)
	{
		printf("n=");
		scanf("%d", &n);
		if (n > 0 && n < 1000)break;
		else printf("���ֲ����ϣ�����������\n");
	}
	printf("n��ƽ����Ϊ	%.0f\n", sqrt(n));
	return 0;
}