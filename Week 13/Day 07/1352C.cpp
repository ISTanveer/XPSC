#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k; cin>>n>>k;
    if(n>k){
        cout<<k<<"\n";
        return;
    }
    long long ans = k + (k/(n-1));
    if(k%(n-1)==0){
        ans--;
    }
    cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t; cin>>t; while(t--)
    solve();
}