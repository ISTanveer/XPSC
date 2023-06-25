#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin>>n>>k;
    map<int, vector<int>> mp;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]].push_back(i);
    }

    while(k--)
    {
        int ans1, ans2;
        bool flag = true;
        int a, b;
        cin>>a>>b;
        if(mp.find(a)!=mp.end())
             ans1 = mp[a][0];
        else flag = false;
        if(mp.find(b)!=mp.end())
             ans2 = mp[b][mp[b].size()-1];
        else flag = false;
        if(flag)
        {
            if(ans1<=ans2) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
