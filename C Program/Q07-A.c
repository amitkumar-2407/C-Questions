#include <stdio.h>
int main(){
    int hrs,min;
    printf("enter hours and minutes\n");
    scanf("%i %i",&hrs,&min);
    int minutes = hrs*60+min;
    printf("hours and minutes %i",minutes);
    return 0;
}