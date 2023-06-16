//geeks for geeks...
#include<bits/stdc++.h>
using namespace std;


int main()
{
        int n, k;
        cin>>n>>k;
        vector<int>v(n);    for(int i=0; i<n; i++) cin>>v[i];

        list<int> l;
        int i=0, j=0;
        //l.push_back(0);
        while(j<n)
        {
            while(!l.empty()&&v[j]>v[l.back()]){
                l.pop_back();
            }
            l.push_back(j);

            if(j<k-1){
                j++;
            }
            else
            {
                cout<<v[l.front()]<<" ";
                if(i==l.front()) l.pop_front();
                i++;
                j++;
            }
        }

}
