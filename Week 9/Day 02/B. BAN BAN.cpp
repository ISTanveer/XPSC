#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string tem = "BAN", s;
    for(int i=0; i<n; i++) s+=tem;
    vector<pair<int, int>>v;
    for(int i=0, j=s.size()-1; i<j; i++, j--)
    {
        if(s[i]=='B'&&s[j]=='N'){
            v.push_back({i+1, j+1});
        }
    }
    cout<<v.size()<<endl;
    for(auto [v1, v2]:v) cout<<v1<<" "<<v2<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
