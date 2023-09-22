#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<long long> v(n); for(int i=0; i<n;i++) cin>>v[i];
    long long ans = 0;
    sort(v.begin(), v.end());
    long long tem = v[n/2];
    for(int i=0; i<n; i++)
    {
        ans+= abs(tem-v[i]);
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}
