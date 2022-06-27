#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double time = 0, juli, n, x, y, people;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y >> people;
        time += people * 1.5;
        juli = sqrt((x * x) + (y * y));
        time += juli / 25;
    }
    cout << ceil(time);
    return 0;
}