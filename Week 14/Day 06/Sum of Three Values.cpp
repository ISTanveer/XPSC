#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x; cin>>n>>x;
    vector<pair<long long, int> > v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i].first; v[i].second = i;
    }
    sort(v.begin(), v.end());
    int d;
    for(int i=0; i<n-2; i++)
    {
        d = x-v[i].first;
        for(int j=i+1, k=n-1; j<k; )
        {
            int dd = d;
            while((dd-v[j].first<=v[k].first)&&(j<k)){
                if(j<k&&(dd-v[j].first==v[k].first)){
                    cout<<v[i].second+1<<" "<<v[j].second+1<<" "<<v[k].second+1<<"\n";
                    return;
                }
                k--;
            }
            j++;
        }
    }
    cout<<"IMPOSSIBLE\n";
}
int main()
{
    solve();
    return 0;
}
