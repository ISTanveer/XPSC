#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s = n + (n-1);
    int a[s][s];
//    for(int i=1; i<=s; i++)
//    {
//        for(int j=1; j<=s; j++)
//        {
//            if(i%2!= 0){
//
//            }
//        }
//    }
    for(int i=1; i<=n; i++)
    {

            int a = i + (i-1);
            int b = (n-i);
            while(b!=0)
            {
                cout<<" ";
                b--;
            }
            while(a!= 0)
            {
                if(i%2!= 0)
                {
                    cout<<">";
                }
                else
                {
                    cout<<"<";
                }
                a--;
            }
            cout<<endl;


    }
    for(int i=n-1; i>=1; i--)
    {
        int a = i + (i-1);
        int b = n-i;
        while(b!=0)
        {
            cout<<" ";
            b--;
        }
        while(a!= 0)
            {
                if(i%2!= 0)
                {
                    cout<<">";
                }
                else
                {
                    cout<<"<";
                }
                a--;
            }
            cout<<endl;
    }
}
