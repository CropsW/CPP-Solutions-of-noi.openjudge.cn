#include <iostream>
using namespace std;
int main()
{
    int k, n = 1;
    cin >> k;
    double Sn, tmp;
    while (k < Sn)
    {
        Sn = 1;
        for (int i = 2; i < (n + 2); i++)
        {
            tmp = 1 / i;
            Sn += tmp;
        }
    }
    cout << n;
    return 0;
}
// ERROR: RESULT_WRONG