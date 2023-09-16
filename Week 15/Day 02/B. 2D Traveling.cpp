#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k, a, b;
    cin>>n>>k>>a>>b;
    vector<pair<long long, long long>> v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
//    if(b<=k){
//        cout<<0<<endl;
//    }
//    else{
        long long ans = abs(v[a].first-v[b].first) + abs(v[a].second-v[b].second);
        long long t1 = 1e18, t2 = 1e18;
        for(int i=1; i<=k; i++)
        {
            long long tem1 = (abs(v[i].first-v[a].first)+ abs(v[i].second-v[a].second));
            t1 = min(t1, tem1); //cout<<t1<<endl;
            long long tem2 = (abs(v[i].first-v[b].first) + abs(v[i].second-v[b].second));
            t2 = min(t2, tem2); //cout<<t2<<endl;
        }
        cout<<min(ans, (t1+t2))<<endl;
//    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
