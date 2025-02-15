#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
        printf("factorial is %i ",fact);
    return 0;
}