#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    int mx = INT_MIN;
    vector<int> tem;
    for(int i=0; i<n; i++)
    {
        tem.push_back(a[i]-b[i]);
        mx = max(mx, a[i]-b[i]);
    }
    int cnt = 0;
    for(auto i:tem) if(mx==i) cnt++;
    cout<<cnt<<endl;
    for(int i=0; i<n; i++) if(mx==tem[i]) cout<<i+1<<" ";
    cout<<endl;
}

int main()
{

    int t; cin>>t; while(t--)
    solve();
    return 0;
}
