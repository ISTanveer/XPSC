#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n);

    vector<pair<int, int> > res;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.rbegin(), v.rend());
    for(int i=0; i<n; i++){
        int j=i+1;
        while(j<n&&v[i]==v[j]){
            j++;
        }
        res.push_back({v[i], j-i});
        i = j-1;
    }
    int ans = res[0].second;
    for(int i=1; i<res.size(); i++){
        if(res[i].first+1 == res[i-1].first){
            ans += max(0, (res[i].second - res[i-1].second));
        }
        else{
            ans += res[i].second;
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
