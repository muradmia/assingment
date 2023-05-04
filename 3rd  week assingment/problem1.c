#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){

        for(int j=i; j<n; j++){
            printf(" ");
        }

        for(int k=1; k<=i*2-1; k++){
            printf("%d",k);
        }

        printf("\n");
    }

    for(int i = n-1;i >= 1;i--){
        
        for(int j = n-i;j >= 1;j--){
            printf(" ");
        }

        for(int k=1; k<=i*2-1; k++){
            printf("%d",k);
        }
        printf("\n");
    }

    return 0;
}