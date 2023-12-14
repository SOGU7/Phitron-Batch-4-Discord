#include<stdio.h>

//No return type with parameter

void shape(int n)
{
    int space = n-1;
    int text = 1;
    for(int i = 1;i<=2*n;i++)
    {
        for(int j = 1;j<=space;j++)
            printf(" ");
        for(int j = 1;j<=text;j++)
            printf("*");
        if(i<n)
        {
            space--;
            text+=2;
        }
        else if(i>n)
        {
            space++;
            text-=2;
        }
        printf("\n");
    }
  
}
int main()
{
    int row;
    scanf("%d",&row);
    shape(row);
    return 0;
}