#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin>>a>>b;
    int rem = sqrt(a);
    int cnt=0, ans=1e9;
    for(int i=0; i*i<=a; i++)
    {
        int tem = a, c = i;
        if(i==0&&b==1)
        {
            continue;
        }
        while(tem!=0)
        {
            tem/=(b+i);
            c++;
        }
        ans = min(ans, c);
        cnt++;
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
