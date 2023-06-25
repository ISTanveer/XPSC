#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int a = n, cnt = 0;
    while(1)
    {
        a /=10;
        if(a==0) break;
        cnt++;
    }
    int ans = n - pow(10, cnt);
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
