#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter any number\n");
    scanf("%i %i %i",&a,&b,&c);
    if(a>b&&a>c){
        printf("a is largest");
    }
    else if(b>a&&b>c){
        printf("b is largest");
    }
    else{
        return 0;
    }
}