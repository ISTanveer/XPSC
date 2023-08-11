#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    while(cin>>n>>m)
    {
        int mx = -1;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mx = max(mx, v[i]);
        }
        int l = mx, r = INT_MAX;
        int ans;
        while(l<=r)
        {
            int cap = l+(r-l)/2;
            int cnt=1, sum=0;
            for(int i=0; i<n; i++)
            {
                if(sum+v[i]<=cap)
                {
                    sum+=v[i];
                }
                else
                {
                    cnt++;
                    sum = v[i];
                }
            }
            if(cnt<=m)
            {
                ans = cap;
                r = cap-1;
            }
            else
            {
                l = cap+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
