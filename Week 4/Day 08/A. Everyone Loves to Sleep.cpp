#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, h, m;
        cin>>n>>h>>m;

        vector<pair<int, int>> v;
        for(int i=0; i<n; i++)
        {
            int x, y;
            cin>>x>>y;
            v.push_back({x, y});
        }

        int res = 1e9;
        for(int i=0; i<n; i++)
        {
            int H = h, M = m, h_c = 0, m_c = 0;
            while(H!=v[i].first)
            {
                h_c++;
                H++;
                if(H==24)
                {
                    H = 0;
                }
            }
            while(M!=v[i].second)
            {
                m_c++;
                M++;
                if(M==60)
                {
                    M = 0;
                    if(h_c==0) h_c = 23;
                    else h_c--;
                }
            }

            int ans = (h_c*60) + m_c;
            res = min(res, ans);
        }

        cout<<res/60<<" "<<res%60<<endl;
    }
    return 0;
}
