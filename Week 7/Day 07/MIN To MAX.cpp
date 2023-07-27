#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int mn=INT_MAX;
	    vector<int> v(n);
	    for(int i=0; i<n; i++)
	    {
	        cin>>v[i];
	        mn = min(mn, v[i]);
	    }
	    int cnt=0;
	    for(int i=0; i<n; i++)
	    {
	        if(mn!=v[i]) cnt++;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}

