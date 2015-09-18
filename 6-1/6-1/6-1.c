#include <stdio.h>
int main()
{
	void swap(int *p1, int *p2);
	int arr[10];
	int i, j;
	printf("请输入10个数字\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d	=	", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arr[i] > arr[j])swap(&arr[i], &arr[j]);
		}
	}
	printf("输出结果\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d	=	%d\n", i + 1, arr[i]);
	}
	return 0;
}
void swap(int* p1, int* p2)
{
	int swap;
	swap = *p1;
	*p1 = *p2;
	*p2 = swap;
}