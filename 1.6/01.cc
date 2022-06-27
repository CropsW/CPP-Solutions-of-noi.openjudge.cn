#include <iostream>
using namespace std;
int main()
{
    int N, n[100], tmp, m, count=0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> tmp;
        n[i] = tmp;
    }
    cin >> m;
    for (int i = 1; i <= N; i++)
    {
        if(n[i]==m)
            count++;
    }
    cout << count;
    return 0;
}