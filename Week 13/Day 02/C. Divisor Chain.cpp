#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x; cin>>x;
    vector<int> ans;
    int take = 1;
    while(take<=x)
    {
        ans.push_back(take);
        take *=2;
    }
    take/=2;
    if(x-take>0){
        int dif = x-take;
        for(int i=31; i>=0; i--)
        {
            if(dif&(1<<i)){
                ans.push_back(ans.back()+(1<<i));
            }
        }
    }
    reverse(ans.begin(), ans.end());

    cout<<ans.size()<<'\n';
    for(auto i:ans) cout<<i<<" ";
    cout<<'\n';
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
