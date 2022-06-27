#include <cstdio>
int main()
{
	int a, n, i, sum = 1;
	scanf("%d %d", &a, &n);
	for (i = 1; i <= n; i++)
		sum = sum * a;
	printf("%d", sum);
	return 0;
}