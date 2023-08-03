#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s; cin>>s;
        list<char> str;
        for(int i=0; i<s.size(); i++)
        {
            str.push_back(s[i]);
        }
        for(int i=0, j = s.size()-1; i<j; i++, j--)
        {
            if(s[i]=='0'&&s[j]=='1')
            {
                str.pop_front();
                str.pop_back();
            }
            else if(s[i]=='1'&&s[j]=='0')
            {
                str.pop_front();
                str.pop_back();
            }
            else break;
        }
        cout<<str.size()<<endl;
}
}
