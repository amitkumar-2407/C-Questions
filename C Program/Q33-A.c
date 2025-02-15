#include<stdio.h>
int main(){
    int a,b;
    printf("enter first and second number\n");
    scanf("%i %i",&a,&b);
    if(a==b){
        printf("%i is lcm",a);
    }
    else if(a<b){
        int mult=0;
        for(;;){
            mult=mult+a;
            if(mult%a==0 && mult%b==0){
                printf("lcm is %i",mult);
                break;
            }
        }
    }
    else if(a>b){
        int mult=0;
        for(;;){
            mult=mult+b;
            if(mult%a==0 && mult%b==0){
                printf("lcm is %i",mult);
                break;
            }
        }
    }
    return 0;
}