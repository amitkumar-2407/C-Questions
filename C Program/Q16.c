#include<stdio.h>
int main(){
    int m,s,e,h;
    printf("enter marks is sub math,science,english,hindi\n");
    scanf("%i %i %i %i",&m,&s,&e,&h);
    int add=(m+s+e+h);
    float per=add/4;
    printf("percentage is %f",per);
    if(per<35){
     printf("grad is f");   
    }
    else if(per<45){
        printf("grad is d");
    }
    else if(per<55){
        printf("grad is c");
    }
    else if(per<75){
        printf("grad is b");
    }
    else{
        printf("grad is a");
    }
    return 0;
}
