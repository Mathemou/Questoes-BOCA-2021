#include <stdio.h>

int main(void)
{
    int n, i=0, min, max, qnt_den=0, qnt_for=0;
    scanf("%d ", &n);
    int nota[n];
    for(i=0; i<n; i++)
    {
        scanf("%d ", &nota[i]);
    }
    scanf("%d %d", &min, &max);
    for (i=0; i<n; i++)
    {
        if (nota[i]>=min&&nota[i]<=max)
        {
            qnt_den++;
        }
        else
        {
            qnt_for++;
        }
    }
    printf("%d %d", qnt_den, qnt_for);
    return 0;
}
