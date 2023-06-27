#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c; cin>>a>>b>>c;
    int ans1 = a-1;
    int ans2 = abs(c-b);
    ans2 += (c-1);
    if(ans1==ans2) cout<<3<<endl;
    else if(ans1>ans2) cout<<2<<endl;
    else cout<<1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
