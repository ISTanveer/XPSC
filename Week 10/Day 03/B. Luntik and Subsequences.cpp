#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    long long sum=0;
    int one=0, zero=0;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        sum+=a;
        if(a==0)zero++;
        if(a==1)one++;
    }
    long long ans = pow(2, zero);
    cout<<one*ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
