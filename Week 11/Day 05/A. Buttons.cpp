#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c; cin>>a>>b>>c;
    a += (c/2);
    b += (c/2);
    c %=2;
    if(a>=b) a+=c;
    else b+=c;
    if(a>b) cout<<"First\n";
    else cout<<"Second\n";


}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
