#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    vector<int> ans(n+1, 0);
    int mil=0, omil=0;
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        if(s[i]==s[j]) mil++;
        else omil++;
    }
    if(n%2)
    {
        while(1)
        {
            ans[omil] = 1; ans[omil+1] = 1; omil+=2;
            if(mil==0) break; mil--;
        }
    }
    else{
        while(1)
        {
            ans[omil] = 1; omil+=2;
            if(mil==0) break; mil--;
        }
    }
    for(auto i:ans) cout<<i;
    cout<<'\n';
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
