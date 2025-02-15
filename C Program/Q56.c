#include<stdio.h>
int main(){
    char str1[]="hello";
    char str2[]="shery";
    int len1=sizeof(str1)/sizeof(str1[0]);
    int len2=sizeof(str2)/sizeof(str2[0]);
    char str3[len1+len2];
    for(int i=0;i<len1-1;i++){
        str3[i]=str1[i];
    }
    str3[len1-1]=' ';
    for(int i=0;i<len2-1;i++){
        str3[len1+i]=str2[i];
    }
    str3[len1+len2]='\0';
    printf("%s",str3);
    return 0;
}