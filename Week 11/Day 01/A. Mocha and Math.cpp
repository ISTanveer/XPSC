#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int ans = v[0];
    for(int i=1; i<n; i++) ans&=v[i];
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--) solve();
    return 0;
}
