#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n, k; cin>>n>>k;
    long long ans = 1;
    while(k--){
        ans = (ans*n)%mod;
    }
    cout<<ans%mod<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
