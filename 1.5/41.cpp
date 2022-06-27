#include <iostream>
using namespace std;
int main()
{
    int l, r, tmp, result=0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        tmp = i;
        while (tmp != 0)
        {
            if (tmp % 10 == 2)
                result++;
            tmp /= 10;
        }
    }
    cout << result;
    return 0;
}