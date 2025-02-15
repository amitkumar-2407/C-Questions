#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter number of swap \n");
    scanf("%i %i",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the number of swap %i %i",a,b);
    return 0;
}