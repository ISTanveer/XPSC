#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, d; cin>>n>>k>>d;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int ans = k;
    map<int, int> mp;

    int i=0, j=0;
    while(i<n)
    {
        if(i<d){
            mp[v[i]]++; i++; continue;
        }
        if(ans>mp.size()){
            ans = mp.size();
        }
        mp[v[j]]--; if(mp[v[j]]==0) mp.erase(v[j]);
        mp[v[i]]++;
        j++; i++;
    }
    if(ans>mp.size()) ans = mp.size();

    //cout<<mp.size()<<endl;
    //if(ans>mp.size()) ans = mp.size();
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
