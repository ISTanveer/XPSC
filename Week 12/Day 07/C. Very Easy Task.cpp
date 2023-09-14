#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, a, b, res; cin>>n>>a>>b;
    long long ans=0;
    if(a<=b) ans+=a;
    else ans+=b;
    n--;
    if(n==0){
        cout<<ans<<endl; return;
    }
    long long low = 1, high = 1e9, mid;
    while(low<=high)
    {
        mid = low+(high-low)/2;
        long long tem = mid/a + mid/b;
        if(tem>=n){
            res = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    cout<<ans+res<<endl;
}

int main()
{
    solve();
    return 0;
}
