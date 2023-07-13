#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int mx = -1;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        mx = max(mx, v[i]);
    }
    int ans = -1;
    for(int i=0; i<n; i++){
        if(v[i]==mx){
            if(i>0&&v[i-1]!=mx) ans = i+1;
            if(i<n-1&&v[i+1]!=mx) ans = i+1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
