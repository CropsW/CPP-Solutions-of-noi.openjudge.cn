#include <iostream>
using namespace std;
int main()
{
	int a,b,result1=0,result2=0,result3=0;
	cin>>a;
	for(int i = 1;i <= a;i++){
		cin>>b;
		if (b == 1) result1++;
		if (b == 5) result2++;
		if (b == 10) result3++;
	}
	
	cout<<result1<<endl<<result2<<endl<<result3<<endl;
}
