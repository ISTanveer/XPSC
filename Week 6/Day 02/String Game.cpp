#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	    int one = 0, zero = 0;
	    for(int i=0; i<n; i++){
	        if(s[i]=='0') zero++;
	        else one++;
	    }
	    int ans = min(one, zero);
	    if(ans%2==0) cout<<"Ramos\n";
	    else cout<<"Zlatan\n";
	}
	return 0;
}

