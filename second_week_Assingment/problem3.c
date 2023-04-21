#include<stdio.h>
int main(){

    int t,n,esum = 0,osum = 0;
    scanf("%d",&t);

    for(int i = 0;i < t;i++){
        scanf("%d",&n);
        if(n % 2 == 0){
            esum += n;
        }else{
            osum += n;
        }
    }

    printf("%d ",esum);
    printf("%d ",osum);


    return 0;
}