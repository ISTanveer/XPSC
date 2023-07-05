#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int op = 0;
    for(int i= n-2; i>=0; i--)
    {
        if(v[i]>=v[i+1]&& v[i+1]>0) {
            while(v[i]>=v[i+1]){
                v[i] /=2;
                op++;
                if(v[i]==0) break;
            }
        }
    }
    int cnt = 1;
    for(int i=1; i<n; i++)
    {
        if(v[i]>v[i-1]) cnt++;
    }
    if(cnt==n) cout<<op<<endl;
    else cout<<-1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
