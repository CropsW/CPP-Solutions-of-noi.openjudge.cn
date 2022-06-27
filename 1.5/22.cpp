#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int budget, cash=0, saved=0, temp;
    for (int i=1; i<=12; i++){
        cin >> budget;
        cash += 300;
        if (cash < budget){
            cout << -i << endl;
            return 0;
        }
        temp = (cash - budget) / 100 * 100;
        cash -= temp+budget;
        saved += temp;
    }
    cout << cash+(int)(saved*1.2) << endl;
    return 0;
}