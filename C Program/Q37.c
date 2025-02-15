#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int sum=0;
    int copy=n;
    while(n>0){
        int rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==copy){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}