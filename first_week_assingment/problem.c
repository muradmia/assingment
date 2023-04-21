#include<stdio.h>
int main(){

    int n,sub;
    scanf("%d",&n);

    if(n > 1000){
        printf("I will buy Punjabi\n");
        sub = n -1000;

        if(sub >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }else{
        printf("Bad luck!");
    }

    return 0;
}