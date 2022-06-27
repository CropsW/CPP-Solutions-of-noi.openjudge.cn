#include <iostream>
using namespace std;
int main()
{
    int m, k, tmp,count=0;
    cin >> m >> k;
    if (m % 19 == 0)
    {
        tmp = m;
        while (tmp != 0)
        {
            if(tmp%10 == 3)
                count++;
            tmp /= 10;
        }
        
    }
    else{
        cout << "NO";
        return 0;
    }
    if (count != k)
    {
        cout << "NO";
        return 0;
    }
    
    cout << "YES";
    return 0;
}