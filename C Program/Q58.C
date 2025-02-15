#include<stdio.h>
int main(){
    char str[]="s h o o r v e e r";
    int len=sizeof(str)/sizeof(str[0]);
    int count=0;
    for(int i=0;i<len-1;i++){
        if(str[i]==' '){
            for(int j=i;j<len-1;j++){
                str[j]=str[j+1];
            }
            count++;
        }
    }
    printf("%s %i",str,count);
    return 0;
}