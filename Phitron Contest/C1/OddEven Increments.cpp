#include<bits/stdc++.h>
using namespace std;


int main()
{
int t; cin>>t;
while(t--){
    int n ;cin>>n;
    int even = 0, odd = 0;
    vector<int> v(n); for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2==0) even++;
        else odd++;
    }
    if(even==n||odd==n)
    {
        cout<<"YES\n";
        continue;
    }
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(v[i]%2==0){
            if(v[i+1]%2==0) {
                flag = false;
                break;
            }
        }
        else {
            if(v[i+1]%2!=0){
                flag = false;
                break;
            }
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
    return 0;
}
