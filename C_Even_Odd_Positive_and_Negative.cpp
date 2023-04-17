#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int n;
   cin>>n;
   int even=0,odd=0,positive=0,negative=0;
   while(cin>>n){
    if(n%2)odd++;
    else if(n%2==0)even++;
    if(n>0)positive++;
    else if(n<0)negative++;
   }
   cout<<"Even: "<<even<<endl;
   cout<<"Odd: "<<odd<<endl;
   cout<<"Positive: "<<positive<<endl;
   cout<<"Negative: "<<negative;
}