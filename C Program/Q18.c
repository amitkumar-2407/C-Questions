#include<stdio.h>
int main (){
    char c;
    printf("enter vowel and constant\n");
    scanf("%c",&c);
    if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'){
        printf("vowel");
    }
    else{
        printf("constant");
    }
    return 0;
}