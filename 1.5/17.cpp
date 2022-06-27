#include<stdio.h>
#define max 46 //宏定义
int main() {
 
    int str[max]={1,1};  //初始化斐波那契数列的第一个和第二个值为1
    int k;  //定义需要计算的第k个数
    scanf("%d",&k);  
    for(int i=2; i<=k-1; i++)  //使用for循环计算第k个数的值
    {
        str[i]=str[i-2]+str[i-1];  //所要计算的每个数都等于前面2个数之和
    }
    printf("%d",str[k-1]);  //由于下标是从0开始的，所以第k个数的下标为k-1
    return 0;
}
