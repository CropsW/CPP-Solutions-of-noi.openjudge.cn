// 求阶乘的和
#include <iostream>
using namespace std;
int main()
{
    int n, tmp = 1, result = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        tmp = 1;
        // 求单个数的阶乘
        for (int j = 1; j <= i; j++)
        {
            tmp *= j;
        }
        result += tmp; // 求和
    }
    cout << result;
    return 0;
}