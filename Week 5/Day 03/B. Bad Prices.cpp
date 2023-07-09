#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int mn = INT_MAX;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int ans = 0;
    for(int i=n-1; i>=0; i--){
        if(v[i]>mn) ans++;
        mn = min(mn, v[i]);
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
