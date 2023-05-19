#include<stdio.h>
int main(){

    double a , b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    double result = (a * b) / c;   //2
    long long int num = result;   //2
    double res = result - num;   //0

    if(res > 0){
        printf("double\n");
        return 0;

    }


    if(num <= 2147483647){
        printf("int\n");
    }else{
        printf("long long\n");
    }
    



    return 0;
}