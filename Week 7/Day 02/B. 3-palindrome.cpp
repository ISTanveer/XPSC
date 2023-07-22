#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    string s = "";
    bool flag = true;
    int a = n;
    while(n>0){
        if(flag) {
            s +="aa";
            flag = false;
        }
        else {
            s += "bb";
            flag = true;
        }
        n -=2;
    }
    for(int i=0; i<a; i++) cout<<s[i];

    return 0;
}
