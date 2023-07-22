#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int ans = (n*(n+1))/2;
    int rem = ans%n;
    cout<<rem+1<<" ";
    for(int i=2; i<=n; i++) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
