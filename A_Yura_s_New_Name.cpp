#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; int n,x=0;
    cin>>n;
    while(cin>>s){
        x=0; 
        if(s[0]!= '^')
            {
                x++;
            }
        if(s.size()==1&& s[0]=='^'){
            x++;
        }
        for(int i=0;i<s.size()-1;i++){
            
           
            if(s[i]==s[i+1] &&s[i]== '_'){x++;}
          
        }  if(s[s.size()-1]== '_')x++;
        cout<<x<<endl;
         
    }

return 0;
}