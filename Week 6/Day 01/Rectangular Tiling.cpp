#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int w, l; cin>>w>>l;
	    if((w&1)==0||(l&1)==0) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}

