#include <stdio.h>

// int main(void)
// {
//     int i = 3;
//     while (i > 0)
//     {
//         printf("meow\n");
//         i--;
//     }
// }

void meow(int n);

int main(void)
{
    meow(89);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}