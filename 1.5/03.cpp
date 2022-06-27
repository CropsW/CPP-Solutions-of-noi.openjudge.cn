#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a;
	double result,tmp;
	cin>>a;
	for(int i = 1;i <= a;i++){
		cin>>tmp;
		result += tmp;
	}
	result /= double(a);
	printf("%.4lf",result);
	return 0;
}
