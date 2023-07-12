#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int ans = 1e9+9;
    for(int i=n-1; i>=1; i--){
        ans = min(ans, v[i]-v[i-1]);
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
