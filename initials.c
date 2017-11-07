#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("\n");
    string s = get_string();

    if(s != NULL)
    {
            for(int i = 0, namelength = strlen(s); i < namelength; i++)
            {
                if(i == 0)
                {
                    printf("%c", toupper(s[0]));
                }
                else if(s[i] == 32)
                {
                    printf("%c", toupper(s[i + 1]));
                }
            }
            printf("\n");
    }
}