#include<iostream>
using namespace std;
int main()
{
	int N, K, M = 1;
	cin >> N >> K;
	float k =1+ K / 100.0;
	float house = 200.0;
	int money = N;
	while ( money <= house)
	{
		M++;
		if (M > 20)
		{
			cout << "Impossible";
			break;
		}
		house *= k;
		money += N;
	}

	if (M <= 20)
	{
		cout << M;
	}
	return 0;
}

