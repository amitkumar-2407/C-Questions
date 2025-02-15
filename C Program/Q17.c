#include<stdio.h>
int main(){
    int cp,sp;
    printf("enter cost price and selling price\n");
    scanf("%i %i",&cp,&sp);
    if(cp<sp){
        printf("profit is %i",sp-cp);
    }
    else{
        printf("loss is %i",cp-sp);
    }
    return 0;
}