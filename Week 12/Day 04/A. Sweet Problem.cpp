#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a[3]; cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);
    if(a[2]>=a[1]+a[0]){
        cout<<a[1]+a[0]<<endl;
    }else{
        cout<<(a[0]+a[1]+a[2])/2<<endl;
    }
}

int main()
{
    int t; cin>>t;while(t--)
    solve();
    return 0;
}
