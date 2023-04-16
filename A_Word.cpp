#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int lower=0, upper=0;
    for(int i=0;i<s.size();i++){
        if(islower(s[i])) lower++;
        else if(isupper(s[i])) upper++;
    }
    if(lower>=upper)
     for (auto& c : s) {
        c = std::tolower(c);
    }
    else for (auto& c : s) {
        c = std::toupper(c);
    }
    cout<<s;

}