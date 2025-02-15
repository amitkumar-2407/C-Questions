#include<stdio.h>
int main(){
    int a,b;
    printf("enter number of swap\n");
    scanf("%i %i",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of swap %i %i",a,b);
    return 0;
}