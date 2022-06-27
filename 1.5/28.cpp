#include <iostream>
using namespace std;
int main(){
	int n,tmp;
	cin>>n;
	tmp = n;
	while(n!=0){
 		tmp = n%10;
 		n/=10;
 		cout<<tmp<<" ";
	}
	return 0;
}