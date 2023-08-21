#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    for(int cnt=1; cnt<=1000; cnt++)
    {
        ll tem = n;
        vector<int> v;
        while(tem!=0)
        {
            v.push_back(tem%10);
            tem/=10;
        }
        ll sz = v.size();
        ll power = pow(10, sz-1);
        ll r=0;
        for(int i=0; i<sz; i++)
        {
            r +=(power*v[i]);
            power/=10;
        }
        ll ans = n+r;
        string s1 = to_string(ans);
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        if(s1==s2)
        {
            cout<<cnt<<" "<<ans<<endl;
            return;
        }
        n = ans;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
