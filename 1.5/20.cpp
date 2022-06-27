#include <iostream>
using namespace std;
int main()
{
    double h;
    cin>>h;
    double s=0;
    for(int i =0;i<10;i++)
    {
        s+=1.5*h;
        h=0.5*h;
    }
    cout<<s-h<<endl;
    cout<<h<<endl;
    return 0;
}

