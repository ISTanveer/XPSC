#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b; cin>>n>>a>>b;
    string ans = "";
    string tem = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    while(b--){
        ans += tem[i];
        i++;
    }
    string res = "";
    while(res.size()<n){
        res +=ans;
    }
    for(int i=0; i<n; i++){
        cout<<res[i];
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
