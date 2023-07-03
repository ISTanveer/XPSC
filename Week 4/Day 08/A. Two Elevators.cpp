#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int a1 = a-1;
        int a2 = abs(c-b);
        a2 += (c-1);
        if(a1==a2) cout<<3<<endl;
        else if(a1>a2) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
