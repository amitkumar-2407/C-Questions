#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int flag=-1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==-1){
        printf("prime number");
    }
    else{
        printf("not prime number");
    }
    return 0;
}