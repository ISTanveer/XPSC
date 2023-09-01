#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string t,s; cin>>t>>s;
    int i = 0, j = 0, tem1 = 1, tem2 = 1;
    while(i<t.size())
    {
        if(t[i]==t[i+1]){
            tem1++; i++;
        }
        else{
            if(t[i]==s[j]){
                while(j<s.size())
                {
                    if(s[j]==s[j+1]){
                        tem2++; j++;
                    }
                    else{
                        if(tem1>tem2){
                            cout<<"NO\n"; return;
                        } //cout<<tem1<<" "<<tem2<<endl;
                        tem1 = 1;
                        tem2 = 1;
                        i++; j++; break;
                    }
                }
            }
            else{
                cout<<"NO\n"; return;
            }
        }
    }
    if(j<s.size()){
        cout<<"NO\n"; return;
    }
    cout<<"YES\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}

/*
hhelloo
hhheeelllooo
*/
