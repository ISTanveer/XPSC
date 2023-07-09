#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int c1 = 0, c2 = 0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a%2==0) c1++;
        else c2++;
    }
    if(c1>c2) cout<<c2<<endl;
    else cout<<c1<<endl;
}

int main()
{
    solve();
    return 0;
}
