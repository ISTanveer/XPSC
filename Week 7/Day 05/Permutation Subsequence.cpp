#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
void solve()
{
    int n; cin>>n;
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        mp[a]++;
    }
    long long ans=0, pre=1;
    for(int i=1; i<=n; i++)
    {
        long long tem = (pre*mp[i])%mod;
        ans +=tem;
        ans%=mod;
        pre = tem;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
