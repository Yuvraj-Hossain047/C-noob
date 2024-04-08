#include<stdio.h>
int main()
{
    double r;

    printf("\nEnter the radius of the circle: \n");
    scanf(" %lf", &r);

    (r>0) ? printf("The area of the circle is %.2f", 3.14159*r*r)   :   printf("\nThis is not a circle.\n");

    return 0;
}
