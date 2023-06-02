#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

class student
{
    public:
      string name;
      int cls;
      char s;
      int id;
      
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    //student b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].id;
        cin.ignore();
    }

    int i = 0;
    int j = n-1;

    while(i < j){
        swap(a[i].id,a[j].id);
        i++;
        j--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
    return 0;
}