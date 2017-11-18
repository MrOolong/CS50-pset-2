#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// a program that, given a person’s name, prints a person’s initials
int main(void)
{   
    // get user input via get_string()
    printf("\n");
    string s = get_string();

    if (s != NULL)
    {
        // iterate through string length
        for (int i = 0, namelength = strlen(s); i < namelength; i++)
        {
            if (i == 0)
            {
                // print to uppercase
                printf("%c", toupper(s[0]));
            }
            // check for spaces
            else if (s[i] == 32)
            {
                // print to uppercase
                printf("%c", toupper(s[i + 1]));
            }
        }
        // print new line
        printf("\n");
    }
}