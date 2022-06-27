#include <cstdio>
int main()
{
double x,a,b,c,d;
scanf("%lf %lf %lf %lf %lf",&x,&a,&b,&c,&d);
a=a*x*x*x;
b=b*x*x;
c=c*x;
printf("%.7lf",a+b+c+d);
return 0;
}
