#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,5,4,3,2,1};
    int len=sizeof(arr)/sizeof(int);
    int start=0;
    int end=len-1;
    int flag=0;
    for(int i=0;i<len/2;i++){
        if(arr[start]==arr[end]){
            end--;
            start++;
        }
        else{
            flag=-1;
            break;
        }
    }
    if(flag==0){
        printf("palindromic array");
    }
    else{
        printf("not palindromic array");
    }
    return 0;
}