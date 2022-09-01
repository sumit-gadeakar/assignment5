#include<stdio.h>
int main()
{
    int length,width,area;
    printf("enter the length of rectangle\n");
    scanf("%d",&length);
     printf("enter the width of rectangle\n");
    scanf("%d",&width);
    area=length*width;
    printf("the area of rectangle is %d",area);
    return 0;
}