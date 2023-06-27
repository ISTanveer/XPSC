#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    vector<char> ans;
    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='0'){
            int tem = s[i-2] - '0';
            tem *=10;
            tem += (s[i-1]-'0');
            ans.push_back(tem+'a'-1);
            i -=2;
        }
        else{
            int tem = s[i]-'0';
            ans.push_back(tem+'a' -1);
        }
    }
    reverse(ans.begin(), ans.end());
    for(auto i:ans) cout<<i;
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
