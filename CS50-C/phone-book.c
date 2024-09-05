#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv","a");

    char *name =  malloc(1 * sizeof(char));
    char *number = malloc(1 * sizeof(char));

    printf("name: ");
    scanf("%s", name);
    printf("number: ");
    scanf("%s", number);

    fprintf(file, "%s, %s\n", name, number);

    fclose(file);
}