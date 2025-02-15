#include<stdio.h>
int main(){
    int arr[]={24,25,23,1,2,75,85,69,53,44,89,56};
    int len=sizeof(arr)/sizeof(int);
    int large;
    for(int i=0;i<len;i++){
        if(arr[i]<arr[i+1]){
            large=arr[i+1];
        }
    }
    printf("largest number=%i",large);
    return 0;
}
