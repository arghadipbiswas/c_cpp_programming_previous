#include <stdio.h>

int main()
{
float basic, da, hra, ins=500.00, pf, gross, net=0;
printf("\n enter the basic salary");
scanf("%f",&basic);
da=basic*0.50;
hra=basic*0.15;
gross=basic+da+hra;
pf=basic*0.12;
net=gross-ins-pf;
printf("\n %f",net);
return 0;
}
