#include <stdio.h>
#include <string.h>

int main(void)
{
    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    char *s;
    printf("String: ");
    scanf("%s", s);
    for (int i = 0 ; i < 6; i++)
    {
        if(strcmp(strings[i],s)==0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}