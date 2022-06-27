#include <iostream>
using namespace std;
int main()
{
    int n, result = 0, qian, bai, shi, ge, tmp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        qian = tmp / 1000;
        bai = tmp % 1000 / 100;
        shi = tmp % 100 / 10;
        ge = tmp % 10;
        if ((ge - qian - bai - shi) > 0)
            result ++;
    }
    cout << result;
    return 0;
}