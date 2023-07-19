#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int cnt = 0;
	    while(n!=50){
	        while(n<50){
	        n+=2;
	        cnt++;
	    }
	    while(n>50){
	        n-=3;
	        cnt++;
	    }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}

