#include <stdio.h>
int main()
{
	float r, n = 10;
	scanf("%f%", &r);
	r = r / 100;
	float p;
	int i;
	p = (1 + r);
	printf("假如我国国民生产总之的年增长率为%f，计算10年后我国国民生产总值与现在相比增长了多少百分比。\n\n",r);
	for (i = 0; i < 9; i++)
	{
		p = p*(1 + r);
	}
	printf("10年后我国国民生产总值与现在相比增长了\n\n%f\n", p);
	return 0;
}
