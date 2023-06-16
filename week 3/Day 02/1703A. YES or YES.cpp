#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        bool flag = false;
        if(s[0]=='Y'||s[0]=='y'){
            if(s[1]=='E'||s[1]=='e'){
                if(s[2]=='s'||s[2]=='S') flag = true;
                }
            }

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
}
}
