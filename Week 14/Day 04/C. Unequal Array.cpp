#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int mn=-1, mx=-1;
    for(int i=1; i<n; i++)
    {
        if(v[i]==v[i-1]){
            if(mn==-1) mn = i;
            mx=i;
        }
    }
    if(mn==mx) cout<<0<<"\n";
    else cout<<max(1, mx-mn-1)<<'\n';
}

int main()
{
    int t;
    cin>>t ;
    while(t--)
        solve();
    return 0;
}
