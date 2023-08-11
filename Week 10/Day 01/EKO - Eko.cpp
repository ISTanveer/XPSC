#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m; cin>>n>>m;
    vector<int> v(n);
    int mx = -1;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mx = max(mx, v[i]);
    }
    int l = 0, r = mx, ans;
    while(l<=r){
        int mid = l + (r-l)/2;
        long long sum=0;
        for(int i=0; i<n; i++){
            if(v[i]>mid){
                sum+= (v[i]-mid);
            }
        }
        if(sum>=m){
            ans = mid;
            l = mid+1;
        }
        else if(sum<m){
            r = mid-1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}
