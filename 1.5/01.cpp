#include <cstdio>
#include <iostream>
int main()
{
    int n,b,c,s;
    float result;
    scanf("%d",&n);
    s=0;
    for(b=1;b<=n;b++)
    {
        scanf("%d",&c);
        s=s+c;
    }
    result=1.0*s/n;
    printf("%.2f",result);
    return 1;
} 

