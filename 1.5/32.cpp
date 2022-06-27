#include <iostream>
using namespace std;
int main()
{
    int n, temp, p=1, q=2;
    double x=0;
    cin >> n;
    for (int i=0; i<n; i++){
        x += (double)q/p;
        temp = q;
        q += p;
        p = temp;
    }
    printf("%.4f",x);
    return 0;
}