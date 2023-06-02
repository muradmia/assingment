#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int cls;
    char s;
    int id;
    int math;
    int eng;


};
int main(){

    int n;
    cin>>n;
    student a[n];

    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].id>>a[i].math>>a[i].eng;
        cin.ignore();
    }

  
    for(int i=0; i<n; i++){
        for(int j = i +1;j < n; j++){
            if(a[i].math+a[i].eng == a[j].math+a[j].eng){
                if(a[i].id > a[j].id){
                    swap(a[i],a[j]);
                }
            }else if(a[i].math+a[i].eng < a[j].math+a[j].eng){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0; i < n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math<<" "<<a[i].eng<<endl;
    }
 
  return 0;
}