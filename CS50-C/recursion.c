#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%d", &height);
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    
    // Print pyramid of height n-1
    draw(n-1);
    
    // print one more row
    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}