#include <iostream>
using namespace std;

int main (){
	int n, x, a = 0, b = 0, c = 0, sum = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		a += x;
		cin >> x;
		b += x;
		cin >> x;
		c += x;
	}
	cout << a << ' ' << b << ' ' << c << ' ' << a + b + c << endl;
	return 0;
}

