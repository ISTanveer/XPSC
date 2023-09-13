#include<bits/stdc++.h>
using namespace std;
const int N=2e5 +5;
long long v[N], n, k;
bool check(long long mid)
{
    long long cnt=1;
    long long sum=0;
    int i=0;
    while(i<n)
    {
        if((sum+v[i])<=mid){
            sum+=v[i]; i++;
        }
        else{
            cnt++; sum=0;
        }
    }
    if(cnt>k) return false;
    return true;
}
void solve()
{
    cin>>n>>k;
    long long sum=0, mx=-1;
    for(int i=0; i<n;i++) {
        cin>>v[i];
        sum+=v[i];
        mx = max(mx, v[i]);
    }

    long long low=mx, high = sum, mid, ans=sum;
    while(low<=high)
    {
        mid = low+(high-low)/2;
        if(check(mid)){
            ans = min(ans, mid);
            high = mid-1;
        }
        else low = mid+1;
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}
