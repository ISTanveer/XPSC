#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    int odd = 0, even = 0;
    long long sum = 0;
    vector<long long> v(n); for(int i=0; i<n; i++) {
    cin>>v[i];
    if(v[i]%2==0) even++;
    else odd++;
    sum +=v[i];
    }
    for(int i=0; i<k; i++){
        int a, b; cin>>a>>b;
        if(a==0){
            if(b%2==0){
                long long tem = even*b;
                sum+=tem;
            }
            else{
                long long tem = even*b;
                sum+=tem;
                odd +=even;
                even = 0;
            }
        }
        else{
            if(b%2!=0){
                long long tem = odd*b;
                sum +=tem;
                even +=odd;
                odd = 0;
            }
            else{
                long long tem = odd*b;
                sum +=tem;
            }
        }
        cout<<sum<<endl;
    }

}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
