#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int tem; cin>>tem;
        int l=0, h = v.size()-1, ans = -1, mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(v[mid]>tem){
                ans = mid;
                h = mid-1;
            }
            else l=mid+1;
        }
        if(ans==-1) v.push_back(tem);
        else {
            v[ans] = tem;
            //cout<<v[ans]<<" "<<tem<<endl;
        }
        //for(auto i:v) cout<<i<<" "; cout<<'\n';
    }
    cout<<v.size()<<endl;
}

int main()
{
    solve();
    return 0;
}
