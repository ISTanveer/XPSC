#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int ans = 1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(abs(v[i]-v[j])<=1) {
                ans++;
                cout<<ans<<endl;
                return;
            }
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
