#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> cnt(3, 0);
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        cnt[a%3]++;
    }
    int ans = cnt[0];
    int mn = min(cnt[1], cnt[2]);
    ans += mn;
    cnt[1] -=mn;
    cnt[2] -=mn;
    ans += (cnt[1]+cnt[2]) /3;
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
