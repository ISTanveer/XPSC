#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

    vector<int> v(n);
    int pre_s[n], post_s[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    pre_s[0] = v[0];
    for(int i=1; i<n; i++)
    {
        pre_s[i] = v[i] + pre_s[i-1];
    }
    post_s[n-1] = v[n-1];
    for(int i=n-2; i>=0; i--)
    {
        post_s[i] = v[i] + post_s[i+1];
    }
//    for(int i=0; i<n; i++)
//    {
//        cout<<pre_s[i]<<" "<<post_s[i]<<endl;
//    }
    int cnt = 0, ans;
    for(int i=0; i<n; i++)
    {
        if(pre_s[i] == post_s[i]){
            cnt = 1;
            ans = i;
            break;
        }
    }
    if(cnt==1) cout<<ans<<endl;
    else cout<<"-1"<<endl;
    }

}
