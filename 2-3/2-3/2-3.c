#include <stdio.h>
int main()
{
	float r, n = 10;
	scanf("%f%", &r);
	r = r / 100;
	float p;
	int i;
	p = (1 + r);
	printf("�����ҹ�����������֮����������Ϊ%f������10����ҹ�����������ֵ��������������˶��ٰٷֱȡ�\n\n",r);
	for (i = 0; i < 9; i++)
	{
		p = p*(1 + r);
	}
	printf("10����ҹ�����������ֵ���������������\n\n%f\n", p);
	return 0;
}
