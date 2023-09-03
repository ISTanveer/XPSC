#include<bits/stdc++.h>
using namespace std;

bool is_prime(int x)
{
    for(int i=2; i*i<=x; i++){
        if(x%i==0) return false;
    }
    return true;
}
void solve()
{
    vector<string> p;
    for(int i=99; i>10; i--)
    {
        if(is_prime(i)) {
            string t = to_string(i);
            p.push_back(t);
        }
    }
    string s; cin>>s;
    for(int i=0; i<p.size(); i++)
    {
        for(int j=0; j<s.size()-1; j++)
        {
            if(p[i][0]==s[j]){
                for(int k=j+1; k<s.size(); k++){
                    if(s[k]==p[i][1]){
                        cout<<p[i]<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<-1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
