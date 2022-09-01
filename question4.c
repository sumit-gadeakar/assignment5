#include<stdio.h>
int main()
{
    float p,r,t,si;/*p=principal,r=rate of intrerst
                      t=time, si=simple interest*/
    printf("enter the principle amount\n");
    scanf("%f",&p);    
     printf("enter the rate of interest\n");
    scanf("%f",&r);      
     printf("enter the time amount\n");
    scanf("%f",&t);      
    si=(p*r*t)/100;
    printf("simple interest is %f\n",si);
    return 0;
                }