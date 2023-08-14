#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int mx = -1;

        vector<pair<int, int>> v;
        for(int i=1; i<=n; i++){
            int a; cin>>a;
            v.push_back({i, a});
        }
        long long cnt = 0, res = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i].first+cnt<v[i].second){
                res +=(v[i].second-(v[i].first+cnt));
                cnt += (v[i].second-(v[i].first+cnt));
            }
        }
        cout<<res<<endl;

    }
    return 0;
}
