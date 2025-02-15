#include<stdio.h>
int main(){
    char str[]="haan bhoola main jahan main ghoomun main karta dua ke hasti rahe tu";
    int occ[150];
    for(int i=0;i<150;i++){
        occ[i]=0;
    }
    int i=0;
    while(str[i]!='\0'){
        occ[str[i]]++;
        i++;
    }
    int largestindex=0;
    for(int i=1;i<150;i++){
        if(occ[i]>occ[largestindex] && i!=32){
            largestindex=i;
        }
    }
    printf("largest charactr is %c",largestindex);
    return 0;
}