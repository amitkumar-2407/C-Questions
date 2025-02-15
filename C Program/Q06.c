#include <stdio.h>
int main (){
    float kmph;
    printf("kilometer per hour\n");
    scanf("%F",&kmph);
    float mph=kmph*0.621371;
    printf("miles per hour is %f",mph);
    return 0;
}