#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> s(n); for(int i=0;i<n; i++) cin>>s[i];
    int cnt=1;
    for(int i=0; i<n; i++){
        if(s[i]==0&&s[i+1]==0&&i+1<n){
            cout<<-1<<endl;
            return;
        }
        if(s[i]==1&&s[i+1]==1&&i+1<n){
            cnt+=5;
        }
        else if(s[i]==1) cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
