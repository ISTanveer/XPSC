#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int ans = -1;
    vector<int> c(1001, -1);
    for(int i=0; i<n; i++){
        c[v[i]] = max(c[v[i]], i+1);
    }
    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            if(c[i]>0&&c[j]>0){
                if(__gcd(i, j)==1){
                    ans = max(ans, c[i]+c[j]);
                }
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
