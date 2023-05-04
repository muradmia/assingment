#include<stdio.h>//ans question 3
int count_before_zero(int *ar,int size){
    int count = 0;


    for(int i=0;i<size;i++){
        if(*(ar+i) == 0){
            break;
        }else
        {
            count++;
        }
    }
    return count;
}
int main(){


    int n;
    scanf("%d",&n);
    int arr[n];


    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }


    int result = count_before_zero(arr,size);
    printf("%d",result);


    return 0;
}
