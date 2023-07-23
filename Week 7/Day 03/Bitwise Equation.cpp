#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    long long n; cin>>n;
	    if(n==0)cout<<"1 7 2 3\n";
        else if(n==1)cout<<"1 4 3 2\n";
	    else{
	        cout<<((long long)(1<<29))<<" "<<((long long)(1<<28))<<" "<<1<<" "<<(n^1)<<endl;
	    }
	}
	return 0;
}

