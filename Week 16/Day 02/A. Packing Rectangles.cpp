#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e18 +7;
bool check(long long w, long long h, long long n, long long r){
long long cnt = 0;
long long n1 = r/w, n2 = r/h; cnt = n1*n2;
return cnt>=n;

}
void solve()
{
    long long w, h, n; cin>>w>>h>>n;
    long long low = 0, high=1, ans;
    while(!check(w, h, n, high)) high*=2;
    while(low+1<high)
    {
        long long mid = low+(high-low)/2;
        if(check(w, h, n, mid)) high = mid;
        else low = mid;
    }
    cout<<high<<endl;
}

int main()
{
    solve();
    return 0;
}
