#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, l;
        cin>>n>>k>>l;
        vector<int> lan[6];
        for(int i=0; i<n; i++)
        {
            int a, b;
            cin>>a>>b;
            lan[b].push_back(a);
        }
        sort(lan[l].rbegin(), lan[l].rend());
        int ans = 0;
        if(k>lan[l].size())
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0; i<k; i++)
        {
            ans += lan[l][i];
        }
        cout<<ans<<endl;
    }
    return 0;
}

