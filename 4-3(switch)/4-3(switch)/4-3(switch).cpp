#include <stdio.h>
int main()
{
	int n;
	printf("�ɼ�Ϊ	");
	scanf("%d", &n);
	n = n / 10;
	switch (n)
	{
	case 9:
		printf("�ȼ�Ϊ	A\n");
		break;
	case 8:
		printf("�ȼ�Ϊ	B\n");
		break;
	case 7:
		printf("�ȼ�Ϊ	C\n");
		break;
	case 6:
		printf("�ȼ�Ϊ	D\n");
		break;
	case 5:
		printf("�ȼ�Ϊ	E\n");
		break;
	case 4:
		printf("�ȼ�Ϊ	E\n");
		break;
	case 3:
		printf("�ȼ�Ϊ	E\n");
		break;
	case 2:
		printf("�ȼ�Ϊ	E\n");
		break;
	case 1:
		printf("�ȼ�Ϊ	E\n");
		break;
	case 0:
		printf("�ȼ�Ϊ	E\n");
		break;
	default:
		printf("error\n");
		break;
	}
	return 0;
}