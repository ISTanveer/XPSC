#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int a[2][n+1];
    a[0][1] = 2*n;
    a[1][n] = (2*n) - 1;

    int cnt = 1;
    bool flag = false;
    for(int i=1; i<=n; i++){
        if(flag){
            a[0][i] = cnt;
            flag = false;
        }
        else {
            a[1][i] = cnt;
            flag = true;
        }
        cnt++;
    }
    cnt = (2*n) - 2;
    for(int i=3; i<=n; i+=2){
        a[0][i] = cnt;
        a[1][i-1] = cnt-1;
        cnt -=2;
    }

    for(int i=0; i<2; i++){
        for(int j=1; j<=n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
