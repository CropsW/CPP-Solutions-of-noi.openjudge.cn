#include<stdio.h>
 
int main()
{
 
	int weight,price;
	char urgent;
	scanf("%d %c",&weight,&urgent);
	if(weight<=1000) price = 8;
    else if(weight>1000){
        weight = weight-1000;
        price = weight/500*4+8;
    if(weight%500 != 0) price = price+4;
    }
    if(urgent=='y') price = price+5;
    printf("%d",price);
 
	return 0;
}
