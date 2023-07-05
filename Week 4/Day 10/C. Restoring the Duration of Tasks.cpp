#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> s(n), e(n);
    for(int i=0; i<n; i++) cin>>s[i];
    for(int i=0; i<n; i++) cin>>e[i];
    queue<int> q;
    vector<int> ans;
    ans.push_back(e[0]-s[0]);
    for(int i=1; i<n; i++)
    {
        if(s[i]<e[i-1]){
            ans.push_back(e[i]-e[i-1]);
            continue;
        }
        ans.push_back(e[i]-s[i]);
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
