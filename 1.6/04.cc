#include <iostream>
using namespace std;
int main()
{
    int N,tmp;
    cin >> N;
    int n[N];
    for (int i = 1; i <= N;i++){
        cin >> tmp;
        n[N + 1 - i] = tmp;
    }
    for (int i = 1; i <= N;i++)
        cout << n[i]<<' ';
    return 0;
}