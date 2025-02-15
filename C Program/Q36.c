#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(n==sum){
        printf("perfect number");
    }
    else{
        printf("not perfect number");
    }
    return 0;
}