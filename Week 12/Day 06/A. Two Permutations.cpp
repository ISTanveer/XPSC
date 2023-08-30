#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b; cin>>n>>a>>b;
    if(a==n&&b==n){
        cout<<"YES\n";
        return;
    }
    if(a+b<=n-2){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
