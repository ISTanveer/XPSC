#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
void solve()
{
    int n, k;
    cin>>n>>k;
    long long ans = 1;
    for(int i=1; i<=n; i++){
        ans = (ans*k)%mod;
        k--;
        if(k==0) break;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
