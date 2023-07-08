#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    long long k, ans = 1e9 + 9;
    if(n==1) cout<<0<<endl;
    else{

        for(int i=2; i<=100000; i++){
            if(n%i==0){
                k = (n/i) -1 + (i-1);
                ans = min(ans, k);
            }
            else{
                k = (n/i) + (i - 1);
                ans = min(ans, k);
            }
        }
        cout<<ans<<endl;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
