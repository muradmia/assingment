#include<stdio.h>
// call by value
void call_by_value(int x){//you call only value of n
    printf("value of x : %d\n",x);
    x = 10;
    printf("after replace value of x : %d\n",x);
}

void call_by_referance(int *p){
    //dereferance the value of n
    *p = 30;// I call address of n(p recive the address of p);
    
    int *ptr = p;//ptr keep the value of p (value of p is address of &n);
    *ptr = 300;
    printf("value of p is :%d\n",*p);
}
int main(){

    int n;
    scanf("%d",&n);
    call_by_value(n);
    printf("value of n :%d\n",n);//I call only value that's why the value does't change

    call_by_referance(&n);
    printf("value of n is ::%d\n",n);//I change the value of *ptr = 300 that's why n showing 300


    return 0;
}