#include<stdio.h>
int main(){


    int a,b,c,d;
    printf("Input 4 numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if     ((b>a&&a>c&&a>d)||(c>a&&a>b&&a>d)||(d>a&&a>b&&a>c)) {printf("Second Largest %d", a);}
    else if((a>b&&b>c&&b>d)||(c>b&&b>a&&b>d)||(d>b&&b>a&&b>c)) {printf("Second Largest %d", b);}
    else if((a>c&&c>b&&c>d)||(b>c&&c>a&&c>d)||(d>c&&c>a&&c>b)) {printf("Second Largest %d", c);}
    else if((a>d&&d>b&&d>c)||(b>d&&d>a&&d>c)||(c>d&&d>a&&d>b)) {printf("Second Largest %d", d);}
    else {printf("Wrong Input");};


    return 0;
}
