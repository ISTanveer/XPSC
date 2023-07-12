#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q; cin>>n>>q;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    vector<pair<int, int>> a;
    for(int i=0; i<q; i++){
        int x ; cin>>x;
        a.push_back({x, i});
    }
    sort(a.begin(), a.end());
    vector<long long> ans(q, 0);
    long long sum = 0, j=0;
    for(int i=0; i<q; i++){
        while(j<n){
            if(v[j]<=a[i].first){
                sum +=v[j];
                j++;
            }
            else break;
        }
        ans[a[i].second] = sum;
    }
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
