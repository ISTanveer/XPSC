#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int ans = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int c = 0;
        if(i>0) c = max(c, abs(v[i]-v[i-1]));
        if(i<n-1) c = max(c, abs(v[i]-v[i+1]));
        ans = min(ans, c);
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}

