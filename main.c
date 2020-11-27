#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
    printf("A triangle is valid if sum of its two sides is greater than the third side. If three sides are a, b and c, then three conditions should be met.");

    printf("\ncheck if the triangle is valid\n");
    printf("Enter 3 number");
    printf("\na: ");
    scanf("%d", &a);
    printf("\nb: ");
    scanf("%d", &b);
    printf("\nc: ");
    scanf("%d", &c);

    if(a + b > c && a + c > b && b + c > a)
    {
        printf("The triangle is valid");
    }else {
        printf("The triangle is invalid, try again");
    }

    return 0;
}
