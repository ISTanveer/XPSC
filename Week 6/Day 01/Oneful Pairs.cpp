//https://www.codechef.com/problems/ONEFULPAIRS
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a, b; cin>>a>>b;
	int ans = a+b+(a*b);
	string s = to_string(ans);
	int cnt = 0;
	for(int i=0; i<s.size(); i++)
	{
	    if(s[i]=='1') cnt++;
	    else break;
	}
	if(cnt==s.size()) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
