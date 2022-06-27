#include <iostream>
using namespace std;
int main(){
	int a,tmp;
	cin>>a;
	if(a<0){
		cout<<"-";
		a=-a;
	}
	tmp=a;
	tmp = tmp%10;
	while(a!=0) {
		a=a/10;
		tmp = tmp*10+a%10;
	}
	cout<<tmp/10;
	return 0;
}