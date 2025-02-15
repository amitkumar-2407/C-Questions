#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    if(n == 0){
        printf("number is zero");
    }
    else if(n>0){
        if(n%2 == 0){
            printf("positive and even");
        }
        else{
            printf("positive and odd");
        }
    }
    else{
        if(n%2 == 0){
            printf("negative and even");
        }
        else{
            printf("negative and odd");
        }
        return 0;
    }
}