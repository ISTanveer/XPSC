#include <bits/stdc++.h>
using namespace std;

int bitdif(long long a,long long b){

    for(int i=30;i>=0;--i){
        long long cur = 1ll<<i;

        if((a&cur) && !(b&cur)){
            return i;
        }
    }
    return 0;
}

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--){

	    long long a,b,c;
	    cin>>a>>b>>c;

	    if(a==b || b == c || a == c){
	        cout<<"-1\n";
	    }
	    else if(a<b && b<c)cout<<0<<"\n";
	    else{

	        long long ans = 0;

	        if(a>b){

	            ans = (1ll<<bitdif(a,b));
	        }

	        if(b>c){
	            ans |= (1ll<<bitdif(b,c));
	        }

	        if((a^ans)<(b^ans)  && (b^ans)<(c^ans)){
	            cout<<ans<<"\n";
	        }
	        else cout<<"-1\n";
	    }
	}
	return 0;
}
