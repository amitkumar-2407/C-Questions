#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    for(int i=len-1;i>=0;i--){
        printf("%i ",arr[i]);
    }
    return 0;
}