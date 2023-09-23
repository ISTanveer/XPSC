#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    vector<pair<int, int> > tt;
    int last = 0;
    for(int i=0; i<n; i++)
    {
        tt.push_back({last+1, last+v[i]});
        last = tt.back().second;
    }
    //for(auto [x, y]:tt) cout<<x<<" "<<y<<endl;
    int q; cin>>q;
    for(int i=0; i<q; i++){
            int a; cin>>a;
            int low = 0, high = n-1;
            while(low<=high)
            {
                int mid = low+(high-low)/2;
                //cout<<tt[mid].first<<" "<<tt[mid].second<<endl;
                if(tt[mid].first<=a&&tt[mid].second>=a){
                    cout<<mid+1<<endl; break;
                }
                if(tt[mid].first>a){
                    high = mid-1;
                }
                else if(tt[mid].second<a){
                    low = mid+1;
                }

            }
    }
}

int main()
{
    solve();
    return 0;
}
