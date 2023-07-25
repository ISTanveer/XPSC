#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	int cnt=0, mn;
	vector<int> a(n); for(int i=0; i<n; i++) cin>>a[i];
	vector<int> b(n); for(int i=0; i<n; i++) cin>>b[i];
	for(int i=0; i<n; i++)
	{
	    int ab = abs(a[i]-b[i]);
	    if(a[i]>b[i]) mn = b[i];
	    else mn = a[i];
	    if(mn>=ab) cnt++;
	}
	cout<<cnt<<endl;
	}
	return 0;
}

