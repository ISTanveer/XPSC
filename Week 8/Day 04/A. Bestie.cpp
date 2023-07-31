#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    bool flag = false;
    int op=0;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        if(v[i]==1) flag = true;


    }
    if(flag) {
        cout<<0<<endl;
        return;
    }
    int g = v[1];
    for(int i=2; i<=n; i++) g = __gcd(g, v[i]);

    if(g==1) {
        cout<<0<<endl;
        return;
    }
    int ans = n;
    for(int i=n; i>=1; i--)
    {
        int rem = __gcd(v[i], i);
        for(int j=1; j<=n; j++)
        {
            if(i!=j) rem = __gcd(rem, v[j]);
        }
        if(rem==1){
            ans = min(ans, (n-i+1));
        }
    }
    for(int i=n; i>=1; i--)
        {
            v[i] = __gcd(v[i], i);
            int rem = v[i];
            for(int j=1; j<=n; j++)
            {
                rem = __gcd(rem, v[j]);
            }
            op += (n-i+1);
            if(rem==1){
                ans = min(ans, op);
                cout<<ans<<endl;
                return;
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
