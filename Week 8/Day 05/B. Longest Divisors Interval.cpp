#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n; cin>>n;
    //int ans=0, cnt=0;
    long long i=1;
    while(n%i==0){
        i++;
    }
    cout<<i-1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
