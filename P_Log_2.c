#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int count = 0;
    for(long long int i = n; i >= 2; i=i/2)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}