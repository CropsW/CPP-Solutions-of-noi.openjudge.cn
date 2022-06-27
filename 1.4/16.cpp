#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b >= c || a+c >= b || b+c >= a){
		if(a != 0 && b != 0 && c != 0){
			cout<<"yes";
		}else{
			cout<<"no"; 
		}
	}else{
		cout<<"no";
	}
	return 0;
}
