#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    if((n&1)){
	        cout<<-1<<endl;
	    }
	    else{
	        while(n){
	            cout<<n<<" ";
	            n--;
	        }
	        cout<<endl;
	    }
	}
	return 0;
}

