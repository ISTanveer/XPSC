#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int m = (n*(n-1))/2;
    map<int, int> mp;
    int mx = INT_MIN;
    for(int i=0; i<m; i++)
    {
        int a; cin>>a;
        mp[a]++;
        mx = max(mx, a);
    }
    vector<int> ans(n, mx);
    for(int i=n-1; i>=1; i--)
    {
        for(auto m:mp){
            if(m.second>=i){
                ans[i] = m.first;
                mp[m.first] -=i;
                break;
            }
        }
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
