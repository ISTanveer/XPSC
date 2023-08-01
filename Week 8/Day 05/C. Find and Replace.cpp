#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        char k = '0';
        for(int i=0; i<n; i++)
        {
           if(s[i]<123&&s[i]>96)
           {
            char tes = s[i];
           if(s[i+1]=='0'||s[i-1]=='0') k = '1';
           else k = '0';
           for(int j=0; j<n; j++)
           {
               if(tes==s[j]) s[j] = k;
           }
           }
        }
        int cnt = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==s[i+1]) break;
            else cnt++;
        }
        if(cnt==n) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
