#include <stdio.h>
#include <stdlib.h>

double Power(double, int);

int main(void)
{
	int k;
	double ans;

	printf("�p��3.5��K����? �п�JK=");
	scanf("%d", &k);
	ans = Power(3.5, k);
	printf("3.5��%d����=%f\n", k, ans);
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