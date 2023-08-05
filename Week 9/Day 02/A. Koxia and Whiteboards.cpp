#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m; cin>>n>>m;
    vector<long long> a(n), b(m); for(int i=0; i<n; i++) cin>>a[i]; for(int i=0; i<m; i++) cin>>b[i];
    sort(a.begin(), a.end()); //sort(b.rbegin(), b.rend());
    int i=0, j=0;
    while(j<m)
    {
        a[0] = b[j];
         j++;
        sort(a.begin(), a.end());
    }
    long long sum = 0;
    for(i=0; i<n; i++) sum+=a[i];
    cout<<sum<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
