#include<bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> v(7);
    for(int i=0; i<7; i++) cin>>v[i];
    bool flag = false;
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            for(int k = j+1; k<6; k++)
            {
                if(v[i]+v[j]+v[k] == v[6]) {
                    //flag = true;
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                    return ;
                }
            }
        }
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
