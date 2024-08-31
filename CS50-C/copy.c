#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(100 * sizeof(char));
    char *t = malloc(strlen(s) + 1);

    printf("s: ");
    scanf("%s", s);

    if(t == NULL)
    {
        return 1;
    }

    // for (int i = 0, n = strlen(s); i <= n; i++)
    // {
    //     t[i] = s[i];
    // }

    strcpy(t,s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
    free(s);
    return 0;
}