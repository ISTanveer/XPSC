#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int one = 0, two = 0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a==1) one++;
        else two++;
    }

    if(one%2==0&&two%2==0) cout<<"YES"<<endl;
    else {
        int rem = two%2;
        if(rem==1&&one%2==0&&one>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
