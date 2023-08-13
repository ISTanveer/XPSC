#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    vector<vector<int> > ans;
    ans.push_back(v);
    while(1)
    {
        map<int, int> mp;
        for(int i=0;i<n; i++){
            mp[v[i]]++;
        }
        bool flag = true;
        for(auto i:mp){
            if(i.first!=i.second) {
                flag = false;
                break;
            }
        }
        if(flag) break;
        for(int i=0; i<n; i++){
            if(mp.find(v[i])!=mp.end()){
                v[i] = mp[v[i]];
            }
        }
        ans.push_back(v);
    }
    int q; cin>>q;
    for(int i=0; i<q; i++)
    {
        int x, k; cin>>x>>k;
        if(k>=ans.size()-1){
            cout<<ans[ans.size()-1][x-1]<<endl;
        }
        else{
            cout<<ans[k][x-1]<<endl;
        }
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
