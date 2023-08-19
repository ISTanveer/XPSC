#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<vector<int> > v(n);
    for(int i=0; i<n; i++)
    {
        int m; cin>>m;
        for(int j=0; j<m; j++){
            int a; cin>>a;
            v[i].push_back(a);
        }
    }
    for(int i=0; i<n; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    int mn = INT_MAX;
    for(int i=0; i<n;i++) mn = min(mn, v[i][0]);
    vector<int> ans;
    for(int i=0; i<n; i++) ans.push_back(v[i][1]);
    sort(ans.begin(), ans.end());
    if(ans[0]>mn) ans[0] = mn;
    long long sum=0;
    for(int i=0; i<n; i++) sum+=ans[i];
    cout<<sum<<endl;

}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
