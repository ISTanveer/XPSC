#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<(1<<n); i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++){
            if((i&(1<<j))!=0) sum +=v[j];
            else sum -= v[j];
        }
        if(sum%360==0){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main()
{
    solve();
    return 0;
}
