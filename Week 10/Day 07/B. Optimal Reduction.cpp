#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int in = 0, de = 0, cnt = 0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i]<v[i+1]){
            if(de==0){
                in = 1;
            }
            else{
                cnt = 1; break;
            }
        }
        else if(v[i]>v[i+1]){
            de = 1;
        }
    }
    if(cnt) cout<<"NO\n";
    else cout<<"YES\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
