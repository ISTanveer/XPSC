#include<bits/stdc++.h>
using namespace std;
long long cnt(vector<int> v)
{
    long long z=0, ans=0;
    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i]==0)z++;
        else ans+=z;
    }
    return ans;
}
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    long long ans = cnt(v);

    for(int i=0; i<n; i++)
    {
        if(v[i]==0){
            v[i] = 1;
            ans = max(ans, cnt(v));
            v[i] = 0; break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(v[i]==1){
            v[i] = 0;
            ans = max(ans, cnt(v));
            v[i] = 1; break;
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
