#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int i=0, j=n-1, p1 = 1, p2 = 1e6;
    long long sec = 0;
    while(i<=j)
    {
        int f1 = v[i]-p1;
        int f2 = p2-v[j];
        if(f1<=f2)
        {
            p1 = v[i];
            sec+=f1;
            p2 = p2-f1;
            i++;
        }
        else
        {
            sec+=f2;
            p2 = v[j];
            p1 = p1+f2;
            j--;
        }
    }
    cout<<sec<<endl;
}

int main()
{
    solve();
    return 0;
}
