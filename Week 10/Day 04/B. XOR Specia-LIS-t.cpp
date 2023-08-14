#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    if(n%2==0) {
        cout<<"YES\n";
        return;
    }
    bool flag = false;
    for(int i=0; i<n-1; i++){
        if(v[i]>=v[i+1]){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
