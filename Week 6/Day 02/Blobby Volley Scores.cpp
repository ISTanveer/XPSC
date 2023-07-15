#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	string s; cin>>s;
	int a = 0, b = 0, al = 0, bb = 1;
	for(int i=0; i<n; i++){
	    if(s[i]=='A'){
	        if(al==0){
	            a++;
	        }
	        else {
	            al = 0;
	            bb = 1;
	        }
	    }
	    else{
	        if(bb==0){
	            b++;
	        }
	        else{
	            bb = 0;
	            al = 1;
	        }
	    }
	}
	cout<<a<<" "<<b<<endl;
	}
	return 0;
}

