#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m; cin>>n>>m;
    char gd[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>gd[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=n-2, k=n-1; j>=0; j--){
            if(gd[k][i]=='*'||gd[k][i]=='o'){
                k--;
                //if(k==j) j--;
            }
            else if(gd[k][i]=='.'&&gd[j][i]=='*'){
                swap(gd[k][i], gd[j][i]);
                k--;
            }
            else if(gd[j][i]=='o'){
                k = j;
                k--;
            }
        }
    }
    //cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           cout<<gd[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
