#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int q; cin>>q;
    for(int i=0; i<q; i++){
        int x; cin>>x;
        int lb = -1, ub = -1;
        int l = 0, h=n-1;
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(v[mid]>x){
                ub = mid;
                h = mid-1;
            }
            //else if(v[mid]==x) h = mid-1;
            else l = mid+1;
        }
        l = 0, h = n-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(v[mid]>=x)
            {
                h = mid-1;
            }
            else{
                lb = mid;
                l = mid+1;
            }
        }
        //cout<<lb<<" "<<ub<<endl;
        if(lb==-1) cout<<"X ";
        else cout<<v[lb]<<" ";
        if(ub==-1) cout<<"X\n";
        else cout<<v[ub]<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
