#include <stdio.h>
#define pi 3.141593

int main()
{
	float r, h;
	printf("圆的半径=");
	scanf("%f", &r);
	printf("圆柱高=");
	scanf("%f", &h);
	printf("圆周长=%.2f\n", 2 * pi*r);
	printf("圆面积=%.2f\n", pi*r*r);
	printf("圆球表面积=%.2f\n", 4 * pi*r*r);
	printf("圆球体积=%.2f\n", 1.5*pi*r*r*r);
	printf("圆柱体积=%.2f\n", h*pi*r*r);
	return 0;
}
