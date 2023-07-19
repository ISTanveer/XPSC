#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int rem = n%10;
	    if(rem==0) cout<<100-n<<endl;
	    else if(rem>=5) cout<<100-(n+(10-rem))<<endl;
	    else cout<<100-(n-rem)<<endl;
	}
	return 0;
}

