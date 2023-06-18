#include<bits/stdc++.h>
using namespace std;

void solve(){
string tes = "314159265358979323846264338327";
string s; cin>>s;
int cnt = 0;
for(int i=0; i<s.size(); i++){
    if(s[i]==tes[i]) cnt++;
    else break;
}
cout<<cnt<<endl;

}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
