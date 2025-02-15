#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int arr[]={1,2,3,4,5};
    int index=-1;
    int find;
    for(int i=0;i<n;i++){
        if(find=arr[i]){
            index=i;
        }
    }
    printf("%i is find %i is index",find,index);
    return 0;
}