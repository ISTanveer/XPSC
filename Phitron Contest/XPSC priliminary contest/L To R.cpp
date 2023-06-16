#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {

        long long l, r; cin>>l>>r;
        long long ans = 0;
        if(l>r)
        {
            int n = l-r +1;
            ans = (n *(l+r))/2;
        }
        else
        {
            int n = r-l + 1;
            ans = (n *(l+r))/2;
        }
        cout<<ans<<endl;
    }
}
