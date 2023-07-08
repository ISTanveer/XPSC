#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        v[i].first = a;
    }
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        v[i].second = a;
    }
    sort(v.begin(), v.end());
    long long ans = k;
    for(int i=0; i<n; i++)
    {
        if(v[i].first<=ans) ans+=v[i].second;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
