#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    int z = s.size()-1;
    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i]=='0') z = i;
    }
    int cnt =0;
    for(int i=z; i>=0; i--)
    {
        cnt++;
        if(s[i]=='1') break;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
