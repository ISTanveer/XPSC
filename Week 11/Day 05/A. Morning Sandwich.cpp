#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b;
    cin>>n>>a>>b;
    int ans=0;
    if((a+b)>=(n-1)) {
        ans +=(n-1);
        ans+=n;
    }
    else{
        ans+=(a+b);
        ans+=(a+b+1);
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
