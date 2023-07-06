#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    int ans = (s[0]-'a');
    ans *= 25;
    if(s[1]>s[0]) {
        int tem = s[1]-'a';
        ans +=tem;
    }
    else{
        int tem = s[1] - 'a';
        tem++;
        ans +=tem;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t ; while(t--) solve();
    return 0;
}
