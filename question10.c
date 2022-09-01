#include<stdio.h>
int main()
{
    int base,height;
    float area;
    printf("enter the base of triangle\n");
    scanf("%d",&base);
    printf("enter the height of triangle\n");
    scanf("%d",&height);
    area=(base*height)/2;
    printf("the area of triangle is %f\n",area);
    return 0;

}