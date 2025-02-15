#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum is %i average is %i",sum,sum/n);
    return 0;
}