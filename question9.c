#include<stdio.h>
int main()
{
    int costprice,sellingprice,profit,loss;
    float profitpercentage,losspercentage;
    printf("enter the cost price\n");
    scanf("%d",&costprice);
    printf("enter the selling price\n");
    scanf("%d",&sellingprice);
    profit=sellingprice-costprice;
    loss=costprice-sellingprice;
    printf("profit=%d\n",profit);
    printf("loss=%d\n",loss);
    profitpercentage =(profit*100)/costprice;
    losspercentage =(loss*100)/costprice;
    printf("profit percentage = %f\n",profitpercentage);
    printf("loss percentage =%f\n",losspercentage);
    return 0;
}