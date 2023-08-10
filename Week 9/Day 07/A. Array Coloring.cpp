#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int odd = 0, even = 0, one = 0;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]%2) odd++;
        else even++;
        if(v[i]==1) one = 1;
    }
    if(odd%2!=0&&odd>0){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
