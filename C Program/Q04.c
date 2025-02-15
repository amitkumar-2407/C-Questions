#include<stdio.h>
int main(){
    float b,h;
    printf("enter base and height\n");
    scanf("%f %f",&b,&h);
    float area = 0.5*b*h;
    printf("area of rectangle is %f",area);
    return 0;
}