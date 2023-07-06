#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    string s; cin>>s;
    int b = 0, w = 0, l = 0;
    int ans = 1e9;
    for(int i=0; i<n; i++)
    {
        l++;
        if(s[i]=='B') b++;
        else w++;

        if(l==k){

            if(s[i-k]=='B') b--;
            if(s[i-k]=='W') w--;
            ans = min(ans, w);
            l--;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
