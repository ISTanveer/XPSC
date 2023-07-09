#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    map<char, int> mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    int l = mp['L'];
    int r = mp['R'];
    int u = mp['U'];
    int d = mp['D'];
    string ans = "";
    if(l>0&&r>0&&u>0&&d>0){
        if(l>r){
            l = r;
            while(r--) ans += "R";
        }
        else {
            r = l;
            while(l--) ans += "L";
        }
        if(u>d){
            u = d;
            while(d--) ans += "D";
        }
        else{
            d = u;
            while(u--) ans += "U";
        }
        if(l>0) while(l--) ans += "L";
        else while(r--) ans += "R";
        if(u>0) while(u--) ans += "U";
        else while(d--) ans += "D";
    }
    else{
        if(l>0&&r>0) {
            ans += "LR";
        }
        if(u>0&&d>0) ans += "UD";
    }
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
