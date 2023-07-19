#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int x; cin>>x;
	    x *=4;
	    if(x>1000) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}

