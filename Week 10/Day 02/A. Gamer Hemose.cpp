#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, h; cin>>n>>h;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    int m = h%(v[0]+v[1]);
    if(m==0)  cout<<((h/(v[0]+v[1])) * 2)<<endl;
    else if(m<=v[0])  cout<<((h/(v[0]+v[1])) * 2) + 1<<endl;
    else cout<<((h/(v[0]+v[1])) * 2) + 2<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
