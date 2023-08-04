#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q; cin>>n>>q;
    vector<int> v(n+1); for(int i=1; i<=n; i++) cin>>v[i];
    vector<pair<int, int> > qry;
    vector<long long> fq(n+2, 0);
    for(int i=0; i<q; i++)
    {
        int l, r; cin>>l>>r;
        qry.push_back({l,r});
        fq[l]++;
        fq[r+1]--;
    }
    vector<pair<int, long long> > pres;
    long long sum=0;
    for(int i=1; i<=n; i++){
        sum+=fq[i];
        pres.push_back({i, sum});
    }
    sort(pres.begin(), pres.end(), [&](pair<int, long long> x, pair<int, long long> y){
         if(x.second==y.second) return x.first<y.first;
         return x.second>y.second;
         });
    sort(v.rbegin(), v.rend());
    int i=0;
    vector<long long> ans(n+1);
    for(auto [ind, val]:pres){
        ans[ind] = v[i];
        i++;
    }
    sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=ans[i];
        ans[i] = sum;
    }
    long long total=0;
    for(auto [x, y]:qry ){
        total+=ans[y];
        total-=ans[x-1];
    }
    cout<<total<<endl;
}

int main()
{
    solve();
    return 0;
}
