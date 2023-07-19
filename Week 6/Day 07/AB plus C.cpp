#include <iostream>
using namespace std;
const long long t = 1e6;

int main() {
	// your code goes here
	int T; cin>>T;
	while(T--){
	    long long x; cin>>x;
	    if(x==1) cout<<-1<<endl;
	    else{
	        if(x<=t+1) cout<<1<<" "<<1<<" "<<x-1<<endl;
	        else{
	            if(x%t!=0){
	                cout<<x/t<<" "<<t<<" "<<x%t<<endl;
	            }
	            else cout<<999999<<" "<<x/t<<" "<<x/t<<endl;
	        }
	    }
	}
	return 0;
}

