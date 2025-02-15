#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%i",&n);
    int evensum=0;
    int oddsum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            evensum=evensum+i;
        }
        else{
            oddsum=oddsum+i;
        }
    }
    printf("evensum is %i oddsum is  %i",evensum,oddsum);
    return 0;
}
