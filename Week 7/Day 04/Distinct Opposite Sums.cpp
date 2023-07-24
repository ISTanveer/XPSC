#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    vector<int> v(n);
	    int c1 = n, c2 = 1;
	    for(int i=0, j=n/2; j<n; i++, j++)
	    {
	        v[i] = c1;
	        v[j] = c2;
	        c1 -=2;
	        c2 +=2;
	    }
	    for(auto i:v) cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}

