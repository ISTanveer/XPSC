#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+2; j<n; j++){
            if(v[i]==v[j]){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
