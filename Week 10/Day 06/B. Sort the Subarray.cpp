#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; vector<int> v(n); for(int i=0; i<n ;i++) cin>>v[i];
    vector<int> s(n); for(int i=0; i<n; i++) cin>>s[i];
    int r = -1, l = -1;
    for(int i=0; i<n; i++)
    {
        if(v[i]!=s[i]){
            r = i;
            if(l==-1) l = i;
        }
    }
    while(l>0&&s[l]>=s[l-1]) l--;
    while(r<n-1&&s[r]<=s[r+1]) r++;

    cout<<l+1<<" "<<r+1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
