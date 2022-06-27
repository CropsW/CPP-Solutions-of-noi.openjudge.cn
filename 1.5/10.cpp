#include <iostream>
using namespace std;
int main(){
	int m,n,result=0;
	cin>>m>>n;
	for(;m <= n;m++){
		if(m%17==0) result += m;
	}
	cout<<result;
	return 0;
} 
