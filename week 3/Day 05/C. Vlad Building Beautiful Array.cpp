#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
void solve()
{
    int n; cin>>n;

    vector<int>v(n); for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    bool flag = true;
    if(v[0]%2==0){
        for(int i=1; i<n; i++){
            if(v[i]%2!=0){
                if((v[i]-v[0])%2!=0){
                    flag = false;
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=1; i<n; i++){
            if(v[i]%2==0){
                if((v[i]-v[0])%2==0){
                    flag = false;
                    break;
                }
            }
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
