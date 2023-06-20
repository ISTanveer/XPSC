#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    string tem = "MEOW";
    for(int i=0; i<n; i++){
        if(s[i]>96){
            s[i] -=32;
        }
    }
    string res = "";
    for(int i=1; i<n; i++){
        if(s[i]!=s[i-1]){
            res +=s[i-1];
        }
    }
    res +=s[n-1];

    if(res==tem ) cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
   int t; cin>>t; while(t--)
    solve();
    return 0;
}
