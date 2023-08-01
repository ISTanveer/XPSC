#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n, q; cin>>n>>q;
        long long a[n]; for(long long i=0; i<n; i++) cin>>a[i];
        long long ss[n];
        ss[0] = a[0];
        for(long long i=1; i<n; i++)
        {
            ss[i] = a[i] +ss[i-1];
        }
        for(long long j=0; j<q; j++)
        {
            long long l, r, k; cin>>l>>r>>k;
            long long sum = 0;
            if(l>1) sum += ss[l-2];
            sum += (ss[n-1]-ss[r-1]);
            sum += (r-l+1)*k;

            if(sum%2==1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
