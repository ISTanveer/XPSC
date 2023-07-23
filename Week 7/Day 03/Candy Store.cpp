#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int x, y; cin>>x>>y;
	    int cnt = 0;
	    if(x<y){
	        cnt += x;
	        cnt += ((y-x)*2);
	    }
	    else cnt += y;
	    cout<<cnt<<endl;
	}
	return 0;
}

