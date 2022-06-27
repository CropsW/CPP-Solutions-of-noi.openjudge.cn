#include<iostream>
using namespace std;
int main(){
	int a,tmp,max = 0;
	cin>>a;
	for(int i = 1;i <= a;i++){
		cin>>tmp;
		if(tmp > max) max = tmp;
	}
	cout<<max;
	return 0;
}
