#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int find;
    printf("enter range of number\n");
    scanf("%d",&find);
    int len=sizeof(arr)/sizeof(int);
    int start=0;
    int end=len-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==find){
            printf("index is %i",mid);
            break;
        }
        else if(arr[mid]<find){
            start=mid+1;
            mid=(start+end)/2;
        }
        else{
            end=mid-1;
            mid=(start+end)/2;
        }
    }
    return 0;
}