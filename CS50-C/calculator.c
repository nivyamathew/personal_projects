#include <stdio.h>

// int add(int a, int b);

int main(void)
{
    int x, y;

    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    // int z = add (x, y);
    double z = (double) x / (double) y;
    printf("%.20f\n", z);
    // %.5f means 5 digits after decimal
}

// int add(int a, int b)
// {
//     return a + b;
// }