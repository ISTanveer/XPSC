#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    map<char, int> mp;
    vector<char> v(n);
    for(int i=0; i<n; i++)
    {
        mp[s[i]]++;
    }
    if(n%2)
    {
        int cnt=0;
        for(auto m:mp)
        {
            if(m.second%2==1) cnt++;
        }
        if(cnt==1)
        {
            int i=0, j=n-1;
            for(auto m:mp)
            {
                if(m.second%2==0)
                {
                    while(m.second)
                    {
                        v[i] = m.first;
                        v[j] = m.first;
                        i++, j--;
                        m.second-=2;
                    }
                }
                else
                {
                    v[n/2] = m.first;
                    m.second--;
                    while(m.second)
                    {
                        v[i] = m.first;
                        v[j] = m.first;
                        i++, j--;
                        m.second-=2;
                    }
                }
            }
            for(auto i:v) cout<<i; cout<<'\n';
            return;
        }
        cout<<"NO SOLUTION\n";
        return;
    }
    else
    {
        int cnt=0;
        for(auto m:mp)
        {
            if(m.second%2==1)
            {
                cout<<"NO SOLUTION\n";
                return;
            }
        }

        int i=0, j=n-1;
        for(auto m:mp)
        {
            while(m.second){
                v[i] = m.first; v[j] = m.first;
                i++, j--; m.second-=2;
            }
        }
        for(auto i:v) cout<<i; cout<<'\n';
    }
}
int main()
{
    solve();
    return 0;
}
