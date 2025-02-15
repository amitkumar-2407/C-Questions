#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    printf("enter first word:");
    scanf("%s",str1);
    char str2[100];
    printf("enter second word:");
    scanf("%s",str2);
    if(strcmp(str1,str2)==0){
        printf("identical");
    }
    else{
        printf("not identical");
    }
    return 0;
}