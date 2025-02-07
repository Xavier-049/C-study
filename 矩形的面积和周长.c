#include <stdio.h>

int main(void)
{
    double a, b; 
    double perimeter, area; 

    scanf("%lf %lf", &a, &b);

    perimeter = 2 * (a + b); 
    area = a * b; 

    printf("%.2lf\n", perimeter);

    printf("%.2lf\n", area);

    return 0;
}