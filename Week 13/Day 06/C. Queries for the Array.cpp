#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    vector<int> st;

    bool flag = true;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+'){
            if(st.empty()){
                st.push_back(1);//sorted
            }
            else{
                st.push_back(2); //maybe
            }
        }
        else if(s[i]=='-'){
            if(st.empty()){
                cout<<"NO\n";
                return;
            }
            else{
                st.pop_back();
            }
        }
        else if(s[i]=='1'){
            if(st.empty()){
                continue;
            }
            else{
                for(int i = st.size()-1; i>=0; i--){
                    if(st[i]==3){
                        cout<<"NO\n"; return;
                    }
                    else if(st[i]==2) st[i] = 1;
                    else break;
                }
            }
        }
        else {
            if(st.empty()){
                cout<<"NO\n";
                return;
            }
            else{
                int t = st.back();
                if(t==2){
                    st.pop_back();
                    st.push_back(3);
                }
                else if(t==1){
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}

/*
++10
*/
