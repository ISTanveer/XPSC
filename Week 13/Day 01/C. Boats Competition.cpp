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
    int mx = 0;
    for(int i=2; i<=2*n; i++){
        int tl = 0;
        for(auto m:mp){
            int j = i-m.first;
            if(j>0&&mp.find(j)!=mp.end()){
                tl += min(m.second, mp[j]);
            }
        }
        tl /=2; //everytime i will get double answer of same value..
        mx = max(mx, tl);
    }
    cout<<mx<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
