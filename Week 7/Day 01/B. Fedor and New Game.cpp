#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m , k;
    cin>>n>>m>>k;
    vector<int> v(m+1);
    for(int i=0; i<=m; i++) cin>>v[i];
    int cnt = 0;
    for(int i=0; i<m; i++){
        int ans = v[i]^v[m];
        if(__builtin_popcount(ans)<=k) cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    solve();
    return 0;
}
