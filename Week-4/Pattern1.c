#include<stdio.h>
void pattern_print()//No return type with no parameter
{
    int row;
    scanf("%d",&row);
    int space = row-1;
    int text = 1;
    for(int i = 1;i<=row;i++)
    {
        for(int j = 1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j = 1;j<=text;j++)
        {
            printf("*");
        }
        space--;
        text+=2;
        printf("\n");
    }

}
int main()
{
    pattern_print();
    return 0;
}