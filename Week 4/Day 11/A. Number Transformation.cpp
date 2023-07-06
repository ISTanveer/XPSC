#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y; cin>>x>>y;
    if(y%x==0){
        int a = 1;
        int b = y/x;
        cout<<a<<" "<<b<<endl;
    }
    else cout<<0<<" "<<0<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
