#include <stdio.h>
int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    long long int total = 0;
    for (int i = 0; i < c; i++)
    {
        total = total + a[i];
    }
    printf("%lld", total);
    return 0;
}