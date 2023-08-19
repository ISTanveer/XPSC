#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    vector<int> bit(33, 0);
    for(int j=0; j<33; j++)
    {
        for(int i=0; i<n; i++){
            if(v[i]&(1<<j)) bit[j]++;
        }
    }
    //for(int i=0; i<33; i++) cout<<i<<" "<<bit[i]<<endl;
    for(int i=1; i<=n; i++)
    {
        bool flag = true;
        for(int j=0; j<33; j++){
            if(bit[j]%i!=0){
                flag = false; break;
            }
        }
        if(flag) cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t;while(t--)
    solve();
    return 0;
}
