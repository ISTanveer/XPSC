#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e18+7;
long long check(vector<long long> &v, long long mid)
{
    long long ans=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]<mid){
            ans +=(mid-v[i]);
            ans%=mod;
        }
    }
    return ans;
}
void solve()
{
    long long n, k, ans; cin>>n>>k;
    vector<long long> v(n); for(int i=0; i<n; i++) cin>>v[i];
    long long low=1, high=1e18;
    while(low<=high)
    {
        long long mid = low+(high-low)/2;
        if(check(v, mid)<=k){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
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
