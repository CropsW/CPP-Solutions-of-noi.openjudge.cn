#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    int ans;
    cin>>n>>x>>y;
    if(y%x==0)
    {
    ans=n-y/x;
    if(ans>=0)
    cout<<ans;
    else cout<<0;
    }
    else
    {
    ans=n-y/x-1;
    if(ans>=0)
    cout<<ans;
    else cout<<0;
    }
    return 0;
}
