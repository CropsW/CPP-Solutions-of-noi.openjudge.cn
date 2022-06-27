#include <iostream>
using namespace std;
int main(){
	int n;
	double result;
	cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		if (i%2 == 0) result-=1.0/i;
		else result+=1.0/i;
	}
	printf("%.4f",result);
	return 0;
}
