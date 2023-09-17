#include<bits/stdc++.h>
using namespace std;
int qry(int value)
{
    cout<<value<<endl;
    int y; cin>>y;
    return y;
}
void solve()
{
    int n; cin>>n;
    set<int> st;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        st.insert(a);
    }
    int mx = -1;
    for(int i=0; ; i++){
        if(st.find(i)==st.end()){
            mx = i; break;
        }
    }
    int last = mx;
    while(1)
    {
        int y = qry(last);
        if(y==-1){
            return;
        }
        last = y;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
