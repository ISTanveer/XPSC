#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    int n = s.size();
    if(n%2){
        cout<<"NO\n";
        return;
    }
    int i=0, j=n/2;
    while(j<n)
    {
        if(s[i]!=s[j]){
            cout<<"NO\n";
            return;
        }
        i++, j++;
    }
    cout<<"YES\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
