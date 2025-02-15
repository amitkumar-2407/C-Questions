#include<stdio.h>
int main(){
    char str[]="sheryians";
    int len = sizeof(str)/sizeof(str[0]);
    for(int i=0;str[i]!=0;i++){
        printf("%c ",str[i]);
    }
    return 0;
}