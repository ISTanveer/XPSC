#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int m; cin>>m;
    map<int, int> mp;
    for(int i=0; i<m; i++)
    {
        int n; cin>>n;
        for(int j=0; j<n; j++){
            int a; cin>>a;
            mp[a] = i+1;
        }
    }
    vector<int> ans(m+1, -1);
    for(auto [v, last]:mp){
        if(ans[last]==-1){
            ans[last] = v;
        }
    }
    bool flag = true;
    for(int i=1; i<=m; i++){
        if(ans[i]==-1){
            flag = false;
            break;
        }
    }
    if(!flag) {
        cout<<-1<<endl;
        return;
    }
    for(int i=1; i<=m; i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
