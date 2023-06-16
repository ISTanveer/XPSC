//geek for geeks..
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string pat, txt;        cin>>pat>>txt;

        vector<int>f1(26, 0), f2(26, 0);
	    for(int i=0; i<pat.size(); i++){
	        int c = pat[i]-'a';
	        f1[c]++;
	    }

	    int sz = pat.size();
	    int i=0, j=0, cnt = 0;
	    while(j<txt.size()){
	        f2[txt[j]-'a']++;
	        if(j<sz-1){
	            j++;
	        }
	        else{
	            bool flag = true;
	            for(int k=0; k<26; k++){
	                if(f1[k]!=f2[k]) {
	                    flag = false;
	                    break;
	                }
                        //cout<<f1[k]<< " "<<f2[k]<<endl;
	            }
	            //cout<<endl;
	            if(flag) cnt++;
	            f2[txt[i]-'a']--;
	            i++;
	            j++;
	        }
	    }
	    cout<<cnt<<endl;
}
