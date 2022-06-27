#include <iostream>
using namespace std;
int main()
{
	int n, result = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		if (i % 7 != 0 && i % 10 != 7 && i / 10 != 7)
		{
			result += i * i;
		}
	}
	cout << result;
	return 0;
}