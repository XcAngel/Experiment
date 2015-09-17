#include <stdio.h>
int main()
{
	float PaI(int T, int I, int B);
	float Principal = 1000;
	int i;
	printf("有1000元，计算存款利息\n\n");
	printf("	一次存5年期。					%.2f\n\n", PaI(5, Principal, 0) - Principal);
	printf("	先存2年期，到期后将本息再存3年期。		%.2f\n\n", PaI(3, PaI(2, Principal, 0), 0) - Principal);
	printf("	先存3年期，到期后将本息再存2年期。		%.2f\n\n", PaI(2, PaI(3, Principal, 0), 0) - Principal);
	for (i = 0; i < 5; i++)Principal = PaI(1, Principal, 0);
	printf("	存1年期，到期后将本息再存1年期，连续存5次。	%.2f\n\n", Principal - 1000);
	Principal = 1000;
	for (i = 0; i < 20; i++)Principal = PaI(NULL, Principal, 1);
	printf("	活期存款。活期利息每季度结算一次。		%.2f\n\n", Principal - 1000);
	return 0;
}
float PaI(int T, int P, int B)
{
	float IR[7] = { 0,0.0325,0.0375,0.0425,0,0.0475,0.0035 };
	float Results;
	if (B == 0)
	{
		Results = P*(1+T*IR[T]);
	}
	else if (B == 1)
	{
		Results = P*(1 + IR[6] / 4);
	}
	return Results;
}