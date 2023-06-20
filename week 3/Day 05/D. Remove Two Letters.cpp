#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int ans = n-1; //maximum n-1 string possible...
    for(int i=0; i<n-2; i++){
        if(s[i]==s[i+2]) //same value occurs 2 same answer..
        {
            ans--;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
