/*Q94: Find the longest word in a sentence.


Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i, start = 0, len = 0;
    int maxLen = 0, j;

    printf("Enter a sentence: ");
    fgets(str, 200, stdin);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len > maxLen)
            {
                maxLen = len;

                for(j = 0; j < len; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[len] = '\0';
            }

            len = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("Longest word: %s", longest);

    return 0;
}