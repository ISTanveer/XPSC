#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long sum=0;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    n = unique(v.begin(), v.end())-v.begin();
    int ans = n;
    for(int i=1; i<n-1; i++)
    {
        if(v[i-1]<v[i]&&v[i]<v[i+1]) ans--;
        if(v[i-1]>v[i]&&v[i]>v[i+1]) ans--;
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
