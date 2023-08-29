#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        mp[a]++;
    }
    for(auto i:mp){
        if(i.second>1){
            cout<<"YES\n"; return;
        }
    }
    cout<<"NO\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
