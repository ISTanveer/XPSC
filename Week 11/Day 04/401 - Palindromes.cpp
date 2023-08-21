#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    while(cin>>s)
    {
        bool pal=false, mir=false;
        string tem = s;
        reverse(tem.begin(), tem.end());
        if(tem==s)
        {
            pal = true;
        }
        string t = "";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='B'||s[i]=='C'||s[i]=='D'||s[i]=='F'||s[i]=='G'||s[i]=='K'||s[i]=='N'||s[i]=='P'||s[i]=='Q'||
                    s[i]=='R'||s[i]=='4'||s[i]=='6'||s[i]=='7'||s[i]=='9')
            {
                mir = false;
                break;
            }
            else if(s[i]=='E') t+="3";
            else if(s[i]=='J') t+="L";
            else if(s[i]=='L') t+="J";
            else if(s[i]=='S') t+="2";
            else if(s[i]=='Z') t+="5";
            else if(s[i]=='2') t+="S";
            else if(s[i]=='3') t+="E";
            else if(s[i]=='5') t+="Z";
            else t+=s[i];
        }
        // cout<<t<<endl;
        for(int i=0, j=s.size()-1; i<s.size(); i++, j--)
        {
            if(s[i]==t[j]) mir = true;
            else
            {
                mir = false;
                break;
            }
        }
        if(mir&&pal) cout<<s<<" -- is a mirrored palindrome.\n\n";
        else if(pal&&!mir) cout<<s<<" -- is a regular palindrome.\n\n";
        else if(!pal&&mir) cout<<s<<" -- is a mirrored string.\n\n";
        else cout<<s<<" -- is not a palindrome.\n\n";
    }
    return 0;
}
