#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        v.push_back({val, i});
    }
    vector<int> b(n); for(int i=0; i<n; i++) cin>>b[i];
    sort(b.begin(), b.end());
    sort(v.begin(), v.end());
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        ans[v[i].second] = b[i];
    }
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
