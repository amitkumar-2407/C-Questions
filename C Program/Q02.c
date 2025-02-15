 #include<stdio.h>
 int main(){
    int h,w;
    printf("perimeter of rectangle height and width\n");
    scanf("%i %i",&h,&w);
    int per=2*(h+w);
    printf("perimeter of rectangle is %i",per);
    return 0;
}