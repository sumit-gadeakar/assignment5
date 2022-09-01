#include<stdio.h>
int main()
{
    int n1,n2,n3;
    float average;
    printf("enter the three numbers\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    average= (n1+n2+n3)/3;
    printf("average is %f",average);
    return 0;
}