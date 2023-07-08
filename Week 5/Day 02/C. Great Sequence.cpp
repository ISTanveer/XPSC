#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, x; cin>>n>>x;
    map<long long, long long> mp;
    vector<long long> v(n); for(int i=0; i<n; i++) {cin>>v[i]; mp[v[i]]++;}

    sort(v.begin(), v.end());
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if(mp.find(v[i])!=mp.end()){
            long long  tem = v[i]*x;
            if(mp.find(tem)!=mp.end()){
                mp[tem]--;
            }
            else ans++;
            mp[v[i]]--;
            if(mp[tem]==0) mp.erase(tem);
            if(mp[v[i]]==0) mp.erase(v[i]);
        }
//        if(mp.count(v[i])==0) continue;
//        int tem = v[i]*x;
//        if(mp.count(tem))
//        {
//            mp[tem]--;
//        }
//        else ans++;
//        mp[v[i]]--;
//        if(mp[tem]==0) mp.erase(tem);
//        if(mp[v[i]]==0) mp.erase(v[i]);
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
