#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    long long sum=0;
    int i=n-1;
    while(i>=0){
        if(s[i]=='1'){
            int mn = v[i];
            while(i>=0){
                if(s[i]=='1'){
                    mn = min(mn, v[i]);
                    sum+=v[i];
                }
                else{
                    mn = min(mn, v[i]);
                    sum+=v[i];
                    sum-=mn;
                    break;
                }
                i--;
            }
        }
        i--;
    }
    cout<<sum<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
