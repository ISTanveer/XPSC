#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k; cin>>n>>m>>k;
    vector<int> v(n+1); for(int i=1; i<=n; i++) cin>>v[i];
    vector<pair<int, pair<int,int>>>qry;
    for(int i=0; i<m;i++)
    {
        int l, r, d; cin>>l>>r>>d;
        qry.push_back({l, {r, d}});
    }
    vector<long long> tem(m+2, 0);
    for(int i=0; i<k; i++)
    {
        int a, b; cin>>a>>b;
        tem[a]++;
        tem[b+1]--;
    }
    long long sum=0;
    for(int i=1; i<=m+1; i++){
        sum+=tem[i];
        tem[i]=sum;
    }

    vector<long long> ans(n+2, 0);
    for(int i=0; i<qry.size(); i++)
    {
        int l = qry[i].first, r = qry[i].second.first, d = qry[i].second.second;
        long long tot =(long long) d*tem[i+1];
        ans[l] +=tot;
        ans[r+1] -=tot;
    }
    sum=0;
    for(int i=1; i<=n; i++){
        sum+=ans[i];
        ans[i] = sum;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<v[i]+ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    solve();
    return 0;
}
