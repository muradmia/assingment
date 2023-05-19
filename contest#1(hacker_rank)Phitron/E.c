#include<stdio.h>
int main(){

    int n,t,index = 0,i,j,k,l = 1;
    scanf("%d",&t);
    
    


        while(t--){
                scanf("%d",&n);
                int arr[n];
                for(j=0;j<n;j++){
                scanf("%d",&arr[j]);
                }
                int search;
                scanf("%d",&search);
                for(k=0;k<n;k++){
                    if(arr[k]==search){
                        index = k+1;
                        break;
                    }
                }
                
                if(index > 0){
                    printf("Case %d:%d\n",l,index);
                    l++;
                }else{
                    printf("Case %d:Not Found\n",l);
                    l++;
                }
                index = 0;
                search = 0;
            }
        
    

    

    return 0;
}