//C. Most Similar Words
#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        vector<string> s(n);
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        int mn = INF;
        for(int k=0; k<n-1; k++)
        {
            //string s1 = s[k];
            for(int i=k+1; i<n; i++)
            {
                int sum = 0, tem;
                for(int j=0; j<m; j++)
                {
                    if(s[k][j]>s[i][j])
                    {
                        tem = (s[k][j]-'a') - (s[i][j]-'a');
                    }
                    else
                    {
                        tem = (s[i][j]-'a') - (s[k][j]-'a');
                    }
                    sum +=tem;
                }
                mn = min(mn, sum);
            }
    }

    cout<<mn<<endl;
}
return 0;
}
