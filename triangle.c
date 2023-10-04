#include<stdio.h>
#include <math.h>

int main()
{
    char c;
    int x,y,z,s,r;

    printf("==Triangle Area Calculator==\n\nInput The Triangle Type(a,b):\n a. 3 Side\n b. Base & Height\n\n");
    scanf("%c", &c);

    switch(c)
    {
    case'a':

        printf("\n===================\n");
        printf("Option 'a' selected");
        printf("\n===================\n");
        printf("\nEnter 3 sides of the triangle:\n");
        scanf("%d %d %d", &x, &y, &z);

        if( (x+y)>z && (y+z)>x && (z+x)>y )
        {
            s=(x+y+z)/2;
            r=sqrt(s*(s-x)*(s-y)*(s-z));
            printf("\nThe area of the triangle is %d\n", r);
        }
        else
        {
            printf("This is not a triangle");
        }
        break;

    case'b':

        printf("\n===================\n");
        printf("Option 'b' selected");
        printf("\n===================\n");
        printf("\nEnter Base & Height of the triangle:\n");
        scanf("%d %d", &x, &y);

        (x>0 && y>0) ? printf("\nThe area of the triangle is %d\n", x*y) : printf("This is not a triangle");

        break;

    default: printf("Wrong Input");
    }
    return 0;
}
