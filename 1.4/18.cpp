#include <iostream>
using namespace std;
int main()
{
    int x, y, in=0;
    cin >> x >> y;
    if ((x>=-1&&y>=-1) && (x<=1&&y<=1)) in = 1;
    cout << (in?"yes":"no") << endl;
    return 0;
}
