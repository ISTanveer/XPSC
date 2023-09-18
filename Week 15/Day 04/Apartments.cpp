#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k; cin>>n>>m>>k;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    vector<int> a(m); for(int i=0; i<m; i++) cin>>a[i];
    sort(a.begin(), a.end());
    int cnt=0, i=0, j=0;

    while(i<n&&j<m)
    {
        while(j<m&&v[i]-k>a[j]) j++;
        if(abs(a[j]-v[i])<=k){
            cnt++, i++, j++;
        }
        else i++;
    }
    cout<<cnt<<endl;
}

int main()
{
    solve();
    return 0;
}
