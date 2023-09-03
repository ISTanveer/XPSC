#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a, b; cin>>a>>b;
    if(a==b) {
        cout<<"YES\n";
        return;
    }
    bool flag = true;
    for(int i=0; i<a.size()-1; i++)
    {
        if(a[i]=='0'&&b[i]=='0'&&a[i+1]=='1'&&b[i+1]=='1'){
            cout<<"YES\n";
            return;
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

/*
0100101
0011101
*/
