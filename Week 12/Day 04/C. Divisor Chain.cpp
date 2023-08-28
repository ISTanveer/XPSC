#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x; cin>>x;
    vector<int> ans;
    ans.push_back(x);
    int i=0, ind;
    while(1)
    {
        if((x>>i)&1){
            if(x==(1<<i)){
                ind = i;
                break;
            }
            x-=(1<<i);
            ans.push_back(x);
        }
        i++;
    }
    while(ind){
        x-=(1<<(ind-1));
        ans.push_back(x);
        ind--;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i<<" ";
    cout<<'\n';
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
