#include<stdio.h>
void fun(int n)
{
 
    int space = n-1;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=space;j++)
        {
            printf(" ");
        }
        int m = i;
        for(int j = 1;j<=(2*i-1);j++)
        {
            if(j<=i)
            {
                printf("%d",m);
                m--;
            }
            else 
            {
                if(m == 0) m++;
                m++;
                printf("%d",m);
            }
        }
        space--;
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}