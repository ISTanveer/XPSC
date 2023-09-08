#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    long long ans = 1e18;
    for(int i=0; i<n;i++)
    {
        long long d, s; cin>>d>>s;
        ans = min(ans, d+(s-1)/2);
    }
    cout<<ans<<endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    int t; cin>>t; while(t--)
    solve();

    return 0;
}
