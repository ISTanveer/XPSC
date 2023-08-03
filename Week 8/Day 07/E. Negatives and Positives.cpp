#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++)
    {
        if(v[i]<=0&&v[i+1]<=0){
            v[i] = abs(v[i]);
            v[i+1] = abs(v[i+1]);
        }
        if(v[i]>0&&v[i+1]<=0){
            if(abs(v[i])<abs(v[i+1])){
                v[i] = -v[i];
                v[i+1] = abs(v[i+1]);
            }
        }
        if(v[i]<0&&v[i+1]>=0){
            if(abs(v[i])>abs(v[i+1])){
                v[i] = abs(v[i]);
                v[i+1] = -v[i+1];
            }
        }
    }
    long long sum=0;
    for(int i=0; i<n; i++) {
        //cout<<v[i]<<" ";
        sum+=v[i];
    }
    cout<<sum<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
