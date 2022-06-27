#include <iostream>
 
using namespace std;
 
int main(){
	int r, m, y;	
	cin >> r >> m >> y;
	double m1 = (double)m;
	for (int i = 0;i < y;i++)
	{
		m1 = (1 + 0.01 * r) * m1;
	}
	m = m1;
	cout << m << endl;
	return 0;
}
