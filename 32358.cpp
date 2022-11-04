#include "stdio.h"
int main()
{
    int  round_figure,tip_percent,tax_percent;
    float meal_cost,total_cost,tip,tax;
    scanf("%f",&meal_cost);
    scanf("%d",&tip_percent);
    scanf("%d",&tax_percent);
    tip=(meal_cost*tip_percent)/100;
    tax=(tax_percent*meal_cost)/100;
    total_cost=meal_cost+tip+tax;
    round_figure=total_cost;
    printf("\n%f",tip);
    printf("\n%f",tax);
    printf("\n%f",total_cost);
    printf("\n%d",round_figure);
    return 0;
}

