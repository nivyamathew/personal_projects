#include <stdio.h>

// int main(void)
// {
//     int n = 50;
//     int *p = &n;
// %p - pointer
//     printf("%p\n", p);
// }

// int main(void)
// {
//     int n = 50;
//     int *p = &n;
//     printf("%i\n", *p);
// }

// int main(void)
// {
//     char *s ="HI!";
//     // printf("%s\n", s);
//     printf("%p\n", s);
//     // printf("%p\n", &s[0]);
//     // printf("%p\n", &s[1]);
//     // printf("%p\n", &s[2]);
//     // printf("%p\n", &s[3]);
// }

int main(void)
{
    char *s = "Hi!";
    // printf("%c", s[0]);
    // printf("%c", s[1]);
    // printf("%c\n", s[2]);
    printf("%c", *s);
    printf("%c", *(s + 1));
    printf("%c\n", *(s + 2));

}