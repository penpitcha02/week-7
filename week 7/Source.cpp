#include <stdio.h>
void P(int i)
{
	int m = 1, sum = 0;
	while (m < i)
	{
		if (i % m == 0)
		{
			sum += m;
		}
		m++;
	}
	if (sum == i)
	{
		printf("%d ", i);
	}
}
int main()
{
	int i=1,x;
	scanf_s("%d",&x);
	while (i <= x)
	{
		P(i);
		i++;
	}
	return 0;
}