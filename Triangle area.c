#include<stdio.h>
#include <math.h>

int main()
{
    char c;
    int x,y,z;
    double s,r,n;
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
            s=(x+y+z)/2.0;
            r=sqrt(s*(s-x)*(s-y)*(s-z));
            printf("\nThe area of the triangle is %.2f\n", r);
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

        if(x>0 && y>0){

                n=x*y*.5;
                printf("\nThe area of the triangle is %.2f\n",n);
        }
        else{
            printf("This is not a triangle");
        }

        break;

    default:
        printf("Wrong Input");
    }


    return 0;
}
