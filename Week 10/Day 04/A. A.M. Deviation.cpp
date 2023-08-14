#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b, c; cin>>a>>b>>c;
    long long ans = (a+c) - 2*b;
    if(ans%3==0) cout<<0<<endl;
    else cout<<1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
