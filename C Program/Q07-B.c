#include<stdio.h>
int main(){
    int min;
    printf("enter minutes\n");
    scanf("%i",&min);
    int hours=min/60;
    int minutes= min%60;
    printf("total hours=%i,minutes=%i",hours,minutes);
    return 0;
}