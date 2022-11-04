#include <stdio.h>
#include <math.h>
int main()
{
    float radius, height;
    float surface_area, volume , side;
    
    printf("Enter the length of a side: ");
    scanf("%f", &side);
    surface_area = 6.0 * side * side;
    volume = pow(side, 3);
    printf("\nSurface area =   %6.2f   and   Volume =   %6.2f\n", surface_area,volume);
 
    printf("\nEnter  value for  radius and height of a cylinder : \n");
    scanf("%f%f", &radius, &height);
    surface_area = 2 * (22 / 7) * radius * (radius + height);
    volume = (22 / 7) * radius * radius * height;
    printf("\nSurface area of cylinder is: %.3f", surface_area);
    printf("\n Volume of cylinder is : %.3f\n", volume);
    
    printf("\nEnter radius of the sphere : \n");
    scanf("%f", &radius);
    surface_area =  4 * (22/7) * radius * radius;
    volume = (4.0/3) * (22/7) * radius * radius * radius;
    printf("\nSurface area of sphere is: %.3f", surface_area);
    printf("\n Volume of sphere is : %.3f", volume);
    return 0;
}
