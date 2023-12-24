#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int recursiveString(string s){

   int i=0, j=s.length()-1;

   if(s[i] != s[j]){
        cout<<"false";
        return 1;
   }

   while(i>=j){
    if(s[i]==s[j]){
        i++;
        j--;
    } else{
        cout<<"false";
        return false;
    }
   }

   cout<<"true";
   return 1;
}

int main(){
    string str;
    cin>>str;
    recursiveString(str);
}

// Time complexity => 0(n)
// space complexity => 0(n)
