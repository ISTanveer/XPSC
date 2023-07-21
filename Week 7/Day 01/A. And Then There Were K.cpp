#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n; cin>>n;
    long long i = 1;
    long long ans = 1;
    while(ans<n){
        i++;
        ans = (1<<i);
    }
    if(ans==n) cout<<n-1<<endl;
    else {
        i--;
        ans = (1<<i);
        cout<<ans-1<<endl;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
