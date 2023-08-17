#include<bits/stdc++.h>
using namespace std;
/*
if ax + by = n; so,, n = multiple * gcd(a, b)...
    if(n%(gcd(a, b))==0 ) yes or no......
*/
void solve()
{
    long long n, k; cin>>n>>k;
    if(n%2==0) {
        cout<<"YES\n";
        return;
    }
    if(k%2==0){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
