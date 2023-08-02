#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    int pos=0, neg=0, zero=0;
    for(int i=0;i<n; i++)
    {
        cin>>v[i];
        if(v[i]>0) pos++;
        else if(v[i]<0) neg++;
        else zero++;
    }
    vector<pair<int, int> > ans;
    if((pos+zero)==n){
        for(int i=1; i<n; i++)
        {
            ans.push_back({i, i-1});
            v[i]+=v[i-1];
        }
    }
    else if((neg+zero)==n){
        for(int i=n-2; i>=0; i--)
        {
            ans.push_back({i, i+1});
            v[i]+=v[i+1];
        }
    }
    else{
        int mx=-100, ind=0;
        for(int i=0;i<n;i++){
            if(mx<v[i]){
                mx = v[i];
                ind = i;
            }
        }
       for(int i=0; i<5; i++)
       {
           ans.push_back({ind, ind});
           mx+=mx;
       }
       ans.push_back({0, ind});
       v[0]+=mx;
       for(int i=1; i<n; i++){
        while(v[i]<v[i-1]){
            v[i]+=v[i-1];
            ans.push_back({i, i-1});
        }
       }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i.first+1<<" "<<i.second+1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
