#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k; cin>>n>>k;
    vector<int> v(n+1);
    for(int i=1; i<=n;i++) cin>>v[i];
    int ans=n;
    for(int c=1; c<=100; c++)
    {
        int cnt=0;
        for(int i=1; i<=n;)
        {
            if(v[i]==c) {
                i++; continue;
            }
            i+=k; cnt++;
        }
        //cout<<cnt<<endl;
        ans = min(ans, cnt);
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
