#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    if(n%k==0) cout<<n<<endl;
    else{
        int rem = n%k;
        int ans = n-rem;
        if(rem>(k/2)) ans += (k/2);
        else ans += rem;
        cout<<ans<<endl;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
