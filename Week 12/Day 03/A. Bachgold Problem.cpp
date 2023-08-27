// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n; cin>>n;
    if(n%2==0){
        int tem = n/2;
        cout<<tem<<endl;
        while(tem--){
            cout<<2<<" ";
        }
        cout<<'\n';
    }
    else{
        int tem=n/2;
        cout<<tem<<endl;
        tem--;
        while(tem--){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }

    return 0;
}
