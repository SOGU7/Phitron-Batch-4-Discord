#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i = 1;i<=t;i++)
    {
        char s[102];
       // scanf("%s",s);
        gets(s);
       // getchar();
        //int size = strlen(s);
        int size = 0;
        int j = 0;
        while(s[j]!= '\0')
        {
            size++;
            j++;
        }

        if(size <= 10)
        {
            printf("%s\n",s);
        }
        else
        {
            printf("%c%d%c\n",s[0],size-2,s[size-1]);
        }
    }
}