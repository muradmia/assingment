#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",abs(arr[i]-max));
    }

    

    return 0;
}