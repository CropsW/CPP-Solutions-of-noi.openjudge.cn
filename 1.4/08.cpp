#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%3==0)
		if(n%5==0)
			cout<<"YES";
		else
			cout<<"NO";
	else
		cout<<"NO";
	return 0;
}
