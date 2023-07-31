#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+2; j<n-1; j++)
        {
            if(s[i]==s[j]&&s[i+1]==s[j+1]&&(j+1<n)){
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
