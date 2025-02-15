#include<stdio.h>
int main(){
    int age;
    printf("enter age\n");
    scanf("%i",&age);
    if(age>17){
        printf("casting for vote");
    }
    else{
        printf("not vote");
    }
    return 0;
}