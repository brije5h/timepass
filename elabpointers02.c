#include <stdio.h>
#include <string.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    int min_dif, max_dif;
    char S1[101], S2[101];
    int count1 = 0, count2 = 0;
    while (t--)
    {

        while (S1 != '\0')
        {
            scanf("%s %s", S1, S2);
        }
        for (i = 0; i < strlen(S1); i++)
        {
            if (S1[i] == '?')
            {
                count1 += 1;
            }
            else if (S2[i] == '?')
            {
                count1 += 1;
            }
            else if (S1[i] != S2[i])
            {
                count2 += 1;
            }
        }
        min_dif = count2;
        max_dif = count1 + count2;
        printf("%d %d", min_dif, max_dif);
    }
    return 0;
}