#include<stdio.h>
int  is_palindrome(char *s){
    int count = 0,i = 0,j = i + 1;

    while(i > j){
        if(s[i] != s[j]){
            count = 1;
            break;
        }else{
            i++;
            j++;
        }
    }

    return count;
}
int main(){

    char s[10001];
    scanf("%s",s);
    
    int res = is_palindrome(s);

    if(res == 0){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }


    return 0;
}