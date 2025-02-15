#include<stdio.h>
int main(){
    char str[]="level";
    int len=sizeof(str)/sizeof(str[0]);
    int start=0;
    int end=len-2;
    int flag=0;
    for(int i=1;i<len/2;i++){
        if(str[start]==str[end]){
            start++;
            end--;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("palindromic string");
    }
    else{
        printf("not palindromic string");
    }
    return 0;
}