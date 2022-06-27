#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int n, x, max = 0, min = 1000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		if (x >= max)max = x;
		if (x <= min)min = x;
	}
	printf("%d", max - min);
	return 0;
}

