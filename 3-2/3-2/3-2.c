#include <stdio.h>
#define pi 3.141593

int main()
{
	float r, h;
	printf("Բ�İ뾶=");
	scanf("%f", &r);
	printf("Բ����=");
	scanf("%f", &h);
	printf("Բ�ܳ�=%.2f\n", 2 * pi*r);
	printf("Բ���=%.2f\n", pi*r*r);
	printf("Բ������=%.2f\n", 4 * pi*r*r);
	printf("Բ�����=%.2f\n", 1.5*pi*r*r*r);
	printf("Բ�����=%.2f\n", h*pi*r*r);
	return 0;
}
