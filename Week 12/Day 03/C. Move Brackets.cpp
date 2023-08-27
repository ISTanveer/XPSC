#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    stack<char> stk;

    for(int i=0; i<n; i++)
    {
        if(stk.empty()){
            stk.push(s[i]);
        }
        else{
            char ch = stk.top();
            if(ch=='('&&s[i]==')'){
                stk.pop();
            }
            else stk.push(s[i]);
        }
    }
    cout<<stk.size()/2<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
