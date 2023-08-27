#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n;i++) cin>>v[i];
    int ans = n+5;
    vector<int> fq(n+1, -1);
    for(int i=0; i<n;i++)
    {
        if(fq[v[i]]!= -1) ans = min(ans, i-fq[v[i]]+1);
            fq[v[i]] = i;
    }
    if(ans>n) cout<<-1<<endl;
    else cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)

    solve();
    return 0;
}
