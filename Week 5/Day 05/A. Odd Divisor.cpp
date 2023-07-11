#include<bits/stdc++.h>
using namespace std;
void solve(){
long long n; cin>>n;
bool flag = false;
if(n%2!=0) {
    cout<<"YES"<<endl;
    return;
}
if(n&(n-1)) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
