#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int x, y; cin>>x>>y;
	    if(x>8) {
	        cout<<"NO\n";
	        continue;
	    }
	    if((x*y)>500) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}

