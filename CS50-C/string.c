#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s;
    printf("Input: ");
    scanf("%s\n", s);
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}