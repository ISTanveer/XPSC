#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        mp[a]++;
    }
    int team = 0;
    int mx=-1, take;
    for(auto [x, y]:mp)
    {
        if(mx<=y){
            take = x;
            mx = y;
        }
    }
    //cout<<mx<<" "<<take<<endl;
    int t1=0, t2=0;
    for(auto [x, y]:mp)
    {
        if(x==take) {
            t2 = y; continue;
        }
        if(y>0) t1++;
    }
    //for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    //cout<<t1<<" "<<t2<<"\n";
    if(t1>=t2){
        cout<<t2<<"\n"; return;
    }
    else if(t2-t1>1){
        cout<<t1+1<<"\n";
    }
    else{
        cout<<t1<<"\n";
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
}