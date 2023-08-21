#include<bits/stdc++.h>
using namespace std;
void solve(long long n) //recursive call....
{
    if(n>=10000000){
        solve(n/10000000);
        cout<<" kuti";
        n%=10000000;
    }
    if(n>=100000){
        solve(n/100000);
        cout<<" lakh";
        n%=100000;
    }
    if(n>=1000){
        solve(n/1000);
        cout<<" hajar";
        n%=1000;
    }
    if(n>=100){
        solve(n/100);
        cout<<" shata";
        n%=100;
    }
    if(n) cout<<" "<<n;
}

int main()
{
    long long n;int cs= 1;
    while(cin>>n){
        printf("%4d.", cs);
        if(n==0){
            cout<<" 0";
        }
        solve(n);
        cout<<'\n';
        cs++;
    }
    return 0;
}
