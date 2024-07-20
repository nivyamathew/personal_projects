#include <stdio.h>

// int main(void)
// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
// }

int main(void)
{
    const int N;
    int scores[N], x;
    for(int i = 0; i < N; i++)
    {
    printf("Score: ");
    scores[i] = scanf("%d", &x);
    }
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) /(float) N);
}