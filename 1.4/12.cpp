#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	float blance, t1, t2;
	scanf("%f", &blance);
	t1 = 27 + 23 + blance / 3.0;
	t2 = blance / 1.2;
	if (t1 < t2)printf("Bike");
	else if (t1 > t2)printf("Walk");
	else printf("All");
	return 0;
}

