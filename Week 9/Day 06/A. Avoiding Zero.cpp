#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int sum=0;
    vector<int> v(n); for(int i=0; i<n; i++) {cin>>v[i]; sum+=v[i];}
    if(sum==0){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    if(sum>0){
        sort(v.rbegin(), v.rend());
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
    }
    else{
        sort(v.begin(), v.end());
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
