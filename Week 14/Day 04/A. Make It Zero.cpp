#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int eq = 1, zero = 0;
    vector<int> v(n); for(int i=0; i<n; i++) {
    cin>>v[i];
    if(v[i]==0) zero++;

    }
    if(zero==n) {
        cout<<0<<endl; return;
    }
    vector<pair<int, int> > ans;

    if(n%2==0)
    {
        ans.push_back({1, n});
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum^=v[i];
        }
        if(sum!=0){
            ans.push_back({1, n});
        }
    }
    else{

        ans.push_back({1, 2});
        if((v[0]^v[1])!=0)
        {
            ans.push_back({1, 2});
        }
        v[0] = v[1] = 0;
        ans.push_back({2, n});
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum^=v[i];
        }
        if(sum!=0){
            ans.push_back({2, n});
        }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i.first<<" "<<i.second<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
