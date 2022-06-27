#include <iostream>
using namespace std;
int main(){
    int n,result=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int count=0;
        int t = i;
        while(t!=0){
            if(t%10==1){
                count++;
            }
            t /= 10;
        }
        result += count;
    }
    cout << result;
    return 0;
}