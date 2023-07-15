#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    vector<int> fq(26, 0);
    for(int i=0; i<n; i++) {
        fq[s[i]-'a']++;
    }
    int odd = 0, even=0;
    for(int i=0; i<26; i++){
        if(fq[i]>0&&fq[i]%2==0) even++;
        else if(fq[i]>0&&fq[i]%2==1) odd++;
    }
    if(odd>1){
        cout<<0<<endl;
        return;
    }
    else{
        if(odd==1&&even>0){
            cout<<1<<endl;
        }
        else if(odd==1&&even==0) cout<<2<<endl;
        else if(even>=1&&odd==0) cout<<1<<endl;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
