#include "stdio.h"
int main()
{
    int  tip_percent,tax_percent,round_figure;
    float meal_cost,total_cost,tip,tax;
    scanf("%f",&meal_cost);
    scanf("%d",&tip_percent);
    scanf("%d",&tax_percent);
    tip=(meal_cost*tip_percent)/100;
    tax=(tax_percent*tip_percent)/100;
    total_cost=meal_cost+tip+tax;
    printf("\n%f",tip);
    printf("\n%f",tax);
    printf("\n%f",total_cost);
    printf("\n%d",round_figure);
}
