#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    vector<int> v(n+1, 0);
    for(int i=1; i<=n; i++)
    {
        v[i] = s[i-1] - '0';
    }
    int k = n+1;
    for(int i=n; i>=0; i--)
    {

        if(v[i]==9)
        {
            for(int j=i-1; j>=0; j--)
            {
                if(v[j]<9)
                {
                    v[j]++;
                    k = j+1;
                    i= j+1;
                    break;
                }
            }
        }
        else if(v[i]>=5)
        {
                v[i-1]++;
                k = i;
        }
    }
    bool flag = false;
    for(int i=0; i<k; i++)
    {
        if(!flag&&v[i]>0)
        {
            flag = true;
        }
        if(flag)
        {
            cout<<v[i];
        }
    }
    for(int i=k; i<=n; i++) cout<<0;
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
