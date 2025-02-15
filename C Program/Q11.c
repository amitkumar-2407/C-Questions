#include<stdio.h>
int main(){
    int a,b;
    printf("enter first number and second number\n");
    scanf("%i %i",&a,&b);
    if(a>=b){
        printf("equal");
    }
    else{
        printf("not equal");
    }
    return 0;
}