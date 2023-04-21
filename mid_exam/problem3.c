#include<stdio.h>
int main(){
    int m1,m2,d;
    scanf("%d",&m1);
    scanf("%d",&m2);
    scanf("%d",&d);

    int result = m1 * d;
    int result2 = result/m2;
    printf("%d",result2);

    return 0;
}