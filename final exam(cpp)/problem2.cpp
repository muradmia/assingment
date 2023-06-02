#include<bits/stdc++.h>
using namespace std;
int main(){

    int flag = 1;
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    while(ss >> word){
       
        if(word == "Ratul"){
            flag = 0;
            break;
        }else{
            flag = 1;
        }
    }
 
    if(flag == 0){
        cout<<"YES";
    }else if(flag == 1){
        cout<<"NO";
    }
  return 0;
}