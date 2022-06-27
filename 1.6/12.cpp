#include<iostream>
using namespace std;
int main()
{
    const int x = 2; 
    int a[1000] = {0};
    int b = 0; 
    a[999] = 1;
    int N, i, j;
    cin >> N;
    for (i=0; i<N; i++){
        j = 999;
        while (j >= 0){
            int k = a[j] * x + b;
            a[j] = k % 10;
            b = k / 10;
            j--;
        }
    }
    for (i=0; i<1000; i++){
        if (a[i] != 0) break;
    }
    for (; i<1000; i++){
        cout << a[i];
    }
    cout << endl;
    return 0;
}