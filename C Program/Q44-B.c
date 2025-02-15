#include<stdio.h>
int main(){
    int arr[]={76,87,65,56};
    int len=sizeof(arr)/sizeof(int);
    for(int j=0;j<len-1;j++){
        for(int i=len-1;i>0;i--){
            if(arr[i]>arr[i-1]){
                int temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
            }
        }
    }
    for(int j=0;j<len;j++){
        printf("%i ",arr[j]);
    }
    return 0;
}
