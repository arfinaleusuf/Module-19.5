#include<stdio.h>
#include<limits.h>
int max(int a[], int n, int i)
{
    if(i == n)
    {
        return INT_MIN;
    }
    int maximum = max(a,n,i+1);
    if(maximum>a[i])
    {
        return maximum;
    }
    else
    {
        return a[i];
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int maxiumum = max(a,n,0);
    printf("%d",maxiumum);
    return 0;
}