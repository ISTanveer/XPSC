#include<bits/stdc++.h>
using namespace std;
void solve(){
string a, b; cin>>a>>b;
char s1, s2; s1 = a[a.size()-1], s2 = b[b.size()-1];
if(s1=='L'&&s2=='M') cout<<'>'<<endl;
else if(s1=='M'&&s2=='S') cout<<'>'<<endl;
else if(s1=='L'&&s2=='S') cout<<'>'<<endl;
else if(s2=='L'&&s1=='M') cout<<'<'<<endl;
else if(s2=='M'&&s1=='S') cout<<'<'<<endl;
else if(s2=='L'&&s1=='S') cout<<'<'<<endl;
else if(s1=='L'&&s2=='L'){
    int c1 = 0, c2 = 0;
    for(int i=0; i<a.size()-1; i++){
        if(a[i]=='X') c1++;
    }
    for(int i=0; i<b.size()-1; i++){
        if(b[i]=='X') c2++;
    }
    if(c1>c2) cout<<'>'<<endl;
    else if(c2>c1) cout<<'<'<<endl;
    else cout<<'='<<endl;
}
else
{
    int c1 = 0, c2 = 0;
    for(int i=0; i<a.size()-1; i++){
        if(a[i]=='X') c1++;
    }
    for(int i=0; i<b.size()-1; i++){
        if(b[i]=='X') c2++;
    }
    if(c1>c2) cout<<'<'<<endl;
    else if(c2>c1) cout<<'>'<<endl;
    else cout<<'='<<endl;
}
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
