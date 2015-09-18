#include <stdio.h>
int main()
{
	int n;
	printf("成绩为	");
	scanf("%d", &n);
	n = n / 10;
	switch (n)
	{
	case 9:
		printf("等级为	A\n");
		break;
	case 8:
		printf("等级为	B\n");
		break;
	case 7:
		printf("等级为	C\n");
		break;
	case 6:
		printf("等级为	D\n");
		break;
	case 5:
		printf("等级为	E\n");
		break;
	case 4:
		printf("等级为	E\n");
		break;
	case 3:
		printf("等级为	E\n");
		break;
	case 2:
		printf("等级为	E\n");
		break;
	case 1:
		printf("等级为	E\n");
		break;
	case 0:
		printf("等级为	E\n");
		break;
	default:
		printf("error\n");
		break;
	}
	return 0;
}