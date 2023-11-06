#include <stdio.h>
#include <string.h>
int main()
{
    char s[1002];
    scanf("%s", s);
    int size = strlen(s);
    int i = 0, j = size - 1;
    int flag = 1;
    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;

        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}