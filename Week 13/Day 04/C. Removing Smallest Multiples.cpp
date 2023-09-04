#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    s = "!"+ s;
    vector<int> visit(n+1, 0);
    for(int i=1; i<=n; i++){
        if(s[i]=='1') visit[i] = 2;
    }
    long long ans = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j+=i)
        {
            if(visit[j]==0)
            {
                visit[j] = 1;
                ans+=i;
            }
            else if(visit[j]==2) break;
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
