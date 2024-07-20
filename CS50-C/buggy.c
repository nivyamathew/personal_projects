#include <stdio.h>

void print_column(int height);

int main(void)
{
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("i is %i\n", i);
    //     printf("#\n");
    // }
    int h;
    printf("Height: ");
    scanf("%d", &h);
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i <= height; i++)
    {
        printf("#\n");
    }
}