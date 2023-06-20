#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    bool flag = true;

    if(s.size()>1){
    for(int i=1; i<s.size(); i++){
        if((s[i-1]=='Y'&&s[i]=='e')||(s[i-1]=='e'&&s[i]=='s')||(s[i-1]=='s'&&s[i]=='Y')) continue;
        flag = false ;
        break;
    }
    }
    else{
        if(s[0]=='Y'||s[0]=='e'||s[0]=='s') flag = true;
        else flag = false;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
