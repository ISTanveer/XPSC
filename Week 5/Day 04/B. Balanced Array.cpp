#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int dif = n/2;
    if(dif%2==0){
        cout<<"YES"<<endl;
        int tem = n/2;
        int r = 2;
        long long sum = 0;
        while(tem--) {
            cout<<r<<" ";
            sum +=r;
            r +=2;
        }
        tem = n/2;
        r = 1;
        long long s= 0;
        while(tem!=1){
            cout<<r<<" ";
            s +=r;
            r+=2;
            tem--;
        }
        cout<<sum-s<<endl;
    }
    else cout<<"NO"<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
