#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    stack<char> stk;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A'){
            stk.push(s[i]);
            continue;
        }
        if(s[i]=='B'){
            if(stk.empty()){
                stk.push(s[i]);
                continue;
            }
            stk.pop();
        }
    }
    cout<<stk.size()<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
