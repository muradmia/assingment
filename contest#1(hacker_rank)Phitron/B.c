#include<stdio.h>
int main(){

    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a == 0 || b == 0 || c == 0){
        printf("NO\n");
    }else if(a==b && b == c && c == a ){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}