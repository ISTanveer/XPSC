#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e18;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long mn = INF;
        vector<long long> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mn = min(mn, v[i]);
        }
        sort(v.begin(), v.end());
        long long cnt = 0;
        for(int i=0; i<n; i++)
        {
            cnt +=(v[i]-mn);
        }
        cout<<cnt<<endl;
    }
    return 0;
}
