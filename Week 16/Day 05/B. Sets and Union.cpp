#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<vector<int> > v(n);
    vector<bool> un(51, false);
    for(int i=0; i<n; i++)
    {
        int k; cin>>k;
        v[i].resize(k);
        for(int j=0; j<k; j++)
        {
            int a; cin>>a;
            v[i].push_back(a); un[a] = true;
        }
    }
    vector<int> u;
    for(int i=1; i<=50; i++){
        if(un[i]) u.push_back(i);
    }
    int ans=0;
    for(int taken=1; taken<=50; taken++)
    {
        vector<bool>t(51, false);
        for(int i=0; i<n; i++)
        {
            bool flag= true;
            for(int j=0; j<v[i].size(); j++)
            {
                if(v[i][j]==taken){
                    flag = false; break;
                }
            }

            if(flag){
                for(int j=0; j<v[i].size(); j++)
                {
                    t[v[i][j]] = true;
                }
            }
        }
        vector<int> tem;
        for(int i=1; i<=50; i++) {
            if(t[i]) tem.push_back(i);
        }
        if(tem!=u) ans = max(ans, (int) tem.size());
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
