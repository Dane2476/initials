#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    string s;
    char space = ' ';


    do
    {
    s = get_string();
    }
    while (s == NULL);
    printf("%c", toupper(s[0]));

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == space)
        {
            printf("%c", toupper(s[i + 1]));
        }
    }
    printf("\n");
}