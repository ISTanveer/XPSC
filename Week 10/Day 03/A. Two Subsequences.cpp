#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    char ch = 'z';
    int ind=-1;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]<=ch){
            ch=s[i];
            ind = i;
        }
    }
    cout<<ch<<" ";
    for(int i=0;i<s.size(); i++)
    {
        if(ind==i)continue;
        cout<<s[i];
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
