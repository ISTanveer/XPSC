#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        vector<int>v(n+1);
        v[0] = 1;
        if(s[0]=='<') v[1] = 2;
        else v[1] = 0;
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1]) v[i] = v[i-1] + 1;
            else v[i] = 1;
        }
        sort(v.begin(), v.end());
        int cnt = 1;
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]!=v[i+1]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
