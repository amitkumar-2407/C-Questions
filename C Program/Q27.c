#include<stdio.h>
int main(){
    int a,b;
    printf("enter base and power\n");
    scanf("%i %i",&a,&b);
    int r=1;
    for(int i=1;i<=b;i++){
        r=r*a;
    }
    printf("result is %i",r);
    return 0;
}