#include<bits/stdc++.h>
using namespace std;
long long check(vector<long long> &v, long long mid)
{
    long long ans=0;
    for(int i=0; i<v.size(); i++)
    {
        ans+= min((mid/v[i]),(long long) 1e9);
    }
    return ans;
}
void solve()
{
    long long n, t; cin>>n>>t;
    vector<long long> v(n); for(int i=0; i<n;i++) cin>>v[i];
    long long ans=1e18, low=1, high = 1e18;
    while(low<=high)
    {
        long long mid = low+(high-low)/2;
        if(check(v, mid)>=t){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}
