#include <iostream>
using namespace std;

int main()
{
	int n, x, y, result;
	cin >> n >> x >> y;
	
	result = n - y/x;
	if (y % x != 0)
		result--;
	if (result < 0)
		result = 0;
		
	cout << result << endl;
	return 0;
}
