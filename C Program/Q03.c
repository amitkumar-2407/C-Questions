#include<stdio.h>
int main(){
    float r;
    printf("enter radius\n");
    scanf("%f",&r);
    float per=2*3.14*r;
    printf("perimeter of radius is %f",per );
    float area=3.14*r*r;
    printf("perimeter of circle is %f",area);
    return 0;
}