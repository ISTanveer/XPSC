#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, s;cin>>n>>s;

    long long ans=0, l=0, r=n, cnt=0;
    while(l<=r){
        long long mid = l+(r-l)/2;
        string t = to_string(mid);
        long long sum=0;
        for(int i=0; i<t.size(); i++) sum+=(t[i]-'0');
        if(mid-sum>=s){
            ans =  n-mid+1;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}
