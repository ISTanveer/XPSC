#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m; cin>>n>>m;
    vector<int> ans(n);
    if(m<n){
        cout<<"NO\n"; return;
    }
    if(n%2==1)
    {
        for(int i=0; i<n-1; i++) ans[i] = 1;
        ans[n-1] = m-(n-1);
    }
    else
    {
        for(int i=0; i<n-2; i++) ans[i] = 1;
        m = m-(n-2);
        if(m>0&&m%2==0){
            ans[n-2] = m/2;
            ans[n-1] = m/2;
        }
        else{
            cout<<"NO\n"; return;
        }
    }
    cout<<"YES\n";
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
