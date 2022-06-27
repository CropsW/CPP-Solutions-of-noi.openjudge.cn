#include<iostream>
using namespace std;
int main(){
	int a,ge,shi,bai;
	cin>>a;
	bai=a%10;
	shi=a/10-(a/100)*10;
	ge=a/100;
	cout<<bai<<shi<<ge;
	return 0;
}
