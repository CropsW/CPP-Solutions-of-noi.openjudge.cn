#include<iostream>
using namespace std;
int main(){
	int h,r;
	float v;
	cin>>h>>r;
	v=3.14159*r*r*h;
	v=v/1000;
	cout<<int(20/v)+1;
	return 0;
}
