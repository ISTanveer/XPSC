#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> x(n), y(n);
    for(int i=0; i<n; i++) cin>>x[i];
    for(int i=0; i<n; i++) cin>>y[i];
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        v[i] = y[i]-x[i];
        //v[i].second = i;
    }
    sort(v.rbegin(), v.rend());
    int cnt = 0, j=n-1;
    for(int i=0; i<n; i++)
    {
        while(j>i&&v[i]+v[j]<0) j--;
        if(j<=i) break;
        cnt++; j--;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
