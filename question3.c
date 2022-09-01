#include<stdio.h>
int main()
{
    int length,breadth,height,volume;
    printf("enter the length of cuboid\n");
    scanf("%d",&length);
    printf("enter the breadth of cuboid\n");
    scanf("%d",&breadth);
    printf("enter the height of cuboid\n");
    scanf("%d",&height);
    volume=length*breadth*height;
    printf("the volume of cuboid is %d\n ",volume);
    return 0;
}