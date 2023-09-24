#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    vector< pair<int, int> > v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first; v[i].second = i;
    }
    sort(v.begin(), v.end());
    int mn = INT_MAX, mx = 0;
    int mxx[n+2], mnn[n+2];
    for(int i=n-1; i>=0; i--)
    {
        mx = max(mx, v[i].second);
        mxx[i] = mx;
        mn = min(mn, v[i].second);
        mnn[i] = mn;
    }
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        int x = mxx[i]-mnn[i]+1;
        int val = v[i].first;
        mp[val] = max(mp[val], x*2);
    }
    for(int i=1; i<=k; i++){
        cout<<mp[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
