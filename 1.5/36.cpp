#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float x,result=0;
	int n;
	cin>>x>>n;
	for(;n>=0;n--){
		result+=pow(x,n);
	}
	printf("%.2f",result);
	return 0;
}