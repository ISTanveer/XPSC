#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n , k; cin>>n>>k;
    vector<int> v(n), w(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++) cin>>w[i];

    vector<int> dp(k+1, 0);

    dp[0] = 0;

    for(int i=1; i<=k; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i-w[j]>= 0)
            {
                dp[i] = max(dp[i], dp[i-w[j]] + v[j]);
            }
            //cout<<dp[i]<<" ";
        }
    }

    cout<<dp[k]<<endl;


}
