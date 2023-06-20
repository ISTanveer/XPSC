#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    int a = s[0]-'0';
    int b = s[2]-'0';
    cout<<a+b<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
        solve();
    return 0;
}
