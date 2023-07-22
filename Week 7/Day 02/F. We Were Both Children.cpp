#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        mp[a]++;
    }
    vector<int> d[n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j*j<=i; j++)
        {
            if(i%j==0){
                if(j==(i/j)) d[i].push_back(j);
                else {
                    d[i].push_back(j);
                    d[i].push_back(i/j);
                }
            }
        }
    }
//    for(int i=0; i<=n; i++){
//        for(auto j:d[i]) cout<<j<<" ";
//        cout<<endl;
//    }
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        int cnt=0;
        for(int j=0; j<d[i].size(); j++)
        {
            if(mp.find(d[i][j])!=mp.end())
            {
                cnt += mp[d[i][j]];
            }
        }
        mx = max(mx, cnt);
    }
    cout<<mx<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
