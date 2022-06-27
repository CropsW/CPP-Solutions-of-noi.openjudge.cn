#include <iostream>
using namespace std;
int main()
{
    double e = 0, tmp = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        tmp *= i;
        e += 1 / tmp; // 求和
    }
    printf("%.10lf", e+1);
    return 0;
}
