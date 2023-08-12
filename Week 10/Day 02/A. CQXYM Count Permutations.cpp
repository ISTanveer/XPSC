#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    long long n; cin>>n;
    long long ans=1, tem = 2*n;
    while(tem!=2)
    {
        ans = (ans*tem)%mod;
        tem--;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
