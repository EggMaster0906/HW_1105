#include <stdio.h>
#include <stdlib.h>

double Power(double, int);

int main(void)
{
	int k;
	double ans;

	printf("計算3.5的K次方? 請輸入K=");
	scanf("%d", &k);
	ans = Power(3.5, k);
	printf("3.5的%d次方=%f\n", k, ans);
	system("pause");
}

double Power(double x, int n)
{
	double PowerXn = 1;
	for (int i = 1; i <= n; i++)
	{
		PowerXn = PowerXn * x;
	}
	return PowerXn;
}