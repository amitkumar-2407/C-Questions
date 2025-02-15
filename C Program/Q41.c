#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    int sum=0;
    for(int i=0;i<len;i++){
        printf("%i ",arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of all elements is %i",sum);
    return 0;
}