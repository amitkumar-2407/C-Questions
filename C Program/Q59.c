#include<stdio.h>
int main(){
    char str[]="1 2 ka 4, 4 2 ka 1 my name is sheryians";
    int i=0;
    int alphabets=0;
    int numeric=0;
    int special=0;
    while(str[i]!='\0'){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=96 && str[i]<=122)){
            alphabets++;
        }
        else if(str[i]>=48 && str[i]<=57){
            numeric++;
        }
        else if(str[i]==' '){}
        else{
            special++;
        }
        i++;
    }
    printf("%i is alphabets ,%i is numeric,%i is special",alphabets,numeric,special);
    return 0;
}