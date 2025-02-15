#include<stdio.h>
int main(){
    int dis,fuel;
    printf("enter distance and fuel consumed\n");
    scanf("%i %i",&dis,&fuel);
    float average = dis/fuel;
    printf("distance and fuel %f",average);
    return 0;
}