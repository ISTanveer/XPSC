#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k ; cin>>n>>k;
    string s; cin>>s;
    vector<int> cap(26, 0), sml(26, 0);
    for(int i=0; i<n; i++){
        if(s[i]>96){
            sml[s[i]-'a']++;
        }
        else {
            cap[s[i]-'A']++;
        }
    }
    int ans = 0;
    for(int i=0; i<26; i++){
        if(sml[i]>0&&cap[i]>0){
            if(cap[i]>sml[i]){
            cap[i] -=sml[i];
            ans += sml[i];
            sml[i] = 0;
        }
        else{
            sml[i] -=cap[i];
            ans +=cap[i];
            cap[i] = 0;
        }
        }
    }
    while(k){
        int cnt = 0;
        for(int i=0; i<26; i++){
            if(cap[i]>1&&k>0){
                ans++;
                k--;
                cap[i] -=2;
            }
            if(sml[i]>1&&k>0){
                ans++;
                k--;
                sml[i] -=2;
            }
            if(cap[i]<=1) cnt++;
            if(sml[i]<=1) cnt++;
            if(k==0) break;
        }
      if(cnt==52) break;
    }
    cout<<ans<<endl;

}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
