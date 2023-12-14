#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min = INT_MAX;

    for(int i = 0;i<n;i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    int pos;

    for(int i = 0;i<n;i++)
    {
        if(a[i] == min)
        {
            pos = i+1;
            break;
        }
    }
    printf("%d %d",min,pos);

    return 0;
}