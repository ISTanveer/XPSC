#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin>>n>>k;
    int val;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin>>val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    bool flag = true;
    int i=0, j=1;
    while(k>0)
    {
            if(v[i]==j&&i<n)
            {
                j++;
                i++;
            }
        else
        {
            if(k-j>=0)
            {
                v.push_back(j);
                k = k-j;
                j++;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if(flag==false)
    {
        cout<<"NO\n";

    }
    else
    {
        if(k==0)
        {
            sort(v.begin(), v.end());
            j=1;
            for(int i=0; i<v.size(); i++)
            {
                if(v[i]==j)
                {
                    j++;
                }
                else break;
            }
            if(j-1==v.size()) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
