#include <iostream>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if((a[j]-a[i])==(a[k]-a[j])){
                    cout<<"No\n";
                    return;
                }
            }
        }
    }
    cout<<"Yes\n";
}

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}

