#include<stdio.h>
int main()
{
    int a,b;
    char temp,c;
    scanf("%d%d",&a,&b);
    scanf("%c%c",&temp,&c); 
    if(c=='+' || c=='-' || c=='*' || c=='/')
    {
        if(c=='/')
            if(b==0)
            printf("Divided by zero!");
        else
            printf("%d",a/b);
        if(c=='+')
            printf("%d",a+b);
        if(c=='-')
            printf("%d",a-b);
        if(c=='*')
            printf("%d",a*b);
    }
    else 
        printf("Invalid operator!");
return 0;
}
