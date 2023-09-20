#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n+1); for(int i=1; i<=n; i++) cin>>v[i];
    int cnt=0;
    for(int i=1; i<=n; i++) {
        if(v[i]==i) cnt++;
    }
    if(cnt==n) {
        cout<<0<<endl ; return;
    }
    if(v[1]==1||v[n] == n){
        cout<<1<<endl; return;
    }
    if(v[1]==n&&v[n]==1){
        cout<<3<<endl; return ;
    }
    cout<<2<<endl;

}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
