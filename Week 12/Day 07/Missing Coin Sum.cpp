#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<long long> v(n); for(int i=0; i<n;i++) cin>>v[i];
    sort(v.begin(), v.end());

    long long a=1;
    for(int i=0; i<n; i++)
    {
        if(a<v[i]){
            break;
        }
        a+=v[i];
    }
    cout<<a<<endl;

}

int main()
{
    solve();
    return 0;
}
