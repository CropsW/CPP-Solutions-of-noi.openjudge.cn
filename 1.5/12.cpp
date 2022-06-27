#include <iostream>
using namespace std;
int main()
{
	int n,m,result=0;
	cin>>n>>m;
	for(int tmp;n>0;n -= 1){
		cin>>tmp;
		if(tmp==m) result++;
	}
	cout<<result;
	return 0;
}
