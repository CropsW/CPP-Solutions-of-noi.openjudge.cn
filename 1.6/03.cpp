#include <iostream>
using namespace std;
int main()
{
    int n[10], tmp;
    float p[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65}, result = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> tmp;
        n[i] = tmp;
    }
    for (int i = 0; i < 10; i++)
    {
        result += n[i] * p[i];
    }
    printf("%.1f", result);
    return 0;
}