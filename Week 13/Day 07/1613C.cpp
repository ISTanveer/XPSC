//https://codeforces.com/problemset/problem/1613/C
#include<bits/stdc++.h>
using namespace std;
long long damage(long long n, vector<long long> v)
{
    long long cnt = 0;
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i]+n-1>=v[i+1]){
            cnt+= (v[i+1]-v[i]);
        }
        else{
            cnt+= n;
        }
    }
    cnt+=n; 
    return cnt;
}

void solve()
{
    long long n, h; cin>>n>>h;
    vector<long long> v(n); for(int i=0; i<n; i++) cin>>v[i];
    long long ans = 1e18;
    long long l=0, r = 1e18, mid;
    while(l<r-1)
    {
        mid = l+(r-l)/2; //cout<<"Mid = "<<mid<<"\n";
        long long tem = damage(mid, v); //cout<<"TEM = "<<tem<<"\n";
        if(tem>h){
            ans = min(ans, mid);
            r = mid;
        }
        else if(tem<h){
            l = mid;
        }
        else{
            ans = min(ans, mid);
            break;
        }
    } 
    cout<<ans<<"\n";
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t; cin>>t; while(t--)
    solve();
}