#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    char last = '0';
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='?'){
            s[i] = last;
        }
        else last = s[i];
    }
    cout<<s<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
