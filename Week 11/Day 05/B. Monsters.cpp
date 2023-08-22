#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin>>n>>k;
    vector<pair<int, int>>v;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        v.push_back({a, i});
    }
    for(int i=0; i<n; i++)
    {
        int rem;
        if(v[i].first%k==0) rem = v[i].first/k -1;
        else rem = v[i].first/k;
        v[i].first -= (rem*k);
    }

    sort(v.begin(), v.end(), [&](pair<int, int> x, pair<int, int> y)
    {
        if(x.first==y.first) return x.second<y.second;
        return x.first>y.first;
    });
    for(int i=0; i<n; i++)
    {
        cout<<v[i].second<<" ";
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
