#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int sum=0;
    int copy=n;
    while(n>0){
        int rem=n%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==copy){
        printf("strong number");
    }
    else{
        printf("not strong number");
    }
    return 0;
}