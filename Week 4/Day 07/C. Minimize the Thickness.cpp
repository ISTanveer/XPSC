#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    long long ans = n;

    long long segsum = 0;

    for(int i=0; i<n; i++)
    {
        segsum+=v[i];
        long long sum = 0, len = 0, l = i+1;
        bool flag = false;
        for(int j=i+1; j<n; j++)
        {

            sum +=v[j];
            len++;
            if(sum>segsum) break;
            else if(j==n-1&&sum==segsum){
                l = max(l, len);
                flag = true;
                break;
            }
            else if(sum==segsum){
                l = max(l, len);
                sum = 0;
                len = 0;
            }
        }
        if(flag) ans = min(ans, l);
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
