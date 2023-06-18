#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<long long> pos[n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-1; j++){
            int a; cin>>a;
            pos[a].push_back(j);
        }
    }
    for(int i=1; i<=n; i++){
        sort(pos[i].begin(), pos[i].end());
    }
    vector<int> ans(n+1, 0);
    for(int i=1; i<=n; i++){
        if(pos[i][n-2]==(n-1)){
            if(pos[i][0]==(n-1)) ans[n] = i;
            else ans[n-1] = i;
         }
         else ans[pos[i][n-2]] = i;
    }
    for(int i=1; i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
