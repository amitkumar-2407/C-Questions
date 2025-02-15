#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter first and second number\n");
    scanf("%i %i",&n1,&n2);
    fflush(stdin);
    char operator;
    printf("enter operator");
    scanf("%c",&operator);
    if(operator=='+'){
        printf("%i",n1+n2);
    }
    else if(operator=='-'){
        printf("%i",n1-n2);
    }
    else if(operator=='*'){
        printf("%i",n1*n2);
    }
    else if(operator=='/'){
        printf("%f",(float)n1/n2);
    }
    return 0;
}