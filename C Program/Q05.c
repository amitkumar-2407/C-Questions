#include<stdio.h>
int main(){
    int celsius;
    printf("temperatures from celsius\n");
    scanf("%i",&celsius);
    int fehrenheit=(celsius*9/5)+32;
    printf("celsius to fahrenheit is %i",fehrenheit);
    return 0;
}