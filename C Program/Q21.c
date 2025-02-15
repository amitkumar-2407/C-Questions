#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    if(n<150){
        printf("drawf");
    }
    else if(n>150&&n<200){
        printf("average");
    }
    else if(n>200){
        printf("tall");
    }
    return 0;
}
