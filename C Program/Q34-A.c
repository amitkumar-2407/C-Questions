#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int prev=0;
    int sum=0;
    for(int i=0;i<n;i++){
        prev=pow(10,i)+prev;
        sum=sum+prev;
    }
    printf("sum of the series is %i",sum);
    return 0;
}
    