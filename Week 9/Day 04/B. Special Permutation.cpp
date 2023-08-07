#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b;
    cin>>n>>a>>b;
    if(a>b)
    {
        if(abs(a-b)!=1)
        {
            cout<<-1<<endl;
            return;
        }
        if(b!=(n/2)){
            cout<<-1<<endl;
            return;
        }
        vector<int> v(n);
        int in = n, de = 1;
        for(int i=0, j = n/2 + 1; j<n; i++, j++)
        {
            v[i] = in;
            v[j] = de;
            in--, de++;
        }
        v[n/2 -1] = a;
        v[n/2] = b;
        for(auto i: v) cout<<i<<" ";
        cout<<endl;
        return;
    }
    else
    {
        int tem = n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            v[i] = tem;
            tem--;
            if(v[i]==a)
            {
                v[i] = b;
                continue;
            }
            if(v[i]==b)
            {
                v[i] = a;
                continue;
            }
        }
        int test1=v[0], test2 = v[n/2];
        for(int i=1, j=n/2+1; j<n; j++, i++)
        {
            test1 = min(test1, v[i]);
            test2 = max(test2, v[j]);
        }
        if(test1==a&&test2==b){
            for(auto i: v) cout<<i<<" ";
            cout<<endl;
            return;
        }
        else cout<<-1<<endl;
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
