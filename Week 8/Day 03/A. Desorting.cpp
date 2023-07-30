#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int mn = INT_MAX;
    for(int i=1; i<n; i++)
    {
        mn = min(mn, v[i]-v[i-1]);
    }
    if(mn<0) cout<<0<<endl;
    else
    cout<<mn/2 + 1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
