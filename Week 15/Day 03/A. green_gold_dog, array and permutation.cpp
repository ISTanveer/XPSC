#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first; v[i].second = i;
    }
    sort(v.rbegin(), v.rend());
    vector<pair<int, int> > ans;
    int rem = 1;
    for(int i=0; i<n; i++)
    {
        ans.push_back({v[i].second, rem});
        rem++;
    }
    sort(ans.begin(), ans.end());
    for(auto i:ans) cout<<i.second<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
