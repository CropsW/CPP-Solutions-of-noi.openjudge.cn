#include<iostream>
using namespace std;
int main()
{
	int sum=0,zd=30,tt,high[10];
	
	for(int i=0;i<10;i++)
	{
		cin>>high[i];
	}cin>>tt;
	tt+=zd;
	for(int j=0;j<10;j++)
	{
		if(tt>=high[j]) sum++;
	}
	cout<<sum;
    return 0;
}

