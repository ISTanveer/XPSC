#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    char a[n][n];
    int p[n][n], q[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>a[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            p[i][j] = 0;
            q[i][j] = 0;
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++)
    {
        vector<int> pre(n, 0);
        for(int j=0; j<n; j++)
        {
            pre[j] = p[i][j]+q[i][j];
            if(j-1>=0) pre[j] += pre[j-1];
        }
        for(int j=0; j<n; j++)
        {
            char ch = a[i][j];
            if(pre[j]%2){
                if(ch=='1') ch = '0';
                else ch = '1';
            }
            if(ch=='1'){
                ans++;
                p[i][j]++;
                if(j+1<n) q[i][j+1]--;
            }
        }

        for(int j=0; j<n; j++)
        {
            if(i+1>=n) break;
            if(j-1>=0){
                p[i+1][j-1] +=p[i][j];
            } else p[i+1][j] +=p[i][j];

            if(j+1<n) q[i+1][j+1] += q[i][j];
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
