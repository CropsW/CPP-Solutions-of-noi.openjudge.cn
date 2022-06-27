#include<iostream>
#include<cstdio>
using namespace std;
int main(){
long a,b;
scanf("%ld%ld",&a,&b);
if((a>=60)&&(b>=60))printf("0");
else if((a<60)&&(b<60))printf("0");
else printf("1");
return 0;
}
