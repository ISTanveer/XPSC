#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<char> ans;
        int cnt=0;
        char t=s[0];
        for(int i=0; i<n; i++)
        {
            if(s[i]==t) cnt++;
            else
            {
                if(cnt==1)
                {
                    ans.push_back(t);
                    t = s[i];
                }
                else if(cnt==2)
                {
                    ans.push_back(t);
                    ans.push_back(t);
                    t = s[i];
                    cnt=1;
                }
            }
            if(cnt==3) cnt=1;
        }
        if(cnt==1)
        {
            ans.push_back(t);
        }
        else if(cnt==2)
        {
            ans.push_back(t);
            ans.push_back(t);
        }
        for(auto i:ans) cout<<i;
        cout<<endl;
    }
    return 0;
}

