#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    long long sum = 0;
    for(int i=0; i<n; i++) {
        int a; cin>>a;
        sum+=a;
    }
    if(sum>=n) cout<<sum-n<<endl;
    else{
        cout<<1<<endl;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
