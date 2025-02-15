#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int input=n;
    int reverse=0;
    while(n>0){
        reverse=reverse*10;
        reverse+=n%10;
        n=n/10;
    }
    if(input==reverse){
        printf("palindromic");
    }
    else{
        printf("not palindromic");
    }
    return 0;
}