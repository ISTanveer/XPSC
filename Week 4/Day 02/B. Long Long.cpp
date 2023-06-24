#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    long long sum = 0;
    vector<int> v(n);
    for(int i=0;i<n; i++)
    {
        cin>>v[i];
        sum += abs(v[i]);
    }
    int op = 0;
    for(int i=0; i<n; i++){
        if(v[i]<0){
            while(v[i]<=0){
                i++;
                if(i>=n) break;
            }
            op++;
        }
    }
    cout<<sum<<" "<<op<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}

