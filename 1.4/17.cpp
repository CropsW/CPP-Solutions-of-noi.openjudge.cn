#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	if(a%4 == 0){
		if(a%100 != 0 || a%400 == 0){
			if(a%3200 != 0){
				cout<<'Y';
			}else{
				cout<<'N';
			}
		}else{
			cout<<'N';
		}
	}else{
		cout<<'N';
	}
	return 0;
} 
