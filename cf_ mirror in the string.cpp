#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        string res="", res1="";
        int i=0, j=i+1;
        while(j<n){
            while(s[i] != s[j] && j<n){
                j++;
            }
            res+= s[i];
            
            int j1 = j;
            i++;
            j++;
            
            while(i<j1){
                if(s[i] == s[j])
                    res+= s[i];
                i++;
                j++;
            }

            res1= res;
            reverse(res1.begin(), res1.end());
            res.append(res1);
            cout<<res<<"\n";
            break;
        }
    }
    return 0;
}