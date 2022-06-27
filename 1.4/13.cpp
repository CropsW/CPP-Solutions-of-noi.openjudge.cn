#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
//y = -x + 2.5; 0 <= x < 5
//y = 2 - 1.5(x - 3)(x - 3); 5 <= x < 10
//y = x / 2 - 1.5; 10 <= x < 20
int main()
{
	float x, y;
	scanf("%f", &x);
	if (x >= 0 && x < 5) y = -x + 2.5;
	else if (x >= 5 && x < 10)y = 2 - 1.5 * (x - 3) * (x - 3);
	else if (x >= 10 && x < 20)y = x / 2 - 1.5;
	printf("%.3f", y);
	return 0;
}

