#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    int p ; cin>>p;
    long long sum = 0;
    vector<int> fq(26, 0);
    for(int i=0; i<s.size(); i++)
    {
        int tem = s[i]-96;
        fq[s[i]-97]++;
        sum +=tem;
    }
    if(sum>p){
        for(int i= 25; i>=0; i--)
        {
            bool flag = false;
            while(fq[i]!=0)
            {
                sum -= i+1;
                fq[i]--;
                if(sum<=p){
                    flag = true;
                    break;
                }
            }
            if(flag) {
                for(int i=0; i<s.size(); i++){
                    if(fq[s[i]-97]){
                        cout<<s[i];
                        fq[s[i]-97]--;
                    }
                }
                cout<<endl;
                break;
            }
        }
    }
    else cout<<s<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
