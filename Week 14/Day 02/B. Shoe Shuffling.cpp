#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        mp[v[i]]++;
    }
    for(auto m:mp)
    {
        if(m.second<=1){
            cout<<-1<<endl;
            return;
        }
    }
    vector<int> ans(n);
    int ind = 0, cnt=1, j=0;
    for(auto i:mp)
    {
        ind+=i.second;
        ans[j] = ind; j++;
        while(cnt<ind)
        {
            ans[j] = cnt; cnt++;
            j++;
        }
        cnt++;
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
