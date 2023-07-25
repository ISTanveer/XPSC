#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int h, x, y; cin>>h>>x>>y;
	    int cnt = 0;
	    h -=y; cnt++;
	    if(h<=0){
	        cout<<cnt<<endl;
	        continue;
	    }
	    while(h>0){
	        h-=x;
	        cnt++;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}

