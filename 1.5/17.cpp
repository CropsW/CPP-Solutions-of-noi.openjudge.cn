#include<stdio.h>
#define max 46 //�궨��
int main() {
 
    int str[max]={1,1};  //��ʼ��쳲��������еĵ�һ���͵ڶ���ֵΪ1
    int k;  //������Ҫ����ĵ�k����
    scanf("%d",&k);  
    for(int i=2; i<=k-1; i++)  //ʹ��forѭ�������k������ֵ
    {
        str[i]=str[i-2]+str[i-1];  //��Ҫ�����ÿ����������ǰ��2����֮��
    }
    printf("%d",str[k-1]);  //�����±��Ǵ�0��ʼ�ģ����Ե�k�������±�Ϊk-1
    return 0;
}
