#include<stdio.h>//ans question 3
#include<math.h>
//Has Return + Parameter
int HasParameter(int value){
    return value*2;//value will return the square of n
}


//Has Return + No Parameter
int HasNoParameter(){
    int n;
    printf("Has Return + No Parameter input :");
    scanf("%d",&n);
    return n*n;//it will return the value of n*n(example :6*6 = 36);
}


//No Return + Parameter
void NoreturnParameter(int x){
    int sum = x + x;
    printf("No Return + Parameter value :%d\n\n",sum);
}


//No Return + No Parameter
void noreturnParameter(){
    int n;
    printf("No Return + no Parameter input :");
    scanf("%d",&n);
    int res = sqrt(n);
    printf("noreturnParameter value :%d\n\n",res);
}
int main(){


    ////Has Return + Parameter
    int n;
    printf("Has Return + Parameter input :");
    scanf("%d",&n);
    int s = HasParameter(n);
    printf("HasParameter value :%d\n\n",s);


    //Has Return + No Parameter
    int result = HasNoParameter();
    printf("HasNoParameter value: %d\n\n",result);


    //No Return + Parameter
     int x;
    printf("NoreturnParameter input :");
    scanf("%d",&x);
    NoreturnParameter(x);


    //No Return + No Parameter
    noreturnParameter();




    return 0;
}
