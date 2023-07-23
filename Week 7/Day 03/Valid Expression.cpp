#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n, x; cin>>n>>x;
	    if(n+1<(abs(x))){
	        cout<<-1<<endl;
	        continue;
	    }
	    if(x>0)
        {
            int tem = n+1-x;
            while(x!=1) {
                cout<<'+';
                x--;
            }
            while(tem--) cout<<'*';
            cout<<endl;
        }
        else if(x<0)
        {
            if(n<=abs(x))
            {
                cout<<-1<<endl;
                continue;
            }
            else
            {
                int tem = n-(abs(x)+1);
                while(x!=1) {
                    cout<<'-';
                    x++;
                }
                while(tem--) cout<<'*';
                cout<<endl;
            }
        }
        else
        {
            while(n!=1){
                cout<<'*';
                n--;
            }
            cout<<'-'<<endl;
        }
	}
	return 0;
}

