#include <iostream>
#include <cmath> 
int main()
{
    int a,i;
    //freopen("prime.in","r",stdin);
    //freopen("prime.out","w",stdout);
    scanf("%d",&a); 
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0) printf("%d\n",a/i);//找到了，返回1    
    }                          
    return 0;
}