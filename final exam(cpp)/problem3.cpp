#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int cls;
    char section;
    int math;
    int eng;


};
int main(){
    int n;
    cin>>n;
    student s[n];

    for(int i=0; i<n; i++){
        cin>>s[i].name>>s[i].cls>>s[i].section>>s[i].math>>s[i].eng;
        cin.ignore();
    }

    for(int i=n-1; i>=0; i--){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].math<<" "<<s[i].eng<<endl;
    }


    
  return 0;
}