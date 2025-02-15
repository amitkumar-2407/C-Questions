#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int sum=0;
    int input=n;
    for(int i=1;i<=n;i++){
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(input%sum==0){
        printf("harsand number");
    }
    else{
        printf("not harsand number");
    }
    return 0;
}
