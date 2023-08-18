#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int x = 0;
    while(x!=256){
        vector<int> tem(n);
        for(int i=0; i<n; i++){
            tem[i] = x^v[i];
        }
        int ans = tem[0];
        for(int i=1; i<n; i++) ans^=tem[i];
        if(ans==0){
            cout<<x<<endl;
            return;
        }
        x++;
    }
    cout<<-1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
