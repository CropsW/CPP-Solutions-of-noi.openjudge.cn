#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a,he = 0,tmp;
	double pj;
	cin>>a;
	for(int i = 1;i <= a;i++){
		cin>>tmp;
		he += tmp;
	}
	pj = double(he) / a;
	printf("%d",he);
	printf(" %.5lf",pj);
	return 0;
}
