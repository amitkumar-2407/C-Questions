#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    for(int i=1;i<=n;i++){
        int flag=-1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
    if(flag==-1){
        printf("%i ",i);
    }    
    }
    return 0;
}