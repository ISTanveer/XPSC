#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    int mx = 0, l = -1;
    for(int i=0; i<=s.size(); ++i){
        if(s[i]=='R'||i==s.size()){
            mx = max(mx, i-l);
            l = i;
        }
    }
    cout<<mx<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
