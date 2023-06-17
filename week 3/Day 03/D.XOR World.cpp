#include<bits/stdc++.h>
using namespace std;

long long XoR(long long val)
{
    if(val%4==0) return val;
    else if(val%4==1) return val^(val-1);
    else if(val%4==2) return val^(val-1)^(val^2);
    else return val^(val-1)^(val-2)^(val-3);
}

int main(){

long long a, b;  cin>>a>>b;
long long ans = XoR(b)^XoR(a-1);
cout<<ans<<endl;

}
