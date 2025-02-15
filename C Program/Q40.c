#include<stdio.h>
int main(){
    int arr[]={1,-23,56,-69,36};
    int len=sizeof(arr)/sizeof (int);
    for(int i=0;i<len;i++){
        if(arr[i]>0){
            printf("%i ",arr[i]);
        }
    }
    printf("\n");
    for(int i=1;i<len;i++){
        if(arr[i]<0){
            printf("%i ",arr[i]);
        }
    }
    return 0;
}