#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int count[100] = {0};

    
    for(int i = 0; i < n; i++){
       int val = arr[i];
       count[val]++;
    }
    int k;
    scanf("%d",&k);
    
    printf("%d",count[k]);
    return 0;
}