#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(v[i]==i){
            int j=i+1;
            while(j<=n){
                if(v[j]==j){
                    swap(v[i], v[j]);
                    i=j;
                    break;
                }
                j++;
            }
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
