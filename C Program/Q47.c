#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int len=sizeof(arr)/sizeof(int);
    int k;
    printf("enter any number\n");
    scanf("%i",&k);
    k=k%len;
    int rotated[len];
    int tracker=0;
    for(int i=k;i<len;i++){
        rotated[tracker]=arr[i];
        tracker++;
    }
    for(int i=0;i<k;i++){
        rotated[tracker]=arr[i];
        tracker++;
    }
    for(int i=0;i<len;i++){
        printf("%i ",rotated[i]);
    }
    return 0;
}