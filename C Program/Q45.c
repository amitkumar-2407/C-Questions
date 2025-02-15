#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    int copy=arr[0];
    for(int i=0;i<len-1;i++){
        arr[i]=arr[i+1];
    }
    arr[len-1]=copy;
    for(int i=0;i<len;i++){
        printf("%i ",arr[i]);
    }
    return 0;
}