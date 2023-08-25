#include<bits/stdc++.h>
using namespace std;
bool prime(long long n){
//if(n==1) return true;
for(long long j=2; j*j<=n; j++)
{
    if(n%j==0) return false;
}
return true;
}
void solve()
{
    long long n; cin>>n;
    if(prime(n)){
        cout<<1<<endl;
        return;
    }
    if(n&1){
        if(prime(n-2)){
            cout<<2<<endl;
        }
        else cout<<3<<endl;
    }
    else cout<<2<<endl;
}

int main()
{
    solve();
    return 0;
}
