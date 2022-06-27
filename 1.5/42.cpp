#include <iostream>
using namespace std;
int main()
{
	int h, b, i, j, isShiXin;
	char c;
	cin >> h >> b >> c >> isShiXin;
	for (i = 1; i <= b; i++)
	{
		cout << c;
	}
	cout << endl;
	if (isShiXin == 0)
	{
		// 空心
		for (i = 1; i <= (h - 2); i++)
		{
			cout << c;
			for (j = 1; j <= (b - 2); j++)
			{
				cout << " ";
			}
			cout << c << endl;
		}
	}
	else
	{
		// 实心
		for (i = 1; i <= (h - 2); i++)
		{
			for (j = 1; j <= b; j++)
			{
				cout << c;
			}
			cout << endl;
		}
	}
	for (i = 1; i <= b; i++)
	{
		cout << c;
	}
}
