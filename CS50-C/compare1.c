#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int main(void)
// {
//     int i, j;
//     printf("i: ");
//     scanf("%i", &i);
//     printf("j: ");
//     scanf("%i", &j);

//     if(i == j)
//     {
//         printf("Same\n");
//     }
//     else
//     {
//         printf("Different\n");
//     }
// }

int main(void)
{
    char *s = malloc(1 * sizeof(char));
    char *t = malloc(100 * sizeof(char));
    char j[5];
    printf("%zu\n",sizeof(char));
    printf("%zu\n",sizeof(s));
    printf("%zu\n",sizeof(j));


    printf("s: ");
    scanf("%s", s);
    printf("t: ");
    scanf("%s", t);
    printf("j: ");
    scanf("%s", j);

    if( strcmp(s , t)==0)
    {
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }
}