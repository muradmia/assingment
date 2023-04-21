#include<stdio.h>
#include<string.h>
int main(){

    char s[1000];
    gets(s);
    int ccount = 0,scount = 0;

    for(int i = 0;i < strlen(s);i++){
        if(s[i] >= 'a' && s[i] <='z'){
            scount++;
        }else{
            ccount++;
        }
    }

    printf("%d %d\n",ccount,scount);

    return 0;
}