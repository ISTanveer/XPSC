#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; vector<int> v(101, 0);
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        v[a]++;
    }
    int mx = -1;
    for(int i=0; i<101; i++)
    {
        mx = max(mx, v[i]);
    }
    cout<<mx<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
