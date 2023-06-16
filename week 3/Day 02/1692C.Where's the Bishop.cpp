//C. Where's the Bishop?
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string>v(8);
        for(int i=0; i<8; i++)
        {
            cin>>v[i];
        }
        int i, j, r, c;
        for( i=1; i<=7; i++)
        {
           bool flag = false;
            for( j=1; j<=7; j++)
            {
                if(v[i][j]=='#') {
                    if(v[i+1][j+1]=='#'&&v[i-1][j-1]=='#'
                       &&v[i+1][j-1]=='#'&&v[i-1][j+1]=='#')
                    {
                        r = i+1;
                        c = j+1;
                        flag = true;
                        break;
                    }
                }
            }
            if(flag){
                cout<<r<<" "<<c<<endl;
                break;
            }
        }
    }
    return 0;
}
