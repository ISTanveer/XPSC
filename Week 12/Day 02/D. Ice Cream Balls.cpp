#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n; cin>>n;
    ll l=0, h=1e10;
    while(l<h-1)
    {
        ll mid = l+(h-l)/2;
        ll val = (mid*(mid-1))/2;
        //cout<<mid<<" "<<val<<endl;
        if(val>n){
            h=mid;
        }
        else l = mid;
    }
    ll cur = (l*(l-1))/2;
    cout<<l+(n-cur)<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
