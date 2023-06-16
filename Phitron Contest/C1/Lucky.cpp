#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int s1 = 0, s2 = 0;
        for(int i=0, j=s.size()-1; i<3; i++, j--){
            s1 += s[i]-'0';
            s2 +=s[j]-'0';
        }
        if(s1==s2) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
