#include<bits/stdc++.h>
using namespace std;
long long sum(long long a, long long b)
{
    return (a+b)*(b-a+1)/2;
}

long long lcm(long long a, long long b)
{
    long long tem = __gcd(a, b);
    return (a*b)/tem;
}
void solve()
{
    long long n, x, y; cin>>n>>x>>y;
    long long na = n/x;
    long long nb = n/y;
    long long nt = n/lcm(x, y);
    na -=nt; nb -=nt;
    long long ans = sum(n-na+1, n);
    ans-= sum(1, nb);
    cout<<ans<<endl;

}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
