#include <stdio.h>
int main()
{

    int n;
    int sum1 = 0;
    int sum2 = 0;
    scanf("%d", &n);
    int V[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &V[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (V[i] > 0)
        {
            sum1 += V[i];
        }
        else
        {
            sum2 += V[i];
        }
    }
    printf("%d %d", sum1, sum2);

    return 0;
}