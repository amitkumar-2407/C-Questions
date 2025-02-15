#include<stdio.h>
int main(){
    int a,b;
    printf("enter any number\n");
    scanf("%i %i",&a,&b);
    int hcf=0;
    if(a==b){
        hcf=a;
    }
    else if(a<b){
        for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                hcf=i;
            }
        }
    }
    else if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                hcf=i;
            }
        }
    }
    printf("hcf is %i",hcf);
    return 0;
}
