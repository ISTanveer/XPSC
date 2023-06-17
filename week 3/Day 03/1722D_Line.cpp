#include <bits/stdc++.h>
using namespace std;

void solve(){
int n; cin>>n;
string s; cin>>s;

vector<long long> chan;
long long mn = 0, total = 0;
int l, r;
for(int i=0; i<n; i++){
    l = i;
    r = n-i-1;
    if(s[i]=='L')
    {
        if(r>l){
            mn++;
            chan.push_back(r-l);
            total +=r;
        }
        else{
            total +=l;
        }
    }
    else{
        if(l>r){
            mn++;
            chan.push_back(l-r);
            total +=l;
        }
        else{
            total +=r;
        }
    }
}
vector<long long> ans(n+1);
for(int i=mn; i<=n; i++){
    ans[i] = total;
}
sort(chan.begin(), chan.end());

for(int i=mn-1, j=0; i>=1; i--, j++){
    total -= chan[j];
    ans[i] = total;
}
for(int i=1; i<=n; i++) cout<<ans[i]<<" ";
cout<<endl;
}


int main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
