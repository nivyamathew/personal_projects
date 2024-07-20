#include <stdio.h>
#include <string.h>

// int string_length(char *s);

// int main(void)
// {
//     char name[50];
//     printf("Name: ");
//     scanf("%s", name);

//     // int n = 0;
//     // while (name[n] != '\0')
//     // {
//     //     n++;

//     // }
//     // printf("%i\n", n);
//     int length = string_length(name);
//     printf("%i\n", length);
// }

// int string_length(char *s)
// {
//     int n = 0;
//     while (s[n] != '\0')
//     {
//         n++;

//     }
//    return n;
// }


int main(void)
{
   char name[50];
    printf("Name: ");
    scanf("%s", name); 
    int length = strlen(name);
    printf("%i\n", length);
}