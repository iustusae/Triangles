#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    int choice;
    double a;
    double b;
    double c;
    double radius;
    double area;
    const double PI = 3.14159265;
    float x, y, z, P, A;

    printf("\nWhat do you want? \n [1]:Know the length of the hypotenuse of a triangle given two sides? \n [2]:Know if with given values a triangle can be created?");
    scanf("%d", &choice);

    if (choice == 1)
    {

        printf("\n Enter the a side's length: ");
        scanf("%lf", &a);

        printf("\n Enter the b side's length: ");
        scanf("%lf", &b);

        c = sqrt(pow(a, 2) + pow(b, 2));

        printf("The hypotenuse c is : %lf", c);
    }
    else if (choice == 2)
    {
        printf("\nInput the first number: ");
        scanf("%f", &x);
        printf("\nInput the second number: ");
        scanf("%f", &y);
        printf("\nInput the third number: ");
        scanf("%f", &z);

        if (x < (y + z) && y < (x + z) && z < (y + x))
        {
            P = x + y + z;
            printf("\nPerimeter  = %.1f\n", P);
        
        }
        else
        {
            printf("Not possible to create a triangle..!");
        }
    }

    return 0;
}
