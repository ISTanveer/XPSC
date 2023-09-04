#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m; cin>>n>>m;
    vector<string> v(n); for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<n; i++)
    {
        int tem = 0;
        for(int j=0;j<m;j++){
            if(v[i][j]=='U'||v[i][j]=='D') tem++;
        }
        if(tem%2){
            cout<<-1<<'\n'; return;
        }
    }

    for(int i=0; i<m; i++)
    {
        int tem = 0;
        for(int j=0;j<n;j++){
            if(v[j][i]=='L'||v[j][i]=='R') tem++;
        }
        if(tem%2){
            cout<<-1<<'\n'; return;
        }
    }

    vector<string> ans = v;
    vector<vector<bool> > visit(n, vector<bool>(m, false));

    for(int i=0; i<n; i++)
    {
        int flag = 0;
        for(int j=0;j<m;j++)
        {
            if(visit[i][j]) continue;
            if(v[i][j]=='U'){
                visit[i][j] = true;
                visit[i+1][j] = true;
                if(flag==0){
                    ans[i][j] = 'W'; ans[i+1][j] = 'B';
                }
                else{
                    ans[i][j] = 'B'; ans[i+1][j] = 'W';
                }
                flag^=1;
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        int flag = 0;
        for(int j=0;j<n;j++)
        {
            if(visit[j][i]) continue;
            if(v[j][i]=='L'){
                visit[j][i] = true;
                visit[j][i+1] = true;
                if(flag==0){
                    ans[j][i] = 'W'; ans[j][i+1] = 'B';
                }
                else{
                    ans[j][i] = 'B'; ans[j][i+1] = 'W';
                }
                flag^=1;
            }
        }
    }
    for(auto i:ans) cout<<i<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
