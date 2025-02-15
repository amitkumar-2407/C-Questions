#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int sum=0;
    while(n>0){
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("total sum of digits=%i",sum);
    return 0;
}