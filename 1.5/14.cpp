#include <iostream>
using namespace std;
int main(){
	double x,n;
	cin>>x>>n;
	double result=x;
	for(int i = 1;i<=n;i++){
		result *= 1.001;
	}
	printf("%.4lf",result);
	return 0;
}
