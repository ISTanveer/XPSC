#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    string s1 = s;
    reverse(s1.begin(), s1. end());
    cout<<s1+s<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
