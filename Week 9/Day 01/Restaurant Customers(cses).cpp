#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    map<int, long long> mp;
    for(int i=0; i<n;i++)
    {
        int l, r; cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    long long sum=0, ans=0;
    for(auto [ind, val]:mp)
    {
        sum+=val;
        ans=max(ans, sum);
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}
