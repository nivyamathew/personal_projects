#include <stdio.h>

int main(void)
{
    int size, n;
    printf("size: ");
    scanf("%d", &size);
    int n = size;
    while (n < 1)
    {
       printf("size: ") ;
       scanf("%d", &size);
        n = size;
    }

    // Prompt user for positive integer
    do
    {
        printf("size: ");
        scanf("%d", &size);
        n = size;
    }
    while (n < 1);

//  Print an n-by-n grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}