#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    int i=1,  p=n, ll=0;
    for(int j=n; j>=1; j--)
    {
        if(v[j]==v[j-1]&&j>1) continue;
        int fnd = v[j]-ll;
        ll = v[j];
        while(fnd!=0)
        {
            if(v[i]==p) i++;
            else {
                cout<<"NO\n";
                return;
            }
            fnd--;
        }
        p = j-1;
    }
    cout<<"YES\n";

}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
