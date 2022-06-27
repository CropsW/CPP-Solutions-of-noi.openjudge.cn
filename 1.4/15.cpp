#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, big;
    cin >> a >> b >> c;
    big = a;
    if (b > big) big = b;
    if (c > big) big = c;
    cout << big << endl;
    return 0;
}
