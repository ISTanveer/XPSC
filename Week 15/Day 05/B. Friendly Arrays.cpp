#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m; cin>>n>>m;
    vector<int> a(n); for(int i=0; i<n;i++) cin>>a[i];
    vector<int> b(m); for(int i=0; i<m; i++) cin>>b[i];
    long long mn = 1e18, mx = -1, sum=0;
    for(int i=0; i<n; i++){
        sum^=a[i];
    }

    mn = min(mn, sum);
    mx = max(mx, sum);

    int tt =0;
    for(int i=0; i<m; i++) tt|=b[i];
    vector<int> tem = a;
    for(int i=0; i<n; i++){
       tem[i] |=tt;
    }
    sum=0;
    for(int i=0; i<n; i++) sum ^= tem[i];
    mx = max(mx, sum);
    mn = min(mn, sum);
    cout<<mn<<" "<<mx<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
