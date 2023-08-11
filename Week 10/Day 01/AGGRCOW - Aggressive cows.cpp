#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, c; cin>>n>>c;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int l = 0, r = v[n-1], ans;
    while(l<=r){
        int mid = l+(r-l)/2;
        int cnt=1, left = 0;
        for(int i=1; i<n; i++)
        {
            if(v[i]-v [left]>=mid){
                cnt++, left = i;
            }
        }
        if(cnt>=c){
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
