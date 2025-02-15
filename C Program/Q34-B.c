#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+pow(10,i)-1;
    }
    printf("sum is %i",sum);
    return 0;
}