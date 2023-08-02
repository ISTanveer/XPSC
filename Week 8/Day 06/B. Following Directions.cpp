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
        string str; cin>>str;
        int a = 0, b = 0;
        int cnt = 0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='U') b++;
            else if(str[i]=='D') b--;
            else if(str[i]=='L') a--;
            else if(str[i]=='R') a++;
            if(a==1&&b==1)
            {
                cnt = 1;
                break;
            }
        }
        if(cnt==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
