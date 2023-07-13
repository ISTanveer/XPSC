#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> cnt(n+1), ind(n+1);
    for(int i=1; i<=n; i++)
    {
        int a; cin>>a;
        cnt[a]++;
        ind[a] = i;
    }
    int ans = -1;
    for(int i=1; i<=n; i++)
    {
        if(cnt[i]==1){
            ans = ind[i];
            break;
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
