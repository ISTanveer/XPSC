#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    vector<long long> ps(n); ps[0] = v[0];
    for(int i=1 ;i<n; i++)
    {
        ps[i] = ps[i-1] + v[i];
    }
    long long ans = 1;
    for(int i=0; i<n-1; i++)
    {
        long long tem = ps[n-1]-ps[i];
        ans = max(ans, __gcd(tem, ps[i]));
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
