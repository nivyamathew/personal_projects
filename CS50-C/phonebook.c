#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
}
person;

int main(void) 
{
    // char *names[] = {"Carter", "David", "John"};
    // char *numbers[] = {"+1-234-343-343-3", "+2-4578-4590-345", "+31-5784-345-343"};
    person  people[3];

people[0].name = "Carter";
people[0].number = "+1-478-373874";
people[1].name = "David";
people[1].number = "+2-478-373874";
people[2].name = "John";
people[2].number = "+31-478-373-874";

    char *name;
    printf("Name: ");
    scanf("%s", name);
    for(int i = 0; i < 3; i++)
    {
        if(strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}