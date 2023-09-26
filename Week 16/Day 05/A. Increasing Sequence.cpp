
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int cnt=1;
    for(int i=0; i<n; i++)
    {
        if(v[i]==cnt){
            while(v[i]==cnt) cnt++;
            cnt++;
        }
        else cnt++;
    }
    cout<<cnt-1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
