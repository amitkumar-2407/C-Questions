#include <stdio.h>
int main(){
    float p,i,t;
    printf("enter principal,interest,time\n");
    scanf("%f %f %f",&p,&i,&t);
    float si=(float)(p*i*t)/100;
    printf("enter interest %f",si);
    return 0;
}