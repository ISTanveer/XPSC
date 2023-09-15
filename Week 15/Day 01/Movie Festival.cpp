#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<pair<int, int>>v(n);
    for(int i=0; i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(), [&](pair<int, int> x, pair<int, int> y){
         if(x.first==y.first) return x.second<y.second;
         return x.first<y.first;
        });
    int cnt=0, cur=0;
    for(int i=0; i<n; i++)
    {
        if(i==0){
            cnt++;
            cur = v[i].second;
        }
        else{
            if(cur<=v[i].first){
                cnt++; cur = v[i].second;
            }
            else{
                cur = min(cur, v[i].second);
            }
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    solve();
    return 0;
}
