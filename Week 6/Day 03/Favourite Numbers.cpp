#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    if((n&1)==1 && n%9==0) cout<<"Bob\n";
	    else if((n&1)==0 && n%7==0) cout<<"Alice\n";
	    else cout<<"Charlie\n";
	}
	return 0;
}

