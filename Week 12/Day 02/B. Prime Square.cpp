#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve()
{
    int n; cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) a[i][j] = 1;
    }
    if(is_prime(n)){
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        return;
    }
    int tem = n;
    while(is_prime(tem)==false||is_prime(tem-n+1)==true){
        tem++;
    }
    tem-=(n-1);
    for(int i=0; i<n; i++) {
        a[i][i] = tem;
    }
    for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
