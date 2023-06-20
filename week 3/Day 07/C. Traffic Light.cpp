#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    char c; cin>>c;
    string s; cin>>s;
    int ans = 0;
    vector<int> post(n+1, -1);

    for(int i = n-1; i>=0; i--){
        if(s[i]=='g') post[i] = i;
        else post[i] = post[i+1];
    }
    for(int i=0; i<n; i++){
        if(s[i]==c){
            if(post[i]==-1){
                ans = max(ans, n-i+post[0]);
            }
            else ans = max(ans, post[i]-i);
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
